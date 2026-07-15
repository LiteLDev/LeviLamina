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
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct NetworkRoute; }
// clang-format on

namespace webrtc {

class PacketTransportInternal : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk2b2297;
    ::ll::UntypedStorage<8, 48> mUnk42e1b5;
    ::ll::UntypedStorage<8, 48> mUnkc67bb0;
    ::ll::UntypedStorage<8, 48> mUnk1d466e;
    ::ll::UntypedStorage<8, 48> mUnkbdcd5f;
    ::ll::UntypedStorage<1, 1>  mUnk479ec6;
    ::ll::UntypedStorage<8, 32> mUnk358664;
    ::ll::UntypedStorage<8, 32> mUnk6b66e6;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketTransportInternal& operator=(PacketTransportInternal const&);
    PacketTransportInternal(PacketTransportInternal const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& transport_name() const = 0;

    virtual bool writable() const = 0;

    virtual bool receiving() const = 0;

    virtual int
    SendPacket(char const* data, uint64 size, ::webrtc::AsyncSocketPacketOptions const& options, int flags) = 0;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) = 0;

    virtual bool GetOption(::webrtc::Socket::Option opt, int* value);

    virtual int GetError() = 0;

    virtual ::std::optional<::webrtc::NetworkRoute> network_route() const;

    virtual ~PacketTransportInternal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void DeregisterReceivedPacketCallback(void* id);

    MCNAPI void NotifyOnClose();

    MCNAPI void NotifyPacketReceived(::webrtc::ReceivedIpPacket const& packet);

    MCNAPI PacketTransportInternal();

    MCNAPI void RegisterReceivedPacketCallback(
        void*                                                                                             id,
        ::absl::AnyInvocable<void(::webrtc::PacketTransportInternal*, ::webrtc::ReceivedIpPacket const&)> callback
    );

    MCNAPI void SetOnCloseCallback(::absl::AnyInvocable<void() &&> callback);
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
    MCNAPI bool $GetOption(::webrtc::Socket::Option opt, int* value);

    MCNAPI ::std::optional<::webrtc::NetworkRoute> $network_route() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
