#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class win32_cs_autolock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka550f1;
    // NOLINTEND

public:
    // prevent constructor by default
    win32_cs_autolock& operator=(win32_cs_autolock const&);
    win32_cs_autolock(win32_cs_autolock const&);
    win32_cs_autolock();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~win32_cs_autolock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
