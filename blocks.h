//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" 󰓇 ", "~/scripts/dwm_bar/song.sh || echo 'Not running'",	5,	0},
	{"󰤨 ", "nmcli | grep 'connected' | awk '{ print $4 }'", 	10,	0},
	{" ", "echo $(cat /sys/class/power_supply/BAT0/capacity)%", 	10,	0},
	{"󰃭 ", "date '+%b %d, %Y - %R'",				5,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
