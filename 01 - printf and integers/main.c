/*
** Jo Sega Saturn Engine
** Copyright (c) 2012-2013, Johannes Fetz (johannesfetz@gmail.com)
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

/************************************************
 * This is a standard setup for a game loop i.e.
 * programs in general.
 * 
 * The contents of a standard library are included
 * at the point of the include directive
 * (you might know stdio.h, standard input output,
 * from other C tutorials).
 * 
 * This means, we can use all functions predefined
 * in that library.
 * 
 * Since we are using Jo-Engine, this is what we
 * include via the specified header file (a filetype
 * used to link up to a bunch of other files).
 * 
 * Later there will be also the option, to include
 * entire libraries or just files with c code
 * (like the main.c file, you are reading right now)
 * to make the entire coding process more maneagable
 * and not have all your code in one single file.
 ***********************************************/
#include <jo/jo.h>

/************************************************
 * @brief
 * Secondly we define the drawing code
 * aka the code that displays images / text etc. pp.
 * on screen (draws them).
 * 
 * There is no actual game logic as of yet,
 * so this is all that will be called from
 * the main function / program entry point.
 * 
 * The game logic being e.g the mathematical
 * calculations that makes your game character move
 * on screen, when you input button commands
 * or the physics inside the game world like gravity
 * projectiles etc. pp.
 * 
 * All it does for now is print the string "Hello world!"
 * on screen.
 * 
 * Print meaning displaying it on screen.
 * 
 * Print is a legacy term from a time,
 * when there were few actual computer displays
 * and your printer would physically print
 * out, what you wrote on your keyboard,
 * so you could see, what the computer was doing
 * (no, I am not kidding).
 ***********************************************/
void	my_draw(void)
{
	jo_printf(0, 0, "Hello world!");
}

/************************************************
 * @brief
 * In this last function, the main function
 * aka the program entry point, the actual 
 * execution of the program is organized.
 * 
 * This is done, by either calling on predefined
 * functions inside the library (or later on 
 * libraries, plural), we are using or by calling
 * on functions, we defined above.
 * 
 * In this case there is only one function we wrote
 * ourselves, the mydraw function,
 * which displays Hello World! on screen.
 * 
 * The two other functions, encasing mydraw,
 * are jo_core_init and jo_core_run.
 * 
 * I do not know, what the first functions sets up
 * in detail. But it is needed at the start of every
 * main loop inside the Jo Engine SDK.
 * 
 * The parameter it takes is a color value,
 * in this case predefined by a #define statement
 * inside the jo library.
 * 
 * There is a list of predefined colors, inside
 * jo, that you can use. In this case Black.
 * 
 * It sets the background layer to that color.
 ***********************************************/
void	jo_main(void)
{
	jo_core_init(JO_COLOR_Black);
	jo_core_add_callback(my_draw);
	jo_core_run();
}

/************************************************
 * Things to try for yourself:
 * 
 * Here's a long list of colors you can replace
 * JO_COLOR_Black with. Have fun:
 * 
 * https://jo-engine.org/doxygen/colors_8h.html
 * 
 * Try what happens, if you compile with
 * JO_COLOR_White.
 * 
 * Remember to type the color exactly, how it is
 * written and stay inside the brackets.
 * C is case sensitive.
 * Also don't add any spaces or any other nonesense.
 ***********************************************/

/*
** END OF FILE
*/
