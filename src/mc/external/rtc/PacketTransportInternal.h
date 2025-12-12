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
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace rtc {

class PacketTransportInternal : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkf7aded;
    ::ll::UntypedStorage<8, 48> mUnke7edde;
    ::ll::UntypedStorage<8, 48> mUnkf8514d;
    ::ll::UntypedStorage<8, 48> mUnk98c54b;
    ::ll::UntypedStorage<8, 48> mUnkb94f82;
    ::ll::UntypedStorage<1, 1>  mUnk7e10bf;
    ::ll::UntypedStorage<8, 32> mUnkab850a;
    ::ll::UntypedStorage<8, 32> mUnkf1b4ec;
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

    virtual int SendPacket(char const*, uint64, ::rtc::PacketOptions const&, int) = 0;

    virtual int SetOption(::rtc::Socket::Option, int) = 0;

    virtual bool GetOption(::rtc::Socket::Option opt, int* value);

    virtual int GetError() = 0;

    virtual ::std::optional<::rtc::NetworkRoute> network_route() const;

    virtual ~PacketTransportInternal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void DeregisterReceivedPacketCallback(void* id);

    MCNAPI void NotifyOnClose();

    MCNAPI void NotifyPacketReceived(::rtc::ReceivedPacket const& packet);

    MCNAPI PacketTransportInternal();

    MCNAPI void RegisterReceivedPacketCallback(
        void*                                                                                     id,
        ::absl::AnyInvocable<void(::rtc::PacketTransportInternal*, ::rtc::ReceivedPacket const&)> callback
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
    MCNAPI bool $GetOption(::rtc::Socket::Option opt, int* value);

    MCNAPI ::std::optional<::rtc::NetworkRoute> $network_route() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
