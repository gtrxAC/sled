# SLED
Stupid Level EDitor

**The program is at a very WIP stage.**

## Features
- Small: a relatively flexible editor to make maps
- Export functionality: export to a `.sled` file or a header file
- Easy to use

## Usage

### Running the program
SLED can be called directly with no arguments and it will load up the "UI mode", which will ask either for a new map or ask you to load a map

However, SLED can also be used from the command line.

Calling
```
sled new
```
Will open up a small interface which will ask for input, then after all fields are completed, the program will run.

Calling
```
sled load
```
Will look for a `map.sled` file and a `sled_map_info.txt` file on the current working directory.

### Controls
- Use your left mouse button to set tiles
- Use your right mouse button to clear tiles
- Use the mouse wheel to zoom in or out
- Hold shift and use the left mouse button to pan over the map
- Use C and V to change the tileset index (this will be changed)

### Exporting
SLED has a vim-like way to export your maps. Inside the editor, there is a small textbox which will ask for commands. The commands are
```
tobin
toheader
```

## Building

### Linux
1. Run `./setup.sh` to build raylib.
2. Run `./build.sh` to compile the project.

### Windows
1. Download [w64devkit](https://github.com/skeeto/w64devkit/releases):
* `w64devkit-x.x.x.zip` for 64-bit
* `w64devkit-i686-x.x.x.zip` for 32-bit
2. Extract w64devkit and run `w64devkit.exe`.
3. Inside w64devkit, go to the directory where you cloned sled.
4. Run `./setup.sh` to build raylib.
5. Run `./build.sh` to compile the project.

### Windows (cross compile)
1. Install `mingw-w64` using your package manager.
2. Run `TARGET=Windows_NT ./setup.sh` to build raylib.
3. Run `TARGET=Windows_NT ./build.sh` to compile the project.

## Coming soon
SLED will have an api to load maps into your games. Although you can already use header files, it would be expensive in case it's too big of a map.

## Credits
Font - Ubuntu Mono R

## License
sled is licensed under the GPL-2.0 license.

