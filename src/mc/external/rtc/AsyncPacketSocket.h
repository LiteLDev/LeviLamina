#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/rtc/Socket.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class ReceivedPacket; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace rtc {

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
    ::ll::UntypedStorage<8, 48> mUnkc947ea;
    ::ll::UntypedStorage<8, 48> mUnka854a1;
    ::ll::UntypedStorage<8, 48> mUnk73987d;
    ::ll::UntypedStorage<8, 48> mUnk748d42;
    ::ll::UntypedStorage<1, 1>  mUnkd3ab2c;
    ::ll::UntypedStorage<8, 32> mUnkf3e89d;
    ::ll::UntypedStorage<8, 32> mUnkb56b47;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncPacketSocket& operator=(AsyncPacketSocket const&);
    AsyncPacketSocket(AsyncPacketSocket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AsyncPacketSocket() /*override*/;

    // vIndex: 1
    virtual ::rtc::SocketAddress GetLocalAddress() const = 0;

    // vIndex: 2
    virtual ::rtc::SocketAddress GetRemoteAddress() const = 0;

    // vIndex: 3
    virtual int Send(void const* data, uint64 len, ::rtc::PacketOptions const& options) = 0;

    // vIndex: 4
    virtual int SendTo(void const*, uint64, ::rtc::SocketAddress const&, ::rtc::PacketOptions const&) = 0;

    // vIndex: 5
    virtual int Close() = 0;

    // vIndex: 6
    virtual ::rtc::AsyncPacketSocket::State GetState() const = 0;

    // vIndex: 7
    virtual int GetOption(::rtc::Socket::Option opt, int* value) = 0;

    // vIndex: 8
    virtual int SetOption(::rtc::Socket::Option, int) = 0;

    // vIndex: 9
    virtual int GetError() const = 0;

    // vIndex: 10
    virtual void SetError(int) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AsyncPacketSocket();

    MCNAPI void NotifyPacketReceived(::rtc::ReceivedPacket const& packet);

    MCNAPI void
    SubscribeCloseEvent(void const* removal_tag, ::std::function<void(::rtc::AsyncPacketSocket*, int)> callback);

    MCNAPI void SubscribeReceivedPacketEvent(
        void const*                                                                         removal_tag,
        ::absl::AnyInvocable<void(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const&)> received_packet_callback
    );

    MCNAPI void UnsubscribeCloseEvent(void const* removal_tag);

    MCNAPI void UnsubscribeReceivedPacketEvent(void const* removal_tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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

} // namespace rtc
