# Competetive Programming Repo

> MY PRACTICE CODES, the part that may interest you is the `debug\_latest` script

### debug\_latest

This script automates the finding of the latest .cpp file you were editing/wrote, and merge a `header_template.hpp` at the root location (location where this script is), then compiles the merged file, and start gdb to debug it;

First either add this directory to PATH, or run this:

```sh
./install_script
```

In the directory with the .cpp file, run
```sh
debug_latest
```
And then gdb will be started, at main() function directly.

