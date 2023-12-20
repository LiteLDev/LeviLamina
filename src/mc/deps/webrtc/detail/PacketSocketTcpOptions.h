#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct PacketSocketTcpOptions {
public:
    // prevent constructor by default
    PacketSocketTcpOptions& operator=(PacketSocketTcpOptions const&);
    PacketSocketTcpOptions(PacketSocketTcpOptions const&);
    PacketSocketTcpOptions();

public:
    // NOLINTBEGIN
    // symbol: ??1PacketSocketTcpOptions@rtc@@QEAA@XZ
    MCAPI ~PacketSocketTcpOptions();

    // NOLINTEND
};

}; // namespace rtc
