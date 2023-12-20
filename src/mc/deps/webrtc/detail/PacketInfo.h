#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct PacketInfo {
public:
    // prevent constructor by default
    PacketInfo& operator=(PacketInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PacketInfo@rtc@@QEAA@XZ
    MCAPI PacketInfo();

    // symbol: ??0PacketInfo@rtc@@QEAA@AEBU01@@Z
    MCAPI PacketInfo(struct rtc::PacketInfo const&);

    // symbol: ??1PacketInfo@rtc@@QEAA@XZ
    MCAPI ~PacketInfo();

    // NOLINTEND
};

}; // namespace rtc
