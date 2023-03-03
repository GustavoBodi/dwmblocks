//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  \uf0a0  :  ", "free -h | awk '/^Mem/ { print $3\"  /  \"$2}' | sed s/i//g", 5,		0},

	{"  \uf073  :  ", "date '+%b %d (%a)'",  5, 0},

  {"  \uf017  :  ", "date '+%I:%M %p  '", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
