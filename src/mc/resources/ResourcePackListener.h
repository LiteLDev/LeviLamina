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
    virtual ~ResourcePackListener();

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&) = 0;

    virtual bool onFullPackStackInvalid();

    virtual void onBaseGamePackDownloadComplete();

    virtual void onLanguageSubpacksChanged();

    virtual void onResourceManagerDestroyed(::ResourcePackManager& mgr);

    virtual void onJsonResourcesChanged(::ResourcePackManager&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $onFullPackStackInvalid();

    MCNAPI void $onBaseGamePackDownloadComplete();

    MCNAPI void $onLanguageSubpacksChanged();

    MCNAPI void $onResourceManagerDestroyed(::ResourcePackManager& mgr);

    MCNAPI void $onJsonResourcesChanged(::ResourcePackManager&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
