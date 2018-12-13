# workbench-test

Just testing out the Particle Workbench with the Spectra Mesh badge

## Compiling

Either:

```
particle compile xenon
```

Or, assuming you have this repo checked out at `$HOME/dev/workbench-test` and the Particle `firmware` repo checked out at `~/dev/firmware`:

```
cd ~/dev/firmware/main
make clean all PLATFORM=xenon APPDIR=$HOME/dev/workbench-test
```

## Flashing

Either:

```
particle flash <device> xenon-*.bin
```

Or, if you compiled using APPDIR from the firmware repo:

```
particle flash <device> target/workbench-test.bin
```