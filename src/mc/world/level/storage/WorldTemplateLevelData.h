#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/util/BaseGameVersion.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class WorldTemplateLevelData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mPremiumTemplateContentIdentity;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>   mWorldTemplateIdentity;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion> mBaseGameVersion;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion> mMaxBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>               mIsFromWorldTemplate;
    ::ll::TypedStorage<1, 1, bool>               mIsWorldTemplateOptionLocked;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldTemplateLevelData();

    MCAPI void _getTagData(::CompoundTag const& tag);

    MCAPI void _setTagData(::CompoundTag& tag) const;

#ifdef LL_PLAT_C
    MCAPI void setBaseGameVersion(::BaseGameVersion const& baseGameVersion);
#endif

    MCAPI void setMaxBaseGameVersion(::BaseGameVersion const& maxBaseGameVersion);

#ifdef LL_PLAT_C
    MCAPI void setWorldTemplateIdentity(::PackIdVersion const& identity);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
