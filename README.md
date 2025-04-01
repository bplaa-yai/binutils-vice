# Vice GNU Binutils

This repository hosts a modified version of GNU binutils 2.14 providing support for the SGI O2 VICE chipset, and more specifically the BSP processor.



## Building

### BSP target

To build for the BSP target, run configure with the following flags :

`./configure --target=bsp`



### MSP target

To build for the MSP processor, run configure with

`./configure --target=mips`



### Multiarch

To get a multiarch style install, build for each target separately then `make install` in a common prefix specified at configure time. This will result in an install directory layout looking like 

```
/tmp/binutils-vice
├── bin
├── bsp
│   ├── bin
│   └── lib
│       └── ldscripts
├── info
├── lib
├── man
│   └── man1
├── mips
│   ├── bin
│   └── lib
│       └── ldscripts
└── share
    └── locale
...
```

And `bin` directories with prefixes

```
/tmp/binutils-vice
├── bin
│   ├── bsp-addr2line
│   ├── bsp-ar
│   ├── bsp-as
│   ├── bsp-c++filt
│   ├── bsp-ld
│   ├── bsp-nm
│   ├── bsp-objcopy
│   ├── bsp-objdump
│   ├── bsp-ranlib
│   ├── bsp-readelf
│   ├── bsp-size
│   ├── bsp-strings
│   ├── bsp-strip
│   ├── mips-addr2line
│   ├── mips-ar
│   ├── mips-as
│   ├── mips-c++filt
│   ├── mips-ld
│   ├── mips-nm
│   ├── mips-objcopy
│   ├── mips-objdump
│   ├── mips-ranlib
│   ├── mips-readelf
│   ├── mips-size
│   ├── mips-strings
│   └── mips-strip
├── bsp
│   ├── bin
│   │   ├── ar
│   │   ├── as
│   │   ├── ld
│   │   ├── nm
│   │   ├── ranlib
│   │   └── strip
...
├── mips
│   ├── bin
│   │   ├── ar
│   │   ├── as
│   │   ├── ld
│   │   ├── nm
│   │   ├── ranlib
│   │   └── strip
...
```



## Using

To compile MSP instructions (eg. MDMX Mips instructions) you'll have to add the `-mdmx` flag to `as` command line invocation, or include a `.set mdmx` to your ASM listing.



## Acknowledgment

This work is based on the original work of Ilya Volynets.