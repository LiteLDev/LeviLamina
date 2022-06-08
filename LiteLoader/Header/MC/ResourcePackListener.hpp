// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourcePackListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKLISTENER
public:
    class ResourcePackListener& operator=(class ResourcePackListener const &) = delete;
    ResourcePackListener(class ResourcePackListener const &) = delete;
    ResourcePackListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKLISTENER
public:
    MCVAPI void onBaseGamePackDownloadComplete();
    MCVAPI void onFullPackStackInvalid();
    MCVAPI void onLanguageSubpacksChanged();
    MCVAPI void onResourceManagerDestroyed(class ResourcePackManager &);
#endif



};