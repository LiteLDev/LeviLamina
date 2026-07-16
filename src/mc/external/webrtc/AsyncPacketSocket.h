#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ReceivedIpPacket; }
namespace webrtc { class SocketAddress; }
namespace webrtc { struct AsyncSocketPacketOptions; }
// clang-format on

namespace webrtc {

class AsyncPacketSocket : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // AsyncPacketSocket inner types define
    enum class State : int {
        Closed     = 0,
        Binding    = 1,
        Bound      = 2,
        Connecting = 3,
        Connected  = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk34f3b8;
    ::ll::UntypedStorage<8, 48> mUnk7217ad;
    ::ll::UntypedStorage<8, 48> mUnk4c8565;
    ::ll::UntypedStorage<8, 48> mUnk37ba53;
    ::ll::UntypedStorage<1, 1>  mUnk62f8c6;
    ::ll::UntypedStorage<8, 32> mUnk8b8993;
    ::ll::UntypedStorage<8, 32> mUnk3c1cef;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncPacketSocket& operator=(AsyncPacketSocket const&);
    AsyncPacketSocket(AsyncPacketSocket const&);
    AsyncPacketSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AsyncPacketSocket() /*override*/;

    virtual ::webrtc::SocketAddress GetLocalAddress() const = 0;

    virtual ::webrtc::SocketAddress GetRemoteAddress() const = 0;

    virtual int Send(void const* pv, uint64 cb, ::webrtc::AsyncSocketPacketOptions const& options) = 0;

    virtual int SendTo(
        void const*                               pv,
        uint64                                    cb,
        ::webrtc::SocketAddress const&            addr,
        ::webrtc::AsyncSocketPacketOptions const& options
    ) = 0;

    virtual int Close() = 0;

    virtual ::webrtc::AsyncPacketSocket::State GetState() const = 0;

    virtual int GetOption(::webrtc::Socket::Option opt, int* value) = 0;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) = 0;

    virtual int GetError() const = 0;

    virtual void SetError(int error) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void DeregisterReceivedPacketCallback(void const* removal_tag);

    MCNAPI void NotifyPacketReceived(::webrtc::ReceivedIpPacket const& packet);

    MCNAPI void RegisterReceivedPacketCallback(
        void const* removal_tag,
        ::absl::AnyInvocable<void(::webrtc::AsyncPacketSocket*, ::webrtc::ReceivedIpPacket const&)>
            received_packet_callback
    );

    MCNAPI void
    SubscribeCloseEvent(void const* removal_tag, ::std::function<void(::webrtc::AsyncPacketSocket*, int)> callback);

    MCNAPI void UnsubscribeCloseEvent(void const* removal_tag);
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
