#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define COMET_API __declspec(dllexport)
	#else
		#define COMET_API __declspec(dllimport)
	#endif
#else
	#error Comet only supports Windows!
#endif 
