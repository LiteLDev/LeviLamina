#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpSocketFactory; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class Thread; }
namespace webrtc { class Environment; }
// clang-format on

namespace webrtc {

class DcSctpTransport {
public:
    // DcSctpTransport inner types declare
    // clang-format off
    struct StreamState;
    // clang-format on

    // DcSctpTransport inner types define
    struct StreamState {};

public:
    // prevent constructor by default
    DcSctpTransport();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ConnectTransportSignals();

    MCNAPI DcSctpTransport(::webrtc::Environment const&, ::rtc::Thread*, ::rtc::PacketTransportInternal*);

    MCNAPI DcSctpTransport(
        ::webrtc::Environment const&,
        ::rtc::Thread*,
        ::rtc::PacketTransportInternal*,
        ::std::unique_ptr<::dcsctp::DcSctpSocketFactory>
    );

    MCNAPI void DisconnectTransportSignals();

    MCNAPI void MaybeConnectSocket();

    MCNAPI void OnTransportReadPacket(::rtc::PacketTransportInternal*, ::rtc::ReceivedPacket const&);

    MCNAPI void OnTransportWritableState(::rtc::PacketTransportInternal*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Environment const&, ::rtc::Thread*, ::rtc::PacketTransportInternal*);

    MCNAPI void* $ctor(
        ::webrtc::Environment const&,
        ::rtc::Thread*,
        ::rtc::PacketTransportInternal*,
        ::std::unique_ptr<::dcsctp::DcSctpSocketFactory>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForSctpTransportInternal();

    MCNAPI static void** $vftableForDcSctpSocketCallbacks();
    // NOLINTEND
};

} // namespace webrtc
