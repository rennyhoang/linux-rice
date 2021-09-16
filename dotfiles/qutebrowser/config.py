# Change the argument to True to still load settings configured via autoconfig.yml
config.load_autoconfig(False)

# Which cookies to accept.
# Valid values:
#   - all: Accept all cookies.
#   - no-3rdparty: Accept cookies from the same origin only. This is known to break some sites, such as GMail.
#   - no-unknown-3rdparty: Accept cookies from the same origin only, unless a cookie is already set for the domain. On QtWebEngine, this is the same as no-3rdparty.
#   - never: Don't accept cookies at all.
config.set('content.cookies.accept', 'all', 'chrome-devtools://*')
config.set('content.cookies.accept', 'all', 'devtools://*')

# Value to send in the `Accept-Language` header.
config.set('content.headers.accept_language', '', 'https://matchmaker.krunker.io/*')

# User agent to send.
config.set('content.headers.user_agent', 'Mozilla/5.0 ({os_info}) AppleWebKit/{webkit_version} (KHTML, like Gecko) {upstream_browser_key}/{upstream_browser_version} Safari/{webkit_version}', 'https://web.whatsapp.com/')
config.set('content.headers.user_agent', 'Mozilla/5.0 ({os_info}; rv:90.0) Gecko/20100101 Firefox/90.0', 'https://accounts.google.com/*')
config.set('content.headers.user_agent', 'Mozilla/5.0 ({os_info}) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/99 Safari/537.36', 'https://*.slack.com/*')

# Load images automatically in web pages.
config.set('content.images', True, 'chrome-devtools://*')
config.set('content.images', True, 'devtools://*')

# Enable JavaScript.
config.set('content.javascript.enabled', True, 'chrome-devtools://*')
config.set('content.javascript.enabled', True, 'devtools://*')
config.set('content.javascript.enabled', True, 'chrome://*/*')
config.set('content.javascript.enabled', True, 'qute://*/*')

# Enable darkmode
c.colors.webpage.darkmode.enabled = False 
c.colors.webpage.preferred_color_scheme = 'dark'

# Completion
c.completion.height = '25%'
c.completion.scrollbar.width = 0

# Content autoplay
c.content.autoplay = False

# Default font
c.fonts.default_family = 'monospace'

# Hide scrollbar
c.scrolling.bar = 'never'

# Smooth scrolling
c.scrolling.smooth = True

# Statusbar
c.statusbar.show = 'in-mode'
c.statusbar.widgets = [ 'keypress', 'url', 'scroll', 'tabs', 'progress']

# Tabs
c.tabs.show = 'multiple'

# Xresources colors.
config.source('qutewal.py')
