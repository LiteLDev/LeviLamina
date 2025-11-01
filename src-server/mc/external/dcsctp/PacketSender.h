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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcfadc4;
    ::ll::UntypedStorage<8, 64> mUnk6c0f8b;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSender& operator=(PacketSender const&);
    PacketSender(PacketSender const&);
    PacketSender();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PacketSender(::dcsctp::DcSctpSocketCallbacks& callbacks, ::std::function<void(::rtc::ArrayView<uchar const>, ::dcsctp::SendPacketStatus)> on_sent_packet);

    MCNAPI bool Send(::dcsctp::SctpPacket::Builder& builder, bool write_checksum);

    MCNAPI ~PacketSender();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dcsctp::DcSctpSocketCallbacks& callbacks, ::std::function<void(::rtc::ArrayView<uchar const>, ::dcsctp::SendPacketStatus)> on_sent_packet);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
