#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MountTamingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk83a0ff;
    ::ll::UntypedStorage<8, 24> mUnk1a47ac;
    // NOLINTEND

public:
    // prevent constructor by default
    MountTamingEvent& operator=(MountTamingEvent const&);
    MountTamingEvent(MountTamingEvent const&);
    MountTamingEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MountTamingEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
