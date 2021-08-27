/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";

static const char *fonts[] = {
	font, 
  "monospace:size=10",
};

static const char *symbol_1 = "<";
static const char *symbol_2 = ">";

static char *prompt      = "run:";      /* -p  option; prompt to the left of input field */
static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char termcol0[] = "#000000"; /* black   */
static char termcol1[] = "#ff0000"; /* red     */
static char termcol2[] = "#33ff00"; /* green   */
static char termcol3[] = "#ff0099"; /* yellow  */
static char termcol4[] = "#0066ff"; /* blue    */
static char termcol5[] = "#cc00ff"; /* magenta */
static char termcol6[] = "#00ffff"; /* cyan    */
static char termcol7[] = "#d0d0d0"; /* white   */
static char termcol8[]  = "#808080"; /* black   */
static char termcol9[]  = "#ff0000"; /* red     */
static char termcol10[] = "#33ff00"; /* green   */
static char termcol11[] = "#ff0099"; /* yellow  */
static char termcol12[] = "#0066ff"; /* blue    */
static char termcol13[] = "#cc00ff"; /* magenta */
static char termcol14[] = "#00ffff"; /* cyan    */
static char termcol15[] = "#ffffff"; /* white   */
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { termcol7, termcol0 },
	[SchemeSel]  = { termcol3, termcol0 },
	[SchemeOut]  = { "#000000",   "#00ffff" },
	[SchemeSelHighlight] = { termcol15, termcol0 },
	[SchemeNormHighlight] = { termcol15, termcol0 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "normfgcolor", STRING, &normfgcolor },
	{ "normbgcolor", STRING, &normbgcolor },
	{ "selfgcolor",  STRING, &selfgcolor },
	{ "selbgcolor",  STRING, &selbgcolor },
	{ "prompt",      STRING, &prompt },
	{ "color0",      STRING, &termcol0 },
	{ "color1",      STRING, &termcol1 },
	{ "color2",      STRING, &termcol2 },
	{ "color3",      STRING, &termcol3 },
	{ "color4",      STRING, &termcol4 },
	{ "color5",      STRING, &termcol5 },
	{ "color6",      STRING, &termcol6 },
	{ "color7",      STRING, &termcol7 },
	{ "color8",      STRING, &termcol8 },
	{ "color9",      STRING, &termcol9 },
	{ "color10",      STRING, &termcol10 },
	{ "color11",      STRING, &termcol11 },
	{ "color12",      STRING, &termcol12 },
	{ "color13",      STRING, &termcol13 },
	{ "color14",      STRING, &termcol14 },
	{ "color15",      STRING, &termcol15 },
};
