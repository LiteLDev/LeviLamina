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
    // prevent constructor by default
    DcSctpTransport& operator=(DcSctpTransport const&);
    DcSctpTransport(DcSctpTransport const&);
    DcSctpTransport();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ConnectTransportSignals();

    MCAPI DcSctpTransport(::webrtc::Environment const&, ::rtc::Thread*, ::rtc::PacketTransportInternal*);

    MCAPI
    DcSctpTransport(::webrtc::Environment const&, ::rtc::Thread*, ::rtc::PacketTransportInternal*, ::std::unique_ptr<::dcsctp::DcSctpSocketFactory>);

    MCAPI void DisconnectTransportSignals();

    MCAPI void MaybeConnectSocket();

    MCAPI void OnTransportReadPacket(::rtc::PacketTransportInternal*, ::rtc::ReceivedPacket const&);

    MCAPI void OnTransportWritableState(::rtc::PacketTransportInternal*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::Environment const&, ::rtc::Thread*, ::rtc::PacketTransportInternal*);

    MCAPI void*
    $ctor(::webrtc::Environment const&, ::rtc::Thread*, ::rtc::PacketTransportInternal*, ::std::unique_ptr<::dcsctp::DcSctpSocketFactory>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForHasSlots();

    MCAPI static void** $vftableForSctpTransportInternal();

    MCAPI static void** $vftableForDcSctpSocketCallbacks();
    // NOLINTEND
};

} // namespace webrtc
