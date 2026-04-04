#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/deps/core/file/StorageResult.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class CloudCommitProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStartTime;
    ::ll::TypedStorage<8, 32, ::std::string>                          mProgressMessage;
    ::ll::TypedStorage<4, 4, ::LoadingState>                          mLoadingState;
    ::ll::TypedStorage<4, 4, float>                                   mTimeProgress;
    ::ll::TypedStorage<8, 32, ::std::string>                          mLevelId;
    ::ll::TypedStorage<4, 4, float>                                   mProgress;
    ::ll::TypedStorage<4, 4, ::Core::StorageResult>                   mStorageResult;
    ::ll::TypedStorage<1, 1, bool>                                    mCanceled;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onRetry(::MinecraftScreenModel&) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::ProgressAnimation showLoadingBar() const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ~CloudCommitProgressHandler() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
