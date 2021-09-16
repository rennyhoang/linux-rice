# XDG_BASE_DIRECTORY
XDG_CONFIG_HOME=$HOME/.config
XDG_CACHE_HOME=$HOME/.cache
XDG_DATA_HOME=$HOME/.local/share

export LESSHISTFILE=-
export NPM_CONFIG_USERCONFIG=$XDG_CONFIG_HOME/npm/npmrc
export GTK2_RC_FILES=$XDG_CONFIG_HOME/gtk-2.0/gtkrc
export VSCODE_PORTABLE="$XDG_DATA_HOME"/vscode
export _JAVA_OPTIONS=-Djava.util.prefs.userRoot="$XDG_CONFIG_HOME"/java
export PLATFORMIO_CORE_DIR=$XDG_DATA_HOME/platformio

export EDITOR=nvim
export BROWSER=qutebrowser
export TERMINAL=st

export QT_QPA_PLATFORMTHEME=qt5ct

# nnn
export NNN_TRASH=y
export NNN_ARCHIVE="\\.(7z|a|ace|alz|arc|arj|bz|bz2|cab|cpio|deb|gz|jar|lha|lz|lzh|lzma|lzo|rar|rpm|rz|t7z|tar|tbz|tbz2|tgz|tlz|txz|tZ|tzo|war|xpi|xz|Z|zip)$"
export NNN_FIFO=/tmp/nnn.fifo
export NNN_OPTS="HdCc"
