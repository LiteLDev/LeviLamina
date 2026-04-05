#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EduServerProgressRetryResult.h"
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/social/EduDedicatedServerDetails.h"
#include "mc/social/EduJoinServerResponse.h"
#include "mc/social/EduResponseError.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class PlayScreenModel;
// clang-format on

class EduHeadlessServerResolvingProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LoadingState>                         mLoadingState;
    ::ll::TypedStorage<8, 88, ::Social::EduDedicatedServerDetails>   mDetails;
    ::ll::TypedStorage<8, 32, ::std::string>                         mPasscode;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>  mPlayScreenModel;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>>   mReopenPasscodeEntry;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                          mTaskGroup;
    ::ll::TypedStorage<8, 64, ::Social::EduResponseError>            mError;
    ::ll::TypedStorage<8, 272, ::Social::EduJoinServerResponse>      mJoinResponse;
    ::ll::TypedStorage<4, 4, ::Social::EduServerProgressRetryResult> mRetryResult;
    ::ll::TypedStorage<8, 32, ::std::string>                         mTitleText;
    ::ll::TypedStorage<8, 32, ::std::string>                         mProgressText;
    ::ll::TypedStorage<8, 32, ::std::string>                         mPreviousProgressText;
    // NOLINTEND

public:
    // prevent constructor by default
    EduHeadlessServerResolvingProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduHeadlessServerResolvingProgressHandler() /*override*/;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onRetry(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::ProgressAnimation showLoadingBar() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduHeadlessServerResolvingProgressHandler(
        ::Social::EduDedicatedServerDetails const& details,
        ::std::string const&                       passcode,
        ::std::shared_ptr<::PlayScreenModel>       model,
        ::brstd::move_only_function<void()>&       reopenPasscodeEntry
    );

    MCAPI void _handleErrors(::MinecraftScreenModel& minecraftScreenModel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Social::EduDedicatedServerDetails const& details,
        ::std::string const&                       passcode,
        ::std::shared_ptr<::PlayScreenModel>       model,
        ::brstd::move_only_function<void()>&       reopenPasscodeEntry
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
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onRetry(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;

    MCFOLD ::ProgressAnimation $showLoadingBar() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
