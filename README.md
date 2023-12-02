# tree-sitter-disassembly
This library parses disassembly text using
[tree-sitter](https://tree-sitter.github.io/tree-sitter) to produce
a light-weight grammar of the file.


## Screenshots
### Assembly
![tree_sitter_disassembly_full_screen](https://github.com/ColinKennedy/tree-sitter-disassembly/assets/10103049/efb873a6-4082-4da0-bb2a-7244f76a8b32)


### Memory Dumps
![tree_sitter_disassembly_memory_dump](https://github.com/ColinKennedy/tree-sitter-disassembly/assets/10103049/a53fc773-3791-48f0-8ff0-8a10af8f4897)


### ARM
Limited ARM support

![tree_sitter_arm_disassembly](https://github.com/ColinKennedy/tree-sitter-disassembly/assets/10103049/5877bc53-0145-45f9-a370-3ff56a55ab54)


### nvim-dap-ui
Warning: WIP. This feature is not yet merged into nvim-dap-ui.

![tree_sitter_disassembly_nvim_dap_ui](https://github.com/ColinKennedy/tree-sitter-disassembly/assets/10103049/9c899838-5983-431d-8320-5725f75f4f31)


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
