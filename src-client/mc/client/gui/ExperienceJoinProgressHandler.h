#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ExperienceJoinProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mInitialized;
    ::ll::TypedStorage<1, 1, bool>                                    mRequestCanceled;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mInitTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                  mTimeoutTime;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                mOnStart;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                mOnCancel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool const>>          mJoinRequestComplete;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceJoinProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExperienceJoinProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel&) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperienceJoinProgressHandler(
        ::std::function<void()>       startCallback,
        ::std::function<void()>       cancelCallback,
        ::std::shared_ptr<bool const> joinRequestComplete
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<void()>       startCallback,
        ::std::function<void()>       cancelCallback,
        ::std::shared_ptr<bool const> joinRequestComplete
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
