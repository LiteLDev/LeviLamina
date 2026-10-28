#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class CloudSyncObserverProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                      mIsSyncRunning;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                      mHasSyncFailed;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                      mOnCancelRequested;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point const> mStartTimestamp;
    ::ll::TypedStorage<8, 32, ::std::string>                                mScreenName;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudSyncObserverProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CloudSyncObserverProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CloudSyncObserverProgressHandler(
        ::std::function<bool()> isSyncRunning,
        ::std::function<bool()> hasSyncFailed,
        ::std::function<void()> onCancelRequested,
        ::std::string const&    screenName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<bool()> isSyncRunning,
        ::std::function<bool()> hasSyncFailed,
        ::std::function<void()> onCancelRequested,
        ::std::string const&    screenName
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onStart(::MinecraftScreenModel&);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel&);

    MCFOLD void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND
};
