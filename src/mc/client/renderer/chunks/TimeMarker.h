#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimeMarker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk572d5d;
    ::ll::UntypedStorage<4, 4>  mUnkd99be1;
    ::ll::UntypedStorage<4, 8>  mUnkf0764a;
    // NOLINTEND

public:
    // prevent constructor by default
    TimeMarker& operator=(TimeMarker const&);
    TimeMarker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TimeMarker(::TimeMarker const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TimeMarker const&);
    // NOLINTEND
};
