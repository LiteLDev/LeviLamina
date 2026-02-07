#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/application/storage_migration/WorldRecovery.h"
#include "mc/deps/application/storage_migration/WorldRecoveryTelemetryEvent.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/DeferredSubscription.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Bedrock { class WorldRecovery; }
// clang-format on

class WorldRecoveryScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::TaskGroup>                               mTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::WorldRecovery>> mWorldRecovery;
    ::ll::TypedStorage<8, 56, ::Bedrock::WorldRecovery::RecoveryUpdate>   mLatestUpdate;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::DeferredSubscription>    mUpdateSubscription;
    ::ll::TypedStorage<8, 144, ::Bedrock::WorldRecoveryTelemetryEvent>    mTelemetryEvent;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                    mSuccessCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                    mDoMigrationFn;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>     mRecoveryStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>     mLastVisualUpdateTime;
    ::ll::TypedStorage<8, 32, ::std::string>                              mDefaultDisplayText;
    ::ll::TypedStorage<8, 32, ::std::string>                              mCurrentDisplayText;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                         mControlsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                        mRecoveryInProgress;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldRecoveryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldRecoveryScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onOpen() /*override*/;

    virtual bool canExit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldRecoveryScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::function<void()>                  successCallback
    );

    MCAPI void _fireTelemetry();

    MCAPI void _onWorldRecoveryDone(::Bedrock::WorldRecovery::RecoveryResult result);

    MCAPI void _onWorldsDirectorySelected(::std::string const& uri, ::std::string const& error);

    MCAPI void _selectWorldsDirectory();

    MCAPI void _updateDisplayText();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::function<void()> successCallback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $onOpen();

    MCAPI bool $canExit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
