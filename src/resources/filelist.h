/****************************************************************************
 * Loadiine resource files.
 * This file is generated automatically.
 * Includes 3 files.
 *
 * NOTE:
 * Any manual modification of this file will be overwriten by the generation.
 ****************************************************************************/
#ifndef _FILELIST_H_
#define _FILELIST_H_

typedef struct _RecourceFile
{
	const char          *filename;
	const unsigned char *DefaultFile;
	const unsigned int  &DefaultFileSize;
	unsigned char	    *CustomFile;
	unsigned int        CustomFileSize;
} RecourceFile;

static RecourceFile RecourceList[] =
{
	{"bgMusic.ogg", NULL, 0, NULL, 0},
	{"button_click.mp3", NULL, 0, NULL, 0},
	{"font.ttf", NULL, 0, NULL, 0},
	{NULL, NULL, 0, NULL, 0}
};

#endif
