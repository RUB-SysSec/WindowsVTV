i686-w64-mingw32-vtv
====================

* MinGW 32bit cross compiler with VTV support. Compiled on Arch Linux 64bit. It has to be used on a 64bit Linux distribution.
* The patch introduces VTV for Cygwin/MinGW.
* Changelog of the patch.
* MinGW build instructions

The Patch
---------
The patch is currently under [review](https://gcc.gnu.org/ml/gcc-patches/2014-09/msg01572.html).

The patch can be applied the following way:
* [Get the GCC source code from the GCC svn](https://gcc.gnu.org/wiki/SvnSetup). Use the following command in the folder which should contain the source code: 
```svn checkout svn://gcc.gnu.org/svn/gcc/trunk .```
* Apply the patch from the svn directory: 
```patch -p0 < /path/to/vtv_cygmin.patch```

Build MinGW Cross Compiler
--------------------------
Some additional files have to be built before GCC itself can be build. Further information can be found [here](http://sourceforge.net/p/mingw-w64/code/HEAD/tree/trunk/mingw-w64-doc/howto-build/mingw-w64-howto-build-adv.txt). The file with the build instructions is also included in this repository in case the link changes. But since the patch doesn't affect these additional files they could also be take from an already compiled version of MinGW.

After the additional parts are build and placed in the appropriate folders, set the following exports.
```
export CPATH=/usr/include/
export LIBRARY_PATH=/usr/lib/
export LD_LIBRARY_PATH=/usr/lib/
```

The following commands are issued from the directory GCC is compiled to. This must not be the source directory of GCC!

```
$PWD/path/to/gcc/configure --target=i686-w64-mingw32 --prefix=/prefix/path/ --enable-languages=c,c++ --with-gnu-ld --with-gnu-as --enable-fully-dynamic-string --disable-multilib --enable-libstdcxx-threads --enable-vtable-verify=yes

make all-gcc
make install-gcc

export CPATH=/prefix/path/i686-w64-mingw32/include/
export LIBRARY_PATH=/prefix/path/i686-w64-mingw32/lib/
export LD_LIBRARY_PATH=/prefix/path/i686-w64-mingw32/lib/

make all-target-libgcc
make install-target-libgcc

make
make install

export PATH=/prefix/path/bin:$PATH
```

MinGW can be used now to cross compile programs with VTV support.

Compiling with MinGW Cross Compiler
-----------------------------------
An already built MinGW Cross Compiler is also available. The following files have to be extracted, since they exceeded GitHub's file size limit.
* mingw-vtv-bin-32/libexec/gcc/i686-w64-mingw32/5.0.0/cc1.7z
* mingw-vtv-bin-32/libexec/gcc/i686-w64-mingw32/5.0.0/cc1obj.7z
* mingw-vtv-bin-32/libexec/gcc/i686-w64-mingw32/5.0.0/cc1plus.7z
* mingw-vtv-bin-32/libexec/gcc/i686-w64-mingw32/5.0.0/f951.7z
* mingw-vtv-bin-32/libexec/gcc/i686-w64-mingw32/5.0.0/jc1.7z
* mingw-vtv-bin-32/libexec/gcc/i686-w64-mingw32/5.0.0/lto1.7z

To compile files into Windows executables protected with VTV add the -fvtable-verify flag to the command line, e.g.:
```i686-w64-mingw32-g++ -fvtable-verify=std virtual_func_test_min_UAF.cpp```
<br>
```i686-w64-mingw32-g++ -fvtable-verify=preinit virtual_func_test_min_UAF.cpp```
<br>
On Cygwin and MinGW preinit is set to std. So the resulting binaries are the same.

Building Botan:<br>
Get the [source](https://botan.randombit.net) and configure it:<br>
```python2 configure.py --cc=gcc --os=windows --cpu=i686```

Then change the following lines in the resulting Makefile: 

```CXX           = g++```
to
```CXX           = i686-w64-mingw32-g++ -fvtable-verify=std```

and

```LINK_TO       = -ladvapi32.lib -luser32.lib```
to
```LINK_TO       = ```
