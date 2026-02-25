#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/edu_cloud/LaunchOptions.h"
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/resources/ImportState.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/client/util/edu_cloud_utils/Operation.h"
#include "mc/util/DownloadError.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct SetDownloadProgressHandlerError;
struct WorldFileDownloadManager;
// clang-format on

class EduCloudDownloadProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LoadingState>                                 mLoadingState;
    ::ll::TypedStorage<4, 4, ::EduCloudUtils::Operation>                     mCurrentOperation;
    ::ll::TypedStorage<4, 4, ::MSGraph::GraphResponse>                       mSyncErrorStatus;
    ::ll::TypedStorage<4, 4, ::MSGraph::GraphResponse>                       mGraphErrorStatus;
    ::ll::TypedStorage<4, 4, ::DownloadError>                                mDownloadErrorStatus;
    ::ll::TypedStorage<4, 4, ::ImportFailure>                                mImportErrorStatus;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>                   mSetReadyToLaunch;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mTitleText;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::WorldFileDownloadManager>> mDownloadManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ImportState>>              mImportState;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>        mEduCloudDownloadDelayStart;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds const>              mDisplayInterval;
    ::ll::TypedStorage<1, 1, bool const>                                     mLaunchWorldOnCompletion;
    ::ll::TypedStorage<1, 1, bool>                                           mCanceled;
    ::ll::TypedStorage<1, 1, bool>                                           mExitingScreen;
    ::ll::TypedStorage<1, 1, bool>                                           mCanLaunchLocalWorld;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mProgressMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPreviousProgressMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    EduCloudDownloadProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::std::string getTTSProgressMessage() const /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::ProgressAnimation showLoadingBar() const /*override*/;

    virtual ~EduCloudDownloadProgressHandler() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduCloudDownloadProgressHandler(
        ::std::shared_ptr<::WorldFileDownloadManager>                   downloadManager,
        ::std::shared_ptr<::ImportState>                                importState,
        ::std::string const&                                            id,
        ::EduCloud::LaunchOptions                                       launchOption,
        bool                                                            canLaunchLocalWorld,
        ::std::function<void(::SetDownloadProgressHandlerError)> const& setDownloadErrorsStatusCallbacks,
        ::std::function<void(bool)> const&                              setReadyToLaunch
    );

    MCAPI void _leaveProgressHandler(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::std::string _updateProgressMessage(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void _updateTitle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::WorldFileDownloadManager>                   downloadManager,
        ::std::shared_ptr<::ImportState>                                importState,
        ::std::string const&                                            id,
        ::EduCloud::LaunchOptions                                       launchOption,
        bool                                                            canLaunchLocalWorld,
        ::std::function<void(::SetDownloadProgressHandlerError)> const& setDownloadErrorsStatusCallbacks,
        ::std::function<void(bool)> const&                              setReadyToLaunch
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
    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel&);

    MCAPI void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCFOLD ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;

    MCFOLD ::std::string $getTTSProgressMessage() const;

    MCFOLD ::ProgressAnimation $showLoadingBar() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
