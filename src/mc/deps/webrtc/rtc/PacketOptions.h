#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/DiffServCodePoint.h"

namespace rtc {

struct PacketOptions {
public:
    // prevent constructor by default
    PacketOptions& operator=(PacketOptions const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PacketOptions@rtc@@QEAA@XZ
    MCAPI PacketOptions();

    // symbol: ??0PacketOptions@rtc@@QEAA@W4DiffServCodePoint@1@@Z
    MCAPI explicit PacketOptions(::rtc::DiffServCodePoint);

    // symbol: ??0PacketOptions@rtc@@QEAA@AEBU01@@Z
    MCAPI PacketOptions(struct rtc::PacketOptions const&);

    // symbol: ??1PacketOptions@rtc@@QEAA@XZ
    MCAPI ~PacketOptions();

    // NOLINTEND
};

}; // namespace rtc
