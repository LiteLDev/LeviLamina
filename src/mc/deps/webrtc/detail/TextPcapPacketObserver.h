#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/PacketObserver.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class PacketObserver; }
namespace dcsctp { class TimeMs; }
// clang-format on

namespace dcsctp {

class TextPcapPacketObserver : public ::dcsctp::PacketObserver {
public:
    // prevent constructor by default
    TextPcapPacketObserver& operator=(TextPcapPacketObserver const&);
    TextPcapPacketObserver(TextPcapPacketObserver const&);
    TextPcapPacketObserver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TextPcapPacketObserver@dcsctp@@UEAA@XZ
    virtual ~TextPcapPacketObserver() = default;

    // vIndex: 1, symbol: ?OnSentPacket@TextPcapPacketObserver@dcsctp@@UEAAXVTimeMs@2@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    virtual void OnSentPacket(class dcsctp::TimeMs, class rtc::ArrayView<uchar const, -4711>);

    // vIndex: 2, symbol:
    // ?OnReceivedPacket@TextPcapPacketObserver@dcsctp@@UEAAXVTimeMs@2@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    virtual void OnReceivedPacket(class dcsctp::TimeMs, class rtc::ArrayView<uchar const, -4711>);

    // symbol:
    // ?PrintPacket@TextPcapPacketObserver@dcsctp@@SAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@0VTimeMs@2@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static void
        PrintPacket(std::string_view, std::string_view, class dcsctp::TimeMs, class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace dcsctp
