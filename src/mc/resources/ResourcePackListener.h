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

#ifdef LL_PLAT_S
    virtual void onResourceManagerDestroyed(::ResourcePackManager& mgr);
#else // LL_PLAT_C
    virtual void onResourceManagerDestroyed(::ResourcePackManager&);
#endif

#ifdef LL_PLAT_S
    virtual void onJsonResourcesChanged(::ResourcePackManager&);
#else // LL_PLAT_C
    virtual void onJsonResourcesChanged(::ResourcePackManager& resourcePackManager);
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $onFullPackStackInvalid();

    MCNAPI void $onBaseGamePackDownloadComplete();

    MCNAPI void $onLanguageSubpacksChanged();

#ifdef LL_PLAT_S
    MCNAPI void $onResourceManagerDestroyed(::ResourcePackManager& mgr);
#else // LL_PLAT_C
    MCNAPI void $onResourceManagerDestroyed(::ResourcePackManager&);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $onJsonResourcesChanged(::ResourcePackManager&);
#else // LL_PLAT_C
    MCNAPI void $onJsonResourcesChanged(::ResourcePackManager& resourcePackManager);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
