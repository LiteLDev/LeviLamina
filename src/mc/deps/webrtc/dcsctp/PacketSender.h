#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/dcsctp/SctpPacket.h"
#include "mc/deps/webrtc/dcsctp/SendPacketStatus.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

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
    // NOLINTBEGIN
    // symbol:
    // ??0PacketSender@dcsctp@@QEAA@AEAVDcSctpSocketCallbacks@1@V?$function@$$A6AXV?$ArrayView@$$CBE$0?BCGH@@rtc@@W4SendPacketStatus@dcsctp@@@Z@std@@@Z
    MCAPI
    PacketSender(class dcsctp::DcSctpSocketCallbacks&, std::function<void(class rtc::ArrayView<uchar const, -4711>, ::dcsctp::SendPacketStatus)>);

    // symbol: ?Send@PacketSender@dcsctp@@QEAA_NAEAVBuilder@SctpPacket@2@@Z
    MCAPI bool Send(class dcsctp::SctpPacket::Builder&);

    // symbol: ??1PacketSender@dcsctp@@QEAA@XZ
    MCAPI ~PacketSender();

    // NOLINTEND
};

}; // namespace dcsctp
