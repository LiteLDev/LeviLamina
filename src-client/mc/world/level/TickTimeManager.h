#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
struct IGameplayUserManagerConnector;
struct IServerPlayerSleepManagerConnector;
struct ITickTimeManagerProxy;
// clang-format on

class TickTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                                                  mIsClientSide;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ITickTimeManagerProxy>>> mTickTimeManagerProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>                 mPacketSender;
    ::ll::TypedStorage<8, 8, int64>                                                       mLastTimePacketSent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mOnGameplayUserAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnWakeUpAllPlayersSubscription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onWakeUpAllPlayers();

    MCAPI void _syncTime(int64 currentTick);

    MCAPI void registerForGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCAPI void
    registerForPlayerSleepManagerEvents(::IServerPlayerSleepManagerConnector& serverPlayerSleepManagerConnector);

    MCAPI ~TickTimeManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
