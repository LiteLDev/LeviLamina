#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class SkinBanCheckProgressHandler : public ::ProgressHandler {
public:
    // SkinBanCheckProgressHandler inner types define
    enum class State : int {
        Pending        = 0,
        LoadingPersona = 1,
        InPopup        = 2,
        Done           = 3,
        Cancelling     = 4,
        Cancelled      = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SkinBanCheckProgressHandler::State>    mState;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mInitTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                  mTimeoutTime;
    ::ll::TypedStorage<8, 32, ::std::string const>                    mServerType;
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

    virtual ~SkinBanCheckProgressHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _verifySkin(::MinecraftScreenModel& minecraftScreenModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel&);

    MCFOLD void $onExit(::MinecraftScreenModel&);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

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
