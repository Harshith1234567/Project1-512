GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.68.1.dylib
COMPILE=arm64-apple-darwin20.0.0-clang -DU_ATTRIBUTE_DEPRECATED= -D_FORTIFY_SOURCE=2 -isystem /Users/admin/Project1-512/env/include -mmacosx-version-min=11.1   -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=1 -DU_HAVE_STRING_VIEW=1  -ftree-vectorize -fPIC -fPIE -fstack-protector-strong -O2 -pipe -isystem /Users/admin/Project1-512/env/include -fdebug-prefix-map=/Users/ktietz/demo/mc3/conda-bld/icu_1630597441882/work=/usr/local/src/conda/icu-68.1 -fdebug-prefix-map=/Users/admin/Project1-512/env=/usr/local/src/conda-prefix -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -fno-common -c
LIBFLAGS=-I/Users/admin/Project1-512/env/include  -dynamic
GENLIB=arm64-apple-darwin20.0.0-clang -dynamiclib -dynamic -ftree-vectorize -fPIC -fPIE -fstack-protector-strong -O2 -pipe -isystem /Users/admin/Project1-512/env/include -fdebug-prefix-map=/Users/ktietz/demo/mc3/conda-bld/icu_1630597441882/work=/usr/local/src/conda/icu-68.1 -fdebug-prefix-map=/Users/admin/Project1-512/env=/usr/local/src/conda-prefix -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -Wl,-pie -Wl,-headerpad_max_install_names -Wl,-dead_strip_dylibs -Wl,-rpath,/Users/admin/Project1-512/env/lib -L/Users/admin/Project1-512/env/lib -Wl,-rpath,/Users/admin/Project1-512/env/lib 
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,68 -Wl,-current_version -Wl,68.1 -install_name /Users/admin/Project1-512/env/lib/
RPATH_FLAGS=
BIR_LDFLAGS=
AR=arm64-apple-darwin20.0.0-ar
ARFLAGS=r -c
RANLIB=arm64-apple-darwin20.0.0-ranlib
INSTALL_CMD=/usr/local/bin/ginstall -c
