#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class NetworkPacketRecorder : public ::NetworkPeer {
public:
    // NetworkPacketRecorder inner types declare
    // clang-format off
    struct PacketRecorderStream;
    // clang-format on

    // NetworkPacketRecorder inner types define
    struct PacketRecorderStream {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>    mUnkd878c2;
        ::ll::UntypedStorage<8, 8>    mUnk2896c4;
        ::ll::UntypedStorage<8, 8>    mUnk674537;
        ::ll::UntypedStorage<1, 2048> mUnk7db711;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketRecorderStream& operator=(PacketRecorderStream const&);
        PacketRecorderStream(PacketRecorderStream const&);
        PacketRecorderStream();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnke97719;
    ::ll::UntypedStorage<8, 6232> mUnkd6e608;
    ::ll::UntypedStorage<8, 6232> mUnkdaa52b;
    ::ll::UntypedStorage<1, 1>    mUnkdac53a;
    ::ll::UntypedStorage<8, 16>   mUnk15c0b2;
    ::ll::UntypedStorage<1, 1>    mUnkb36a7d;
    ::ll::UntypedStorage<1, 1>    mUnk85f337;
    ::ll::UntypedStorage<1, 1>    mUnk4bc6fb;
    ::ll::UntypedStorage<8, 24>   mUnk2a9aea;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkPacketRecorder& operator=(NetworkPacketRecorder const&);
    NetworkPacketRecorder(NetworkPacketRecorder const&);
    NetworkPacketRecorder();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void sendPacket(::std::string const&, ::NetworkPeer::Reliability, ::Compressibility) /*override*/;

    // vIndex: 2
    virtual ::NetworkPeer::NetworkStatus getNetworkStatus() const /*override*/;

    // vIndex: 7
    virtual ::NetworkPeer::DataStatus
    _receivePacket(::std::string&, ::std::shared_ptr<::std::chrono::steady_clock::time_point> const&) /*override*/;

    // vIndex: 0
    virtual ~NetworkPacketRecorder() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
