Unofficial GameMonkey Repository
================================

What is GameMonkey Script?
--------------------------
GameMonkey is a embedded scripting language that is intended for use in game and tool applications. GameMonkey is however suitable for use in any project requiring simple scripting support. GameMonkey borrows concepts from Lua (www.lua.org), but uses syntax similar to C, making it more accessible to game programmers. GameMonkey also natively supports multithreading and the concept of states.

Can I use GameMonkey freely in my hobby or work project?
--------------------------------------------------------
Yes, GameMonkey is distributed under the MIT license and is free for any use including commercial products. Please read the full license included in the download package.

What are the key features of GM?
--------------------------------

* Small code base. Compiled code may use about 50kb of RAM. Less when tweaking or sharing with application.
* Compile source code at run time, or link to precompiled libs.
* Lightweight, native threading.
* Soft real-time incremental garbage collection. Controllable memory footprint. No painful reference counting.
* Easy to bind C\C++ functions and call script from C\C++.
* Runtime debugging and reflexion support.
* C style syntax.
* Competitive performance when compared to other scripting languages for both CPU and Memory usage. Speed is a trade off for flexibility and simplicity.
* Easily modifiable as it is written in C++ and uses Flex and Bison.

How do I build GameMonkey?
--------------------------

**As a Library**

 1. Open up CMake
 2. Specify the "Where is the source code?" to the path of the repository (for instance, mine is "C:\repos\gamemonkey-unofficial") - for the sake of simplicity, I'll refer to this path as repo_path
 3. Specify the "Where to build the binaries?" to another directory; I typically use repo_path/build. We'll just call this the repo_build_path.
 4. Click configure. It will prompt you for your toolchain if you haven't set it already. I use mingw, so that's what I picked, but you can also specify your MSVC version. (Note:If you're using mingw/msys, it may give you an error the first time you configure the project - not sure why this is currently, just configure again and it should be fine.)
 5. Click generate; this will generate the appropriate project files in repo_build_path
 6. For MSVC users, you should have a project file for your appropriate version that you selected from the configure step.
 7. For makefile people, just go in here and use your make tool.

**Using the source in your project**

Just include the source files and add the include/gamemonkey folder to your include directory, there are no additional dependencies or third party libraries that you'll need to link to.

What is the purpose of this unofficial repository?
--------------------------------------------------

Game Monkey is a really great embedded script platform, but the release system in place by the authors is difficult to get fixes released to other developers quickly.

What are the goals of this unofficial repository?
-------------------------------------------------

* Reorganize the code to help other developers get the code and information they need quickly
* Add CMake files to generate project files for building gmscript as a library
* Allow other developers to easily contribute patches and squash bugs

Are you connected to Matt or Greg, the GMScript Developers?
-----------------------------------------------------------

Nope, however, I'd like to help them transition their codebase to revision control, and have more community input.
