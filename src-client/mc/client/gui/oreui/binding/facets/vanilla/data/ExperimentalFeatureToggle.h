#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"
#include "mc/world/level/storage/ExperimentCategory.h"

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
    // prevent constructor by default
    ExperimentalFeatureToggle& operator=(ExperimentalFeatureToggle const&);
    ExperimentalFeatureToggle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExperimentalFeatureToggle(::OreUI::ExperimentalFeatureToggle&&);

    MCNAPI ExperimentalFeatureToggle(::OreUI::ExperimentalFeatureToggle const&);

    MCNAPI ExperimentalFeatureToggle(
        ::LevelDataWrapper&        levelData,
        ::std::string const&       fourCc,
        ::AllExperiments const     experiment,
        ::std::string const&       title,
        ::std::string const&       description,
        ::ExperimentCategory const category
    );

    MCNAPI bool getIsEnabled() const;

    MCNAPI bool getIsTogglePermanentlyDisabled();

    MCNAPI void setIsEnabled(bool const newValue);

    MCNAPI ~ExperimentalFeatureToggle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ExperimentalFeatureToggle&&);

    MCNAPI void* $ctor(::OreUI::ExperimentalFeatureToggle const&);

    MCNAPI void* $ctor(
        ::LevelDataWrapper&        levelData,
        ::std::string const&       fourCc,
        ::AllExperiments const     experiment,
        ::std::string const&       title,
        ::std::string const&       description,
        ::ExperimentCategory const category
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
