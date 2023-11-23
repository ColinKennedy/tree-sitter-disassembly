local base64 = require("base64")


local function _get_chunk(buffer, byte, byte_width, total_group_width, group_spacing)
    local group_spacing = group_spacing or " "
    local total_group_width = total_group_width or 16
    local half_width = total_group_width / 2

    local chunk = buffer:sub(byte, byte + total_group_width - 1)
    local count = 0
    local line = ""

    chunk:gsub(
        ".",
        function(character)
            if count == half_width
            then
                line = line .. group_spacing
                count = 0
            end

            line = line .. string.format(
                "%0" .. byte_width .. "X ",
                string.byte(character)
            )
            count = count + 1
        end
    )

    return line, chunk
end


function hex_dump(buffer, starting_address)
    local starting_address = starting_address or 0
    local output = {}
    local line_width = 16

    local machine_code_bytes_width = 2
    local per_byte_width = machine_code_bytes_width + 1
    local byte_group_spacing = " "
    local byte_group_spacing_length = #byte_group_spacing

    for byte=1, #buffer, line_width
    do
        local line = ""

        -- The machine address column (aka the first column)
        line = line .. "0x" .. string.format("%016X: ", starting_address + byte - 1)

        -- The machine bytes column (aka the second column)
        local machine_code_bytes, chunk = _get_chunk(
            buffer,
            byte,
            machine_code_bytes_width,
            line_width,
            byte_group_spacing
        )
        line = line .. machine_code_bytes

        -- pad spaces as needed to keep the columns aligned
        line = line .. string.rep(
            " ",
            ((per_byte_width * line_width) + byte_group_spacing_length) - #machine_code_bytes
        )

        -- The disassembled characters column (aka the third column)
        line = line .. " " .. chunk:gsub("[%z\1-\31\127-\255]", ".")

        table.insert(output, line)
    end

    return output
end


local address = "0x7FFFFFFFCF78"
local data = "E9P///9/AAAe0////38AADHT////fwAAQtP///9/AABU0////38AAGjT////fwAAidP///9/AACg0////38AALDT////fwAAwdP///9/AADL0////38AAAPU////fwAAGtT///9/AAAy1P///38AAIjU////fwAAqdT///9/AADA1P///38AANzU////fwAA7NT///9/AAB52v///38AAJfa////fwAAwNr///9/AAAO2////38AABnb////fwAAPNv///9/AABd2////38AAH3b////fwAAruj///9/AAC56P///38AAMvo////fwAA8uj///9/AAAG6f///38AABfp////fwAAJOn///9/AABZ6f///38AAGfp////fwAAqOn///9/AACx6f///38AANLp////fwAABer///9/AAAc6v///38AACvq////fwAAQer///9/AABJ6v///38AAHvq////fwAAwer///9/AADt6v///38AAJXs////fwAAqOz///9/AADG7P///38AAFrt////fwAAvO3///9/AADb7f///38AAP7t////fwAAFO7///9/AABf7v///38AAGzu////fwAAi+7///9/AACW7v///38AANPu////fwAAD+////9/AAAp7////38AAJPv////fwAAp+////9/AAAAAAAAAAAAACEAAAAAAAAAAKD/9/9/AAAQAAAAAAAAAP/7678AAAAABgAAAAAAAAAAEAAAAAAAABEAAAAAAAAAZAAAAAAAAAADAAAAAAAAAEAAQAAAAAAABAAAAAAAAAA4AAAAAAAAAAUAAAAAAAAACQAAAAAAAAAHAAAAAAAAAACw3ff/fwAACAAAAAAAAAAAAAAAAAAAAAkAAAAAAAAAcARAAAAAAAALAAAAAAAAAOgDAAAAAAAADAAAAAAAAADoAwAAAAAAAA0AAAAAAAAA6AMAAAAAAAAOAAAAAAAAAOgDAAAAAAAAFwAAAAAAAAAAAAAAAAAAABkAAAAAAAAAydL///9/AAAaAAAAAAAAAAAAAAAAAAAAHwAAAAAAAADP7////38AAA8AAAAAAAAA2dL///9/AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAxfmJJo/T7OhWJWpd4VZ9tng4Nl82NAAAAAAAAAAAAAAAL2hvbWUvc2VsZWNhb29uZS90ZW1wL2NwcF9kYXBfdGVzdC9hLm91dABYREdfVlROUj0zAFNTSF9BR0VOVF9QSUQ9Mzk3NQBYREdfU0VTU0lPTl9JRD0xAFRFUk1fUFJPR1JBTT10bXV4AEhPU1ROQU1FPXNlbA=="

local decoded = base64.decode(data)

-- hex_dump(decoded, tonumber(address, 16))

-- print(tonumber(address, 16))

for _, line in ipairs(hex_dump(decoded, tonumber(address, 16)))
do
    print(line)
end

