#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackListener {
public:
    // prevent constructor by default
    ResourcePackListener& operator=(ResourcePackListener const&);
    ResourcePackListener(ResourcePackListener const&);
    ResourcePackListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackListener();

    // vIndex: 1
    virtual void onActiveResourcePacksChanged(class ResourcePackManager& mgr) = 0;

    // vIndex: 2
    virtual void onFullPackStackInvalid();

    // vIndex: 3
    virtual void onBaseGamePackDownloadComplete();

    // vIndex: 4
    virtual void onLanguageSubpacksChanged();

    // vIndex: 5
    virtual void onResourceManagerDestroyed(class ResourcePackManager& mgr);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI void onBaseGamePackDownloadComplete$();

    MCAPI void onFullPackStackInvalid$();

    MCAPI void onLanguageSubpacksChanged$();

    MCAPI void onResourceManagerDestroyed$(class ResourcePackManager& mgr);

    // NOLINTEND
};
