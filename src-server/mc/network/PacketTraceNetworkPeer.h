#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"
#include "mc/platform/brstd/simple_circular_queue.h"

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
        ::ll::UntypedStorage<4, 4> mUnk67f3de;
        ::ll::UntypedStorage<8, 8> mUnkc29cd2;
        ::ll::UntypedStorage<8, 8> mUnk7b6577;
        ::ll::UntypedStorage<1, 513> mUnkcbbd4a;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        PacketTraceInfo& operator=(PacketTraceInfo const&);
        PacketTraceInfo(PacketTraceInfo const&);
        PacketTraceInfo();
    
    };
    
    class PacketTraceQueue : public ::brstd::simple_circular_queue<::PacketTraceNetworkPeer::PacketTraceInfo, 3> {
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1648> mUnk2e7c35;
    ::ll::UntypedStorage<8, 1648> mUnka86bf2;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketTraceNetworkPeer& operator=(PacketTraceNetworkPeer const&);
    PacketTraceNetworkPeer(PacketTraceNetworkPeer const&);
    PacketTraceNetworkPeer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

    // vIndex: 2
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    // vIndex: 7
    virtual ::NetworkPeer::DataStatus _receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;

    // vIndex: 0
    virtual ~PacketTraceNetworkPeer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
