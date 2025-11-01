#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlotData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke0182b;
    ::ll::UntypedStorage<4, 4>  mUnkb1376b;
    // NOLINTEND

public:
    // prevent constructor by default
    SlotData& operator=(SlotData const&);
    SlotData(SlotData const&);
    SlotData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SlotData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SlotData& UNKNOWN_LOCATION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
