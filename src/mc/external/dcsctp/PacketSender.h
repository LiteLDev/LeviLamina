#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/SctpPacket.h"
#include "mc/external/dcsctp/SendPacketStatus.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpSocketCallbacks; }
// clang-format on

namespace dcsctp {

class PacketSender {
public:
    // prevent constructor by default
    PacketSender& operator=(PacketSender const&);
    PacketSender(PacketSender const&);
    PacketSender();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    PacketSender(::dcsctp::DcSctpSocketCallbacks&, ::std::function<void(::rtc::ArrayView<uchar const>, ::dcsctp::SendPacketStatus)>);

    MCAPI bool Send(::dcsctp::SctpPacket::Builder&, bool);

    MCAPI ~PacketSender();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::dcsctp::DcSctpSocketCallbacks&, ::std::function<void(::rtc::ArrayView<uchar const>, ::dcsctp::SendPacketStatus)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
