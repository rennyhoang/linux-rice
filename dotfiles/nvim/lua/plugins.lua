return require('packer').startup(function()
  -- Packer can manage itself
  use 'wbthomason/packer.nvim'

  -- Treesitter (syntax highlighting)
  use {
	'nvim-treesitter/nvim-treesitter', 
	run = ':TSUpdate'
  }

  -- LSP
  use 'neovim/nvim-lspconfig'
  use 'kabouzeid/nvim-lspinstall'

  -- Completion
  use 'nvim-lua/completion-nvim'

  -- Snippets
  use 'hrsh7th/vim-vsnip'
  use 'rafamadriz/friendly-snippets'

  -- Fuzzy Finder
  use 'nvim-telescope/telescope.nvim'

  -- Colorizer
  use 'norcalli/nvim-colorizer.lua'

  -- Colorscheme (based on xresources)
  use 'nekonako/xresources-nvim'

  -- Tab Bar
  use {
    'romgrk/barbar.nvim',
    requires = {'kyazdani42/nvim-web-devicons'}
  }

  -- Statusline
  use {
    'hoob3rt/lualine.nvim',
    requires = {'kyazdani42/nvim-web-devicons', opt = true}
  }

  -- File Explorer
  use {
    'kyazdani42/nvim-tree.lua',
    requires = 'kyazdani42/nvim-web-devicons'
  }

  -- Autopairing 
  use 'windwp/nvim-autopairs'

end)
