#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class OnlineSafetyProgressHandler : public ::ProgressHandler {
public:
    // OnlineSafetyProgressHandler inner types define
    enum class State : int {
        Pending    = 0,
        Done       = 1,
        Cancelling = 2,
        Cancelled  = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OnlineSafetyProgressHandler::State> mState;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>             mOnCancelledCallback;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel&) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ~OnlineSafetyProgressHandler() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel&);

    MCFOLD void $onExit(::MinecraftScreenModel&);

    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCFOLD ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCFOLD ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
