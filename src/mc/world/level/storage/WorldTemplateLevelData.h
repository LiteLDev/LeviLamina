#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
// clang-format on

class WorldTemplateLevelData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9adb40;
    ::ll::UntypedStorage<8, 48> mUnk15e625;
    ::ll::UntypedStorage<8, 32> mUnka86a1c;
    ::ll::UntypedStorage<8, 32> mUnk331089;
    ::ll::UntypedStorage<1, 1>  mUnkb1a099;
    ::ll::UntypedStorage<1, 1>  mUnk4582d1;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateLevelData& operator=(WorldTemplateLevelData const&);
    WorldTemplateLevelData(WorldTemplateLevelData const&);
    WorldTemplateLevelData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateLevelData(
        bool                     isFromWorldTemplate,
        bool                     isWorldTemplateOptionLocked,
        ::BaseGameVersion const& baseGameVersion,
        ::BaseGameVersion const& maxBaseGameVersion
    );

    MCNAPI void _getTagData(::CompoundTag const& tag);

    MCNAPI void _setTagData(::CompoundTag& tag) const;

    MCNAPI ~WorldTemplateLevelData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        bool                     isFromWorldTemplate,
        bool                     isWorldTemplateOptionLocked,
        ::BaseGameVersion const& baseGameVersion,
        ::BaseGameVersion const& maxBaseGameVersion
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
