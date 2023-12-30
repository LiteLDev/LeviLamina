#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct PacketInfo; }
// clang-format on

namespace rtc {

struct SentPacket {
public:
    // prevent constructor by default
    SentPacket& operator=(SentPacket const&);
    SentPacket(SentPacket const&);
    SentPacket();

public:
    // NOLINTBEGIN
    // symbol: ??0SentPacket@rtc@@QEAA@_J0@Z
    MCAPI SentPacket(int64, int64);

    // symbol: ??0SentPacket@rtc@@QEAA@_J0AEBUPacketInfo@1@@Z
    MCAPI SentPacket(int64, int64, struct rtc::PacketInfo const&);

    // symbol: ??1SentPacket@rtc@@QEAA@XZ
    MCAPI ~SentPacket();

    // NOLINTEND
};

}; // namespace rtc
