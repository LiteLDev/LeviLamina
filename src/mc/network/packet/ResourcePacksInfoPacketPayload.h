#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
struct PackInfoData;
struct PacksInfoData;
// clang-format on

struct ResourcePacksInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mResourcePackRequired;
    ::ll::TypedStorage<1, 1, bool>                           mHasAddonPacks;
    ::ll::TypedStorage<1, 1, bool>                           mHasScripts;
    ::ll::TypedStorage<1, 1, bool>                           mForceDisableVibrantVisuals;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>               mWorldTemplateIdAndVersion;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInfoData>> mResourcePacks;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePacksInfoPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePacksInfoPacketPayload(
        bool                          resourcePackRequired,
        ::std::vector<::PackInfoData> resourcePacks,
        bool                          hasAddonPacks,
        ::PackIdVersion const&        worldTemplateIdVersion,
        bool                          forceDisableVibrantVisuals
    );

#ifdef LL_PLAT_C
    MCAPI ::PacksInfoData toPacksInfoData() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        bool                          resourcePackRequired,
        ::std::vector<::PackInfoData> resourcePacks,
        bool                          hasAddonPacks,
        ::PackIdVersion const&        worldTemplateIdVersion,
        bool                          forceDisableVibrantVisuals
    );
    // NOLINTEND
};
