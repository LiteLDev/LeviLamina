#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
class IServerPlayerSleepManagerConnector;
class ITickTimeManagerProxy;
class PacketSender;
// clang-format on

class TickTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk5276d2;
    ::ll::UntypedStorage<8, 8>  mUnk2e2b89;
    ::ll::UntypedStorage<8, 24> mUnkf1c29a;
    ::ll::UntypedStorage<8, 8>  mUnkda5959;
    ::ll::UntypedStorage<8, 16> mUnk27d19c;
    ::ll::UntypedStorage<8, 16> mUnkcc65d5;
    // NOLINTEND

public:
    // prevent constructor by default
    TickTimeManager& operator=(TickTimeManager const&);
    TickTimeManager(TickTimeManager const&);
    TickTimeManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TickTimeManager(bool isClientSide, ::std::unique_ptr<::ITickTimeManagerProxy> tickTimeManagerProxy);

    MCAPI void _onWakeUpAllPlayers();

    MCAPI void incrementCurrentTick();

    MCAPI void registerForGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCAPI void
    registerForPlayerSleepManagerEvents(::IServerPlayerSleepManagerConnector& serverPlayerSleepManagerConnector);

    MCAPI void setPacketSender(::PacketSender& packetSender);

    MCAPI void update();

    MCAPI ~TickTimeManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool isClientSide, ::std::unique_ptr<::ITickTimeManagerProxy> tickTimeManagerProxy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
