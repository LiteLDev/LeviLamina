#pragma once

#include "mc/_HeaderOutputPredefine.h"

class KeyFrameLerpMode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke3f104;
    ::ll::UntypedStorage<4, 4> mUnke4dc40;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyFrameLerpMode(KeyFrameLerpMode const&);
    KeyFrameLerpMode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::KeyFrameLerpMode& operator=(::KeyFrameLerpMode const& rhs);
    // NOLINTEND
};
