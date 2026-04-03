#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameConnectionInfoEx.h"
#include "mc/client/gui/ProgressHandler.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/services/live_events/ExperienceConnectionData.h"
#include "mc/client/social/MultiplayerGameInfo.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class IMinecraftScreenModel;
class MinecraftScreenModel;
// clang-format on

class ReconnectOnResumeProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        608,
        ::std::variant<
            ::GameConnectionInfoEx,
            ::Social::MultiplayerGameInfo,
            ::ExperienceConnectionData,
            ::Realms::RealmId>>
                                                                                        mCookie;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                   mSuspendTime;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::steady_clock::time_point>> mResumeTime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReconnectOnResumeProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel&) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void doTick(::IMinecraftScreenModel& minecraftScreenModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onStart(::MinecraftScreenModel&);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD void $onExit(::MinecraftScreenModel&);

    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel&) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
