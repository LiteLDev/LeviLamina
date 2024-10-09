#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class win32_cs {
public:
    // prevent constructor by default
    win32_cs& operator=(win32_cs const&);
    win32_cs(win32_cs const&);
    win32_cs();

public:
    // NOLINTBEGIN
    MCAPI ~win32_cs();

    // NOLINTEND
};

}; // namespace xbox::httpclient
