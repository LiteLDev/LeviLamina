#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct ConnectionInfo {
public:
    // prevent constructor by default
    ConnectionInfo& operator=(ConnectionInfo const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ConnectionInfo@cricket@@QEAA@XZ
    MCAPI ConnectionInfo();

    // symbol: ??0ConnectionInfo@cricket@@QEAA@AEBU01@@Z
    MCAPI ConnectionInfo(struct cricket::ConnectionInfo const&);

    // symbol: ??1ConnectionInfo@cricket@@QEAA@XZ
    MCAPI ~ConnectionInfo();

    // NOLINTEND
};

}; // namespace cricket
