#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkPeer.h"
#include "mc/platform/brstd/simple_circular_queue.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PacketTraceNetworkPeer : public ::NetworkPeer {
public:
    // PacketTraceNetworkPeer inner types declare
    // clang-format off
    struct PacketTraceInfo;
    class PacketTraceQueue;
    // clang-format on

    // PacketTraceNetworkPeer inner types define
    struct PacketTraceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::MinecraftPacketIds> packetId;
        ::ll::TypedStorage<8, 8, int64>                recordedTime;
        ::ll::TypedStorage<8, 8, uint64>               originalStreamSize;
        ::ll::TypedStorage<1, 513, char[513]>          hexData;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ::Json::Value toJson() const;
#endif
        // NOLINTEND
    };

    class PacketTraceQueue : public ::brstd::simple_circular_queue<::PacketTraceNetworkPeer::PacketTraceInfo, 3> {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1648, ::PacketTraceNetworkPeer::PacketTraceQueue> mSentPackets;
    ::ll::TypedStorage<8, 1648, ::PacketTraceNetworkPeer::PacketTraceQueue> mReceivedPackets;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketTraceNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void sendPacket(
        ::std::string const&       data,
        ::NetworkPeer::Reliability reliability,
        ::Compressibility          compressible
    ) /*override*/;

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    virtual ::NetworkPeer::DataStatus _receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    ) /*override*/;

    virtual ~PacketTraceNetworkPeer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PacketTraceNetworkPeer(::std::shared_ptr<::NetworkPeer> peer);

    MCAPI void _recordPacket(::std::string const& data, bool isOutgoing);

#ifdef LL_PLAT_C
    MCAPI ::std::pair<::Json::Value, ::Json::Value> getPacketTraces() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::NetworkPeer> peer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $sendPacket(::std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    MCFOLD ::NetworkPeer::NetworkStatus $getNetworkStatus() const;

    MCAPI ::NetworkPeer::DataStatus $_receivePacket(
        ::std::string&                                                    outData,
        ::std::shared_ptr<::std::chrono::steady_clock::time_point> const& timepointPtr
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
