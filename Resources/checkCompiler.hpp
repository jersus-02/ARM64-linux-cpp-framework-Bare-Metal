#ifndef __CHECKERCOMPILER____HPP
#define __CHECKERCOMPILER____HPP
#if defined(__clang__)
    /* Code specific to Clang / LLVM */
    #define COMPILER_NAME "Clang"
    #define COMPILER_VERSION __clang_version__

#elif defined(__GNUC__) || defined(__GNUG__)
    /* Code specific strictly to GNU GCC */
    #define COMPILER_NAME "GCC"
    #define COMPILER_VERSION __VERSION__

#elif defined(_MSC_VER)
    /* Microsoft Visual C++ */
    #define COMPILER_NAME "MSVC"

#else
    #define COMPILER_NAME "Unknown Compiler"
#endif
#endif // __CHECKERCOMPILER____HPP