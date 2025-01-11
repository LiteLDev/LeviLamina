#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
// clang-format on

class ResourcePackListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackListener();

    // vIndex: 1
    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) = 0;

    // vIndex: 2
    virtual bool onFullPackStackInvalid();

    // vIndex: 3
    virtual void onBaseGamePackDownloadComplete();

    // vIndex: 4
    virtual void onLanguageSubpacksChanged();

    // vIndex: 5
    virtual void onResourceManagerDestroyed(::ResourcePackManager& mgr);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $onFullPackStackInvalid();

    MCFOLD void $onBaseGamePackDownloadComplete();

    MCFOLD void $onLanguageSubpacksChanged();

    MCFOLD void $onResourceManagerDestroyed(::ResourcePackManager& mgr);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
