#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CopyOnWriteBuffer; }
namespace webrtc { struct AsyncSocketPacketOptions; }
// clang-format on

namespace webrtc {

class MediaChannelNetworkInterface {
public:
    // MediaChannelNetworkInterface inner types define
    enum class SocketType : int {
        Rtp  = 0,
        Rtcp = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool SendPacket(::webrtc::CopyOnWriteBuffer* packet, ::webrtc::AsyncSocketPacketOptions const& options) = 0;

    virtual bool SendRtcp(::webrtc::CopyOnWriteBuffer* packet, ::webrtc::AsyncSocketPacketOptions const& options) = 0;

    virtual int
    SetOption(::webrtc::MediaChannelNetworkInterface::SocketType type, ::webrtc::Socket::Option opt, int value) = 0;

    virtual ~MediaChannelNetworkInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
