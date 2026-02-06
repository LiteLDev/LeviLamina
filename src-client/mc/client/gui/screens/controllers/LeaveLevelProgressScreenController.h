#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct ProgressHandler;
namespace Json { class Value; }
// clang-format on

class LeaveLevelProgressScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mNext;
    ::ll::TypedStorage<1, 1, bool>                                                mForceRenderBelow;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mCalledFrom;
    ::ll::TypedStorage<8, 8, int64>                                               mLastAudioProgressNotificationUpdate;
    ::ll::TypedStorage<8, 8, int64 const>                                         mProgressMessageInterval;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ProgressHandler>>                mProgressHandler;
    ::ll::TypedStorage<8, 40, ::std::deque<::std::unique_ptr<::ProgressHandler>>> mProgressHandlerList;
    ::ll::TypedStorage<1, 1, bool>                                                mHasTicked;
    ::ll::TypedStorage<1, 1, bool>                                                mPostInitEventFired;
    ::ll::TypedStorage<1, 1, bool>                                                mRunStandaloneProgressHandler;
    ::ll::TypedStorage<1, 1, bool>                                                mShouldExitScreen;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>             mEduCloudUploadFinishTime;
    ::ll::TypedStorage<1, 1, bool>                                                mEduCloudUploadTimerActive;
    ::ll::TypedStorage<1, 1, bool>                                                mEduCloudConflictPopupShown;
    ::ll::TypedStorage<1, 1, bool>                                                mQueueCloudDownload;
    ::ll::TypedStorage<8, 8, int64>                                               mLastSaved;
    // NOLINTEND

public:
    // prevent constructor by default
    LeaveLevelProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LeaveLevelProgressScreenController() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual void onLeave() /*override*/;

    virtual void onReload() /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LeaveLevelProgressScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::std::string const&                               calledFrom,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressInterfaces,
        bool                                               loadAssets,
        bool                                               forceRenderBelow
    );

    MCAPI void _closeEduCloudConflictPopup();

    MCAPI void _exitScreen();

    MCAPI bool _exitingErrorScreen() const;

    MCAPI void _registerControllerCallbacks();

    MCAPI void _registerProgressBindings();

    MCAPI void _setupProgressScreen(bool loadAssets);

    MCFOLD void _showEduCloudConflictPopup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>          model,
        ::std::string const&                               calledFrom,
        ::std::deque<::std::unique_ptr<::ProgressHandler>> progressInterfaces,
        bool                                               loadAssets,
        bool                                               forceRenderBelow
    );
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

    MCFOLD ::std::string $getAdditionalScreenInfo() const;

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI void $onLeave();

    MCAPI void $onReload();

    MCFOLD ::std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
