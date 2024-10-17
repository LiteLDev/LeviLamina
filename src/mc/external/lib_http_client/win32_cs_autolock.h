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
    MCAPI ~win32_cs_autolock();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace xbox::httpclient
