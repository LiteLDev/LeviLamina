#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/GameEventNotification.h"
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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>  mAsyncTaskGroup;
    ::ll::TypedStorage<8, 32, ::std::string>                  mExperienceId;
    ::ll::TypedStorage<8, 32, ::std::string>                  mPartyId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mWorldId;
    ::ll::TypedStorage<1, 1, bool>                            mContinuePartyJoin;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyEligibilityProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual void
    onGameEventNotification(::MinecraftScreenModel&, ::ui::GameEventNotification const& notification) /*override*/;

    virtual ~PartyEligibilityProgressHandler() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartyEligibilityProgressHandler(
        ::std::string const&           experienceId,
        ::std::string const&           partyId,
        ::std::optional<::std::string> worldId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& experienceId, ::std::string const& partyId, ::std::optional<::std::string> worldId);
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

    MCAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getName() const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI void $onGameEventNotification(::MinecraftScreenModel&, ::ui::GameEventNotification const& notification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
