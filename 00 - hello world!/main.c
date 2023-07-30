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
 * As usual we start by including our SDK's
 * library, so we can use its functions.
 * 
 * There won't be any further includes
 * until we get to much more advanced tutorials. 
 ***********************************************/
#include <jo/jo.h>

/************************************************
 * Let's look at introducing some variables instead.
 * 
 * In laymens terms. The computer needs numbers,
 * it can do math with, right?
 * 
 * It needs to write them down or store them
 * somewhere.
 * 
 * These are the variables we will look.
 * They're called variables, because well,
 * they can change their value.
 * 
 * There is three types of things,
 * you can do with a variable.
 * 
 * First you can "declare" a variable,
 * basically telling the computer,
 * you'd like a variable,
 * what type you'd like it to be,
 * and what its name is.
 * 
 * Let's do that now.
 ***********************************************/

int foo;

/************************************************
 * This is foo, your variable. The name is arbitrary,
 * you need it to refer to your variable later.
 * 
 * Just be mindful of the naming conventions
 * for variables (no spaces etc. pp.).
 * You will find those online. 
 * 
 * Its type is int(eger), the most common type.
 * As the name suggest it is a whole number.
 * It doesn't do fractions. So 1, 2, 3 are all ok.
 * 3.141 is not. We will get to how to do fractions later.
 * 
 * Using only whole numbers is useful, because the
 * a computer can calculate with them much faster,
 * so your game slows down less.
 * 
 * Let's ask for another.
 * Let's "initialize" the variable this time aka,
 * give it an actual value.
 * foo doesn't have a value yet for example.
 ***********************************************/

int bar = 1;

bool shroedinger = FALSE;

/************************************************
 * @brief
 ***********************************************/
void	my_draw(void)
{
	jo_printf(0, 0, "Hello world!");
}

/************************************************
 * @brief
 * Here we have the main function again.
 * Nothing has changed and most likely won't
 * in the following tutorials.
 * 
 * We will just update, what the Saturn should
 * draw on screen in the mydraw function.
 ***********************************************/
void	jo_main(void)
{
	jo_core_init(JO_COLOR_Black);
	jo_core_add_callback(my_draw);
	jo_core_run();
}

/************************************************
 * Things to try for yourself:
 ***********************************************/

/*
** END OF FILE
*/
