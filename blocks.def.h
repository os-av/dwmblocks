// Modify this file to change what commands output to your statusbar, and 
// recompile using the make command.
static const Block blocks[] = {
	  /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",          "volume",											  0,      10},
    {"",          "battery",									     60,       0},
	{"",          "mem",                                              5,       0},
	{"",          "network",                                          5,       0},
	{" ",        "date '+%H:%M'",                                   60,       0},
	{" ",        "date '+%a, %x'",						             60,	   0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
