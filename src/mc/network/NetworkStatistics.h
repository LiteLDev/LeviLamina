#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/PacketObserver.h"
#include "mc/network/TrackerType.h"

// auto generated forward declare list
// clang-format off
class ClientOrServerNetworkSystemRef;
class NetworkDebugManager;
class NetworkIdentifier;
class Packet;
class ServerNetworkSystem;
class WeakEntityRef;
namespace RakNet { struct RakNetStatistics; }
// clang-format on

class NetworkStatistics : public ::PacketObserver {
public:
    // NetworkStatistics inner types declare
    // clang-format off
    struct OverviewStats;
    // clang-format on

    // NetworkStatistics inner types define
    struct OverviewStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkf545be;
        ::ll::UntypedStorage<4, 4> mUnkefb20b;
        ::ll::UntypedStorage<4, 4> mUnk9d2b80;
        ::ll::UntypedStorage<4, 4> mUnkdda2a4;
        // NOLINTEND

    public:
        // prevent constructor by default
        OverviewStats& operator=(OverviewStats const&);
        OverviewStats(OverviewStats const&);
        OverviewStats();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>     mUnk4b1184;
    ::ll::UntypedStorage<8, 16>    mUnkfa93d8;
    ::ll::UntypedStorage<8, 24>    mUnkc0b463;
    ::ll::UntypedStorage<4, 4>     mUnk62f24f;
    ::ll::UntypedStorage<4, 16>    mUnk6c9517;
    ::ll::UntypedStorage<8, 64>    mUnkc27a83;
    ::ll::UntypedStorage<8, 64>    mUnkb6e26e;
    ::ll::UntypedStorage<8, 24>    mUnk8e7a7b;
    ::ll::UntypedStorage<8, 64>    mUnkc054fe;
    ::ll::UntypedStorage<8, 64>    mUnkd324ee;
    ::ll::UntypedStorage<8, 64>    mUnkbf613f;
    ::ll::UntypedStorage<8, 10432> mUnk91f38a;
    ::ll::UntypedStorage<4, 16>    mUnk2fd154;
    ::ll::UntypedStorage<8, 24>    mUnk20f3d4;
    ::ll::UntypedStorage<8, 8>     mUnk67953e;
    ::ll::UntypedStorage<8, 80>    mUnkfe473c;
    ::ll::UntypedStorage<8, 224>   mUnk26fc80;
    ::ll::UntypedStorage<8, 64>    mUnk1c0202;
    ::ll::UntypedStorage<8, 8>     mUnk2dd8b0;
    ::ll::UntypedStorage<1, 1>     mUnkd29ea2;
    ::ll::UntypedStorage<1, 1>     mUnk4eb7ee;
    ::ll::UntypedStorage<1, 1>     mUnk44f555;
    ::ll::UntypedStorage<1, 1>     mUnk965a26;
    ::ll::UntypedStorage<1, 1>     mUnkcf3bb2;
    ::ll::UntypedStorage<1, 1>     mUnke3aee4;
    ::ll::UntypedStorage<1, 1>     mUnkd0df15;
    ::ll::UntypedStorage<1, 1>     mUnk75c9c7;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkStatistics& operator=(NetworkStatistics const&);
    NetworkStatistics(NetworkStatistics const&);
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
    MCNAPI NetworkStatistics(
        ::ClientOrServerNetworkSystemRef&&                   network,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
    );

    MCNAPI NetworkStatistics(
        ::ServerNetworkSystem&                               server,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
    );

    MCNAPI void _initRakNetProfileTracking();

    MCNAPI void _logPeerConnectionInfo(::std::vector<::WeakEntityRef> const& userList, bool includeAverages) const;

    MCNAPI ::std::string getVerboseInfo() const;

    MCNAPI void tick(::std::vector<::WeakEntityRef> const* userList);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ClientOrServerNetworkSystemRef&&                   network,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
    );

    MCNAPI void* $ctor(
        ::ServerNetworkSystem&                               server,
        ::TrackerType                                        type,
        ::std::function<bool(::RakNet::RakNetStatistics&)>&& getRakNetStatsReading,
        ::Bedrock::NotNullNonOwnerPtr<::NetworkDebugManager> networkDebugManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $packetSentTo(::NetworkIdentifier const& target, ::Packet const& packet, uint size);

    MCNAPI void $packetReceivedFrom(::NetworkIdentifier const& source, ::Packet const& packet, uint size);

    MCNAPI void $dataSentTo(::NetworkIdentifier const& target, ::std::string_view data);

    MCNAPI void $dataReceivedFrom(::NetworkIdentifier const& source, ::std::string const& data);

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
