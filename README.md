- Add docstrings to scanner.c
- Get all tests to pass
- Clean up the old, copied objdump code
 - Possibly remove the code_location code from lines like
  `23:	74 12                                                 	je     37 <engine::world::World::initialize()+0x25> (File Offset: 0xa7)`
- Add highlight unittests for the assembly/ folder tests


# tree-sitter-disassembly
This library parses disassembly text using
[tree-sitter](https://tree-sitter.github.io/tree-sitter) to produce
a light-weight grammar of the file.

![tree-sitter-disassembly-nvim-dap-ui](https://github.com/ColinKennedy/tree-sitter-disassembly/assets/10103049/b95cbefd-8b87-4638-9373-275981d9451b)
![tree-sitter-disassembly-full-screen](https://github.com/ColinKennedy/tree-sitter-disassembly/assets/10103049/67f47a14-5fc5-42d2-ba09-bd9250dcb726)


## Disclaimer
This repository's parsing rules are subject to change.


## Building + Using
### Neovim
Make sure you include the following somewhere in your `init.lua` file.

```lua
require("nvim-treesitter.configs").setup {
    ensure_installed = {"disassembly"},
    parser_install_dir = installation_directory,
    highlight = { enable = true },

    -- More stuff
}
```


## Testing
### Unittests
- Install the [tree-sitter-cli](https://www.npmjs.com/package/tree-sitter-cli)
```sh
cd {root}
tree-sitter test
```

All tests should pass.


### Actual Disassembly
The best way to test tree-sitter-disassembly is to parse open gdb or another
debugger and copy its output. Basically anything that a DAP server can output
should in theory be parseable by tree-sitter-disassembly.
