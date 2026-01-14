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
        MCAPI_C ::Json::Value toJson() const;
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
    // virtual functions
    // NOLINTBEGIN
    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    virtual ::NetworkPeer::DataStatus
    _receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;

    virtual ~PacketTraceNetworkPeer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::std::pair<::Json::Value, ::Json::Value> getPacketTraces() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
