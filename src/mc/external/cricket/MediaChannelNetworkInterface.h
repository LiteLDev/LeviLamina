#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace cricket {

class MediaChannelNetworkInterface {
public:
    // MediaChannelNetworkInterface inner types define
    enum class SocketType : int {
        Rtp  = 0,
        Rtcp = 1,
    };

public:
    // prevent constructor by default
    MediaChannelNetworkInterface& operator=(MediaChannelNetworkInterface const&);
    MediaChannelNetworkInterface(MediaChannelNetworkInterface const&);
    MediaChannelNetworkInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool SendPacket(::rtc::CopyOnWriteBuffer*, ::rtc::PacketOptions const&) = 0;

    // vIndex: 1
    virtual bool SendRtcp(::rtc::CopyOnWriteBuffer*, ::rtc::PacketOptions const&) = 0;

    // vIndex: 2
    virtual int SetOption(::cricket::MediaChannelNetworkInterface::SocketType, ::rtc::Socket::Option, int) = 0;

    // vIndex: 3
    virtual ~MediaChannelNetworkInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
