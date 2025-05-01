#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct win32_cs {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~win32_cs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace xbox::httpclient
