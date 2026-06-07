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
    // prevent constructor by default
    WorldTemplateLevelData& operator=(WorldTemplateLevelData const&);
    WorldTemplateLevelData(WorldTemplateLevelData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldTemplateLevelData();

    MCAPI WorldTemplateLevelData(::WorldTemplateLevelData&&);

    MCAPI WorldTemplateLevelData(
        bool                     isFromWorldTemplate,
        bool                     isWorldTemplateOptionLocked,
        ::BaseGameVersion const& baseGameVersion,
        ::BaseGameVersion const& maxBaseGameVersion
    );

    MCAPI void _getTagData(::CompoundTag const& tag);

    MCAPI void _setTagData(::CompoundTag& tag) const;

    MCAPI ::BaseGameVersion const& getBaseGameVersion() const;

    MCFOLD ::ContentIdentity const& getContentIdentity() const;

    MCAPI void getTagData(::CompoundTag const& tag);

    MCFOLD ::PackIdVersion const& getWorldTemplateIdentity() const;

    MCFOLD bool isFromWorldTemplate() const;

    MCFOLD bool isWorldTemplateOptionLocked() const;

    MCAPI void setBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCAPI void setContentIdentity(::ContentIdentity const& contentIdentity);

#ifdef LL_PLAT_C
    MCFOLD void setIsFromWorldTemplate(bool isFromWorldTemplate);
#endif

    MCFOLD void setIsWorldTemplateOptionLocked(bool isWorldTemplateOptionLocked);

    MCAPI void setMaxBaseGameVersion(::BaseGameVersion const& maxBaseGameVersion);

    MCAPI void setTagData(::CompoundTag& tag) const;

    MCAPI void setWorldTemplateIdentity(::PackIdVersion const& identity);

    MCAPI ~WorldTemplateLevelData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::WorldTemplateLevelData&&);

    MCAPI void* $ctor(
        bool                     isFromWorldTemplate,
        bool                     isWorldTemplateOptionLocked,
        ::BaseGameVersion const& baseGameVersion,
        ::BaseGameVersion const& maxBaseGameVersion
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
