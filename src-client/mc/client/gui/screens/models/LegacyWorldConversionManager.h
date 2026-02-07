#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class IDlcBatchModel;
class MainMenuScreenModel;
// clang-format on

class LegacyWorldConversionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MainMenuScreenModel&>   mMainMenuScreenModel;
    ::ll::TypedStorage<4, 4, ::LoadingState>           mConversionState;
    ::ll::TypedStorage<4, 4, float>                    mLegacyWorldConversionProgress;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<8, 8, ::IDlcBatchModel*>        mDownloadingContent;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyWorldConversionManager& operator=(LegacyWorldConversionManager const&);
    LegacyWorldConversionManager(LegacyWorldConversionManager const&);
    LegacyWorldConversionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyWorldConversionManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyWorldConversionManager(::MainMenuScreenModel& screenModel);

    MCAPI void reset();

    MCAPI void tryAcquireMissingDlc(::std::string const& levelId, ::std::function<void(bool)> downloadCompleteCallback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MainMenuScreenModel& screenModel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
