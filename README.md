# tree-sitter-disassembly
This library parses disassembly text using
[tree-sitter](https://tree-sitter.github.io/tree-sitter) to produce
a light-weight grammar of the file.

TODO Add screenshot here


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
