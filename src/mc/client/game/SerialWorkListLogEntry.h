#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SerialWorkListLogEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd3e833;
    ::ll::UntypedStorage<4, 4>  mUnkcec010;
    // NOLINTEND

public:
    // prevent constructor by default
    SerialWorkListLogEntry& operator=(SerialWorkListLogEntry const&);
    SerialWorkListLogEntry(SerialWorkListLogEntry const&);
    SerialWorkListLogEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~SerialWorkListLogEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
