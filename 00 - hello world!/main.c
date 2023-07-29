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
 * @brief
 * The SDK itself. Include libraries in your
 * project folder with "quotes".
 *
 * The filepath called by the <angle brackets>
 * is specified in the make file:
 * JO_ENGINE_SRC_DIR=../../jo_engine
 ***********************************************/
#include <jo/jo.h>

/************************************************
 * @brief
 * Main draw function. Called every frame through
 * jo_core_add_callback function in the main loop.
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
