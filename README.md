gamemonkey-unofficial
=====================

Unofficial GameMonkey Script Repo

What is GameMonkey Script?
==========================
GameMonkey is a embedded scripting language that is intended for use in game and tool applications. GameMonkey is however suitable for use in any project requiring simple scripting support. GameMonkey borrows concepts from Lua (www.lua.org), but uses syntax similar to C, making it more accessible to game programmers. GameMonkey also natively supports multithreading and the concept of states.

Can I use GameMonkey freely in my hobby or work project?
========================================================
Yes, GameMonkey is distributed under the MIT license and is free for any use including commercial products. Please read the full license included in the download package.

What are the key features of GM?
================================

* Small code base. Compiled code may use about 50kb of RAM. Less when tweaking or sharing with application.
* Compile source code at run time, or link to precompiled libs.
* Lightweight, native threading.
* Soft real-time incremental garbage collection. Controllable memory footprint. No painful reference counting.
* Easy to bind C\C++ functions and call script from C\C++.
* Runtime debugging and reflexion support.
* C style syntax.
* Competitive performance when compared to other scripting languages for both CPU and Memory usage. Speed is a trade off for flexibility and simplicity.
* Easily modifiable as it is written in C++ and uses Flex and Bison.

What is the purpose of this unofficial repository?
==================================================

Game Monkey is a really great embedded script platform, but the release system in place by the authors is difficult to get fixes released to other developers quickly.

What are the goals of this unofficial repository?
=================================================

* Reorganize the code to help other developers get the code and information they need quickly
* Add CMake files to generate project files for building gmscript as a library
* Allow other developers to easily contribute patches and squash bugs

Are you connected to Matt or Greg, the GMScript Developers?
===========================================================

Nope, however, I'd like to help them transition their codebase to revision control, and have more community input.
