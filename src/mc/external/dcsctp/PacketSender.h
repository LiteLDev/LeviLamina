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
    // member functions
    // NOLINTBEGIN
    MCNAPI
    PacketSender(::dcsctp::DcSctpSocketCallbacks&, ::std::function<void(::rtc::ArrayView<uchar const>, ::dcsctp::SendPacketStatus)>);

    MCNAPI bool Send(::dcsctp::SctpPacket::Builder&, bool);

    MCNAPI ~PacketSender();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::dcsctp::DcSctpSocketCallbacks&, ::std::function<void(::rtc::ArrayView<uchar const>, ::dcsctp::SendPacketStatus)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
