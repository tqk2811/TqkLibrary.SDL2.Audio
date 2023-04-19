#ifndef PCH_H_TqkLibrary_Audio_SDL2_Native
#define PCH_H_TqkLibrary_Audio_SDL2_Native

#ifdef TQKLIBRARYSDL2AUDIONATIVE_EXPORTS
#define TqkLibraryAudioSDL2NativeExport extern "C" __declspec( dllexport )
#else
#define TqkLibraryAudioSDL2NativeExport extern "C" __declspec( dllimport )
#endif

#ifdef TQKLIBRARYSDL2AUDIONATIVE_EXPORTS
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <SDL.h>
#include <SDL_audio.h>



#endif //TQKLIBRARYSDL2AUDIONATIVE_EXPORTS


#include "Exports.h"


#endif //PCH_H_TqkLibrary_Audio_SDL2_Native
