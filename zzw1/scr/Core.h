#pragma once
#ifdef ZZW_PALTFORM_WINDOWS
    #ifdef ZZW_BUILD_DLL
       #define ZZW_API _declspec(dllexport)
    #else
       #define ZZW_API _declspec(dllimport)
   #endif
#else
#error ZZW only support Windows!
#endif // ZZW_PALTFORM_WINDOWS
