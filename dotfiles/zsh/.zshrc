# basic configuration
HISTFILE=~/.cache/zsh/histfile
HISTSIZE=10000
SAVEHIST=10000
setopt autocd extendedglob notify
unsetopt beep
zstyle :compinstall filename '/home/renny/.config/zsh/.zshrc'
autoload -Uz compinit
compinit;

precmd() {
    precmd() {
        echo
    }
}

# aliases
alias ls="exa --icons --color always --group-directories-first"
alias la="exa --icons --color always --group-directories-first -a"

source $ZDOTDIR/zsh-plugins.sh

# starship prompt
eval "$(starship init zsh)"

(cat ~/.config/wpg/sequences &)

pfetch
