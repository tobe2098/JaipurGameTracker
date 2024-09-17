# GameStateTrackers
Trackers for game states in C

# Building and running
## Windows
- If using Windows, you can use the exe directly or install Powershell, msys2, ninja, and compile it yourself.
### MSYS2
1. Install Powershell and msys2.
2. Inside the mingw64 terminal, install ninja (```pacman -S mingw-w64-x86_64-ninja```), cmake (`pacman -S mingw-w64-x86_64-cmake `) and the toolchain (`pacman -S mingw-w64-x86_64-toolchain`).
3. Add to the environment variable Path the path to the mingw64 binaries(`.../mingw64/bin`).
4. Run `cmake -G "Ninja" -DCMAKE_BUILD_TYPE=Release .` in the game folder.
5. Run `ninja`.
6. The compiled binary will be in `./bin/`.
7. Enjoy!

Alternatively, you can also do:
1. Run `cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release .` in the game folder.
2. Run `mingw32-make`.