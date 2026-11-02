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
    virtual ~ResourcePackListener() = default;

    virtual void onActiveResourcePacksChanged(::ResourcePackManager& mgr) = 0;

    virtual bool onFullPackStackInvalid();

    virtual void onBaseGamePackDownloadComplete();

    virtual void onLanguageSubpacksChanged();

    virtual void onResourceManagerDestroyed(::ResourcePackManager&);

    virtual void onJsonResourcesChanged(::ResourcePackManager& resourcePackManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $onFullPackStackInvalid();

    MCNAPI void $onBaseGamePackDownloadComplete();

    MCNAPI void $onLanguageSubpacksChanged();

    MCNAPI void $onResourceManagerDestroyed(::ResourcePackManager&);

    MCNAPI void $onJsonResourcesChanged(::ResourcePackManager& resourcePackManager);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
