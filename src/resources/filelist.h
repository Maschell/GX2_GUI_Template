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
	const char *filename;
	const u8   *DefaultFile;
	const u32  &DefaultFileSize;
	u8		   *CustomFile;
	u32		    CustomFileSize;
} RecourceFile;

extern const u8 bgMusic_ogg[];
extern const u32 bgMusic_ogg_size;

extern const u8 button_click_mp3[];
extern const u32 button_click_mp3_size;

extern const u8 font_ttf[];
extern const u32 font_ttf_size;

static RecourceFile RecourceList[] =
{
	{"bgMusic.ogg", bgMusic_ogg, bgMusic_ogg_size, NULL, 0},
	{"button_click.mp3", button_click_mp3, button_click_mp3_size, NULL, 0},
	{"font.ttf", font_ttf, font_ttf_size, NULL, 0},
	{NULL, NULL, 0, NULL, 0}
};

#endif
