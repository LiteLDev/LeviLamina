#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class StringBuilder {
public:
    // prevent constructor by default
    StringBuilder& operator=(StringBuilder const&);
    StringBuilder(StringBuilder const&);
    StringBuilder();

public:
    // NOLINTBEGIN
    // symbol: ?AppendFormat@StringBuilder@rtc@@QEAAAEAV12@PEBDZZ
    MCAPI class rtc::StringBuilder& AppendFormat(char const*, ...);

    // symbol: ??6StringBuilder@rtc@@QEAAAEAV01@H@Z
    MCAPI class rtc::StringBuilder& operator<<(int);

    // symbol: ??6StringBuilder@rtc@@QEAAAEAV01@_K@Z
    MCAPI class rtc::StringBuilder& operator<<(uint64);

    // symbol: ??6StringBuilder@rtc@@QEAAAEAV01@I@Z
    MCAPI class rtc::StringBuilder& operator<<(uint);

    // symbol: ??6StringBuilder@rtc@@QEAAAEAV01@K@Z
    MCAPI class rtc::StringBuilder& operator<<(ulong);

    // symbol: ??1StringBuilder@rtc@@QEAA@XZ
    MCAPI ~StringBuilder();

    // NOLINTEND
};

}; // namespace rtc
