#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
struct PackInfoData;
// clang-format on

struct PacksInfoData {
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
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~PacksInfoData();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
