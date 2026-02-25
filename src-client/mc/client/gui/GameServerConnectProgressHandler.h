#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameConnectionType.h"
#include "mc/client/gui/ProgressHandler.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class GameServerConnectProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mConnected;
    ::ll::TypedStorage<1, 1, bool>                                    mHandoverProgress;
    ::ll::TypedStorage<1, 1, bool>                                    mInitialized;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mInitTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds>                  mTimeoutTime;
    ::ll::TypedStorage<4, 4, ::GameConnectionType>                    mConnectionType;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                mOnStart;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                mAbortCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::unordered_map<::std::string, ::std::string>&)>>
        mEventCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    GameServerConnectProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameServerConnectProgressHandler() /*override*/ = default;

    virtual void onStart(::MinecraftScreenModel&) /*override*/;

    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onExit(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel&) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameServerConnectProgressHandler(
        ::GameConnectionType                                                       connection,
        ::std::function<void()>                                                    startCallback,
        bool                                                                       handOverProgress,
        ::std::function<void(::std::unordered_map<::std::string, ::std::string>&)> eventPropertyCallback,
        ::std::function<void()>                                                    abortCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::GameConnectionType                                                       connection,
        ::std::function<void()>                                                    startCallback,
        bool                                                                       handOverProgress,
        ::std::function<void(::std::unordered_map<::std::string, ::std::string>&)> eventPropertyCallback,
        ::std::function<void()>                                                    abortCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onStart(::MinecraftScreenModel&);

    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onExit(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
