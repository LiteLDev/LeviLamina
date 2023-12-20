#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct PacketTimeUpdateParams {
public:
    // prevent constructor by default
    PacketTimeUpdateParams& operator=(PacketTimeUpdateParams const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PacketTimeUpdateParams@rtc@@QEAA@XZ
    MCAPI PacketTimeUpdateParams();

    // symbol: ??0PacketTimeUpdateParams@rtc@@QEAA@AEBU01@@Z
    MCAPI PacketTimeUpdateParams(struct rtc::PacketTimeUpdateParams const&);

    // symbol: ??1PacketTimeUpdateParams@rtc@@QEAA@XZ
    MCAPI ~PacketTimeUpdateParams();

    // NOLINTEND
};

}; // namespace rtc
