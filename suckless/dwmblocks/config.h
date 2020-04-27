//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Command*/	/*Update Interval*/	/*Update Signal*/
	/*{"cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	/* {"music",	0,	11}, */
	{"pacpackages",	0,	8},
	/* {"crypto",	0,	13}, */
	/* {"torrent",	20,	7}, */
	/* {"news",	0,	6}, */
	/* {"cpu",		10,	13}, */
	/* {"memory",	10,	14}, */
	/* {"moonphase",	18000,	5}, */
	/* {"mailbox",	180,	12}, */
	{"weather",	600,	5},
	{"internet",	5,	4},
	{"light",	0,	10},
	{"volume",	0,	10},
	{"battery",	5,	3},
	{"clock",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost */dwmblocks/config.h !sudo make install && { killall -q dwmblocks;setsid dwmblocks & }