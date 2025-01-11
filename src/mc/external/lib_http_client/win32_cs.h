#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct win32_cs {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~win32_cs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace xbox::httpclient
