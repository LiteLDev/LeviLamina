#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
// clang-format on

namespace OreUI {

class ExperimentalFeatureToggle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AllExperiments>     mExperiment;
    ::ll::TypedStorage<8, 32, ::std::string const> mId;
    ::ll::TypedStorage<8, 32, ::std::string const> mTitle;
    ::ll::TypedStorage<8, 32, ::std::string const> mDescription;
    ::ll::TypedStorage<4, 4, int const>            mCategory;
    ::ll::TypedStorage<1, 1, bool>                 mIsDirty;
    ::ll::TypedStorage<8, 8, ::LevelDataWrapper*>  mLevelData;
    ::ll::TypedStorage<1, 1, bool>                 mInitialized;
    ::ll::TypedStorage<1, 1, bool>                 mIsToggleDisabled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getIsEnabled() const;

    MCFOLD bool getIsTogglePermanentlyDisabled();

    MCAPI void setIsEnabled(bool newValue);
    // NOLINTEND
};

} // namespace OreUI
