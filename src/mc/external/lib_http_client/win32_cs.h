#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class win32_cs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkfabdf5;
    // NOLINTEND

public:
    // prevent constructor by default
    win32_cs& operator=(win32_cs const&);
    win32_cs(win32_cs const&);
    win32_cs();

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
