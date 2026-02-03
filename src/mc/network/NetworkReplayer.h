#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/util/Random.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class NetworkSessionOwner;
class PacketReplayNetworkHandler;
class Scheduler;
// clang-format on

class NetworkReplayer : public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>                     mPingIntervals;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scheduler>>                  mScheduler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NetworkSessionOwner>>        mNetworkSessionOwner;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientNetworkSystem>>        mNetwork;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PacketReplayNetworkHandler>> mPacketReplayNetworkHandler;
    ::ll::TypedStorage<8, 24, ::std::vector<int64>>                           mLatencyTimePointsMS;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>         mLastLatencyPacketSentAt;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>         mLastReplayPacketSentAt;
    ::ll::TypedStorage<8, 2576, ::Random>                                     mRandom;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkReplayer() /*override*/ = default;
    // NOLINTEND
};
