#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/profiler/platform/CounterToken.h"
#include "mc/deps/raknet/RakNetStatistics.h"
#include "mc/network/ClientOrServerNetworkSystemRef.h"
#include "mc/network/PacketObserver.h"
#include "mc/network/TrackerType.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class Packet;
class ServerNetworkSystem;
class WeakEntityRef;
struct NetworkDebugManager;
namespace Core { struct OutputFileStream; }
// clang-format on

class NetworkStatistics : public ::PacketObserver {
public:
    // NetworkStatistics inner types declare
    // clang-format off
    struct OverviewStats;
    // clang-format on

    // NetworkStatistics inner types define
    struct OverviewStats {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TrackerType const>                                         mType;
    ::ll::TypedStorage<8, 16, ::ClientOrServerNetworkSystemRef>                           mNetwork;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> const> mNetworkDebugManager;
    ::ll::TypedStorage<4, 4, int>                                                         mTicks;
    ::ll::TypedStorage<4, 16, ::NetworkStatistics::OverviewStats>                         mTotalOverview;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::PacketObserver::PacketStats>>   mTotalPacketStats;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::PacketObserver::PacketStats>>   mDebuggerPacketStats;
    ::ll::TypedStorage<8, 24, ::std::vector<::PacketObserver::PacketStats>>               mTotalCSVPacketStats;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::PacketObserver::PacketStats>>   mCurrentPacketStats;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::string>>       mCurrentSourceNetworkIdentifierStrings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::string>>       mCurrentTargetNetworkIdentifierStrings;
    ::ll::TypedStorage<8, 10624, ::std::array<::std::string, 332>>               mPacketNames;
    ::ll::TypedStorage<4, 16, ::NetworkStatistics::OverviewStats>                mCurrentOverview;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkStatistics::OverviewStats>> mLastSeconds;
    ::ll::TypedStorage<8, 8, double>                                             mStartSeconds;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                       mRakNetStatsReadingLock;
    ::ll::TypedStorage<8, 224, ::RakNet::RakNetStatistics>                       mRakNetStatsReading;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::RakNet::RakNetStatistics&)>> mGetRakNetStatsReading;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Core::OutputFileStream>>         mCSVFile;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterToken>                       mUserBytesPerSecSentCounterToken;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterToken>                       mActualBytesPerSecSentCounterToken;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterToken> mActualBytesPerSecReceivedCounterToken;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterToken> mUserBytesTotalSentCounterToken;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterToken> mActualBytesTotalSentCounterToken;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterToken> mActualBytesTotalReceivedCounterToken;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterToken> mPacketLossPercentagePerSecCounterToken;
    ::ll::TypedStorage<1, 1, ::Core::Profile::CounterToken> mPacketLossPercentageTotalCounterToken;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkStatistics();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkStatistics() /*override*/;

    // vIndex: 1
    virtual void packetSentTo(::NetworkIdentifier const& target, ::Packet const& packet, uint size) /*override*/;

    // vIndex: 2
    virtual void packetReceivedFrom(::NetworkIdentifier const& source, ::Packet const& packet, uint size) /*override*/;

    // vIndex: 3
    virtual void dataSentTo(::NetworkIdentifier const& target, ::std::string_view data) /*override*/;

    // vIndex: 4
    virtual void dataReceivedFrom(::NetworkIdentifier const& source, ::std::string const& data) /*override*/;

    // vIndex: 5
    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkStatistics(
        ::ClientOrServerNetworkSystemRef&&                   network,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
    );

    MCAPI NetworkStatistics(
        ::ServerNetworkSystem&                               server,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
    );

    MCAPI void _initRakNetProfileTracking();

    MCAPI void _logPeerConnectionInfo(::std::vector<::WeakEntityRef> const& userList, bool includeAverages) const;

    MCAPI void tick(::std::vector<::WeakEntityRef> const* userList);

    MCAPI void updateCSV(double time);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ClientOrServerNetworkSystemRef&&                   network,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
    );

    MCAPI void* $ctor(
        ::ServerNetworkSystem&                               server,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $packetSentTo(::NetworkIdentifier const& target, ::Packet const& packet, uint size);

    MCAPI void $packetReceivedFrom(::NetworkIdentifier const& source, ::Packet const& packet, uint size);

    MCAPI void $dataSentTo(::NetworkIdentifier const& target, ::std::string_view data);

    MCAPI void $dataReceivedFrom(::NetworkIdentifier const& source, ::std::string const& data);

    MCAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
