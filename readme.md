

# To build debug
- cmake -S. -Bbuild
- cmake --build build -j

This will create a build directory and compile all necessary artifacts there. The main executable will be located in build/.

# to build in release
For release build use --config Release on Windows:
- cmake -S. -Bbuild
- cmake --build build -j --config Release

Artifacts for both configurations will be generated in the build directory.

On Mac or Linux you'll need to maintain two build trees:
- cmake -S. -Bbuild -DCMAKE_BUILD_TYPE=Debug
- cmake --build build -j
- cmake -S. -Bbuild-rel -DCMAKE_BUILD_TYPE=Release
- cmake --build build-rel -j