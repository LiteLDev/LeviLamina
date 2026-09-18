#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class TaskGroup;
// clang-format on

class PartyEligibilityProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mAsyncTaskGroup;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                   mExperienceId;
    ::ll::TypedStorage<8, 32, ::std::string>                 mPartyId;
    ::ll::TypedStorage<8, 24, ::std::optional<::mce::UUID>>  mWorldId;
    ::ll::TypedStorage<1, 1, bool>                           mIsTransfer;
    ::ll::TypedStorage<1, 1, bool>                           mContinuePartyJoin;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual void onGameEventNotification(::MinecraftScreenModel&, ::ui::GameEventNotification const&) /*override*/;
    // NOLINTEND
};
