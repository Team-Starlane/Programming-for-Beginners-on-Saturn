/*
** Jo Sega Saturn Engine
** Copyright (c) 2012-2017, Johannes Fetz (johannesfetz@gmail.com)
** All rights reserved.
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are met:
**     * Redistributions of source code must retain the above copyright
**       notice, this list of conditions and the following disclaimer.
**     * Redistributions in binary form must reproduce the above copyright
**       notice, this list of conditions and the following disclaimer in the
**       documentation and/or other materials provided with the distribution.
**     * Neither the name of the Johannes Fetz nor the
**       names of its contributors may be used to endorse or promote products
**       derived from this software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
** ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
** WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
** DISCLAIMED. IN NO EVENT SHALL Johannes Fetz BE LIABLE FOR ANY
** DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
** (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
** LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
** ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <jo/jo.h>

/************************************************
 * @brief
 * Draw sprite loaded into memory with jo_sprite_add_tga
 * in main. Created with id 0 and called with id 0 as 
 * first parameter in jo_sprite_draw3d.
 * 
 * Draw at screen center (2nd and 3d parameter > xy coordinates).
 * 
 * Draw at z depth of 500, because camera is at 0 and you
 * won't see the sprite at that z position. 
 ***********************************************/
void			my_draw(void)
{
	jo_sprite_draw3D(0, 0, 0, 500);
}

/************************************************
 * @brief
 * Load sprite from root of cd image (JO_ROOT_DIR).
 * Subdirectories are often broken. Don't use.
 * 
 * Second parameter is full filename
 * (ALLCAPS on BOTH file and string! 
 * Especially Linux has a problem,
 * if these are not consistent).
 * 
 * Third parameter sets no transparency, if set to 0.
 * Color indices, when using paletted images,
 * start at 1 not 0 (don't ask me why).
 * 
 * So if your first colorindex on your image (index 0)
 * is your transparency, enter 1 here.
 ***********************************************/
void			jo_main(void)
{
	jo_core_init(JO_COLOR_DarkRed);
	jo_sprite_add_tga(JO_ROOT_DIR, "SONIC.TGA", 0);
	jo_core_add_callback(my_draw);
	jo_core_run();
}

/************************************************
 * Things to try for yourself:
 * 
 * a) Make the background black with jo_core_init,
 * so the image borders of SONIC.TGA are not so
 * apparent.
 * 
 * b) Add another Sonic sprite at a different position
 * on screen.
 * 
 * Keep the x and y values lower than
 * the distance to the screen borders (320 * 240 / 2)
 * or the sprite will go off screen.
 * 
 * New sprite IDs are set automatically by jo_sprite_add_tga
 * and tick up by 1 every time the function is called.
 ***********************************************/

/*
** END OF FILE
*/
