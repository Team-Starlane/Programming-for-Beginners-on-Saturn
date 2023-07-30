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

#include <jo/jo.h>

/************************************************
 * Declaration of three global variables for later
 * use.
 ***********************************************/
int foo = 1;
int bar = 1;
int baz;

/************************************************
 * @brief
 * One time function, adding global variables together.
 * Other operators are subtract(-), divide(/), multiply (*).
 ***********************************************/
void	my_math()
{
	baz = foo + bar;
}

/************************************************
 * @brief
 * Function called every frame, displaying
 * - in this case - result of mymath function.
 ***********************************************/
void	my_draw(void)
{
	jo_printf(0, 0, "foo + bar =%d", baz);
}

/************************************************
 * @brief
 * Main function with standard structure.
 * Initialization, program functions, draw code,
 * startup.
 ***********************************************/
void	jo_main(void)
{
	jo_core_init(JO_COLOR_Black);
	my_math();
	jo_core_add_callback(my_draw);
	jo_core_run();
}

/************************************************
 * Things to try for yourself:
 * 
 * Let the program
 * - multiply 3 with 3
 * - divide 9 by 3
 * - subtract 3 from 3
 * 
 * Don't forget to change printf display text
 * accordingly.
 ***********************************************/

/*
** END OF FILE
*/
