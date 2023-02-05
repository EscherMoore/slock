/* user and group to drop privileges to */
static const char *user  = "escher";
static const char *group = "escher";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#83a598",   /* during input */
	[FAILED] = "#cc241d",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
