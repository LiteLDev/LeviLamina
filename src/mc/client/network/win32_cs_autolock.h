#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class win32_cs_autolock {
public:
    // prevent constructor by default
    win32_cs_autolock& operator=(win32_cs_autolock const&);
    win32_cs_autolock(win32_cs_autolock const&);
    win32_cs_autolock();

public:
    // NOLINTBEGIN
    // symbol: ??1win32_cs_autolock@httpclient@xbox@@QEAA@XZ
    MCAPI ~win32_cs_autolock();

    // NOLINTEND
};

}; // namespace xbox::httpclient
