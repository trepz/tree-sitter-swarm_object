Simple grammar for parsing swarm object files for Space Marine 2.

### Using with nvim

If you want to use this for syntax highlighting in nvim add something like the following to your config:

```lua
local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
---@diagnostic disable-next-line: inject-field
parser_config.swarm_object = {
  install_info = {
    url = 'https://github.com/trepz/tree-sitter-swarm_object',
    files = { 'src/parser.c' },
    highlight = {
      enable = true,
    },
    branch = 'main',
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
}
vim.filetype.add {
  extension = { sso = 'swarm_object', cls = 'swarm_object', prop = 'swarm_object' },
}
```

And then copy the `.scm` files in `queries/` to your nvim query config path under a new language directory, might look like:

`~/.config/nvim/queries/swarm_object/highlights.scm`

Then run `:TSUpdate` and you shold be good to go.

![highlight-example](https://github.com/user-attachments/assets/b9fb5815-0cc7-4db9-9603-e720ea45fd0f)
