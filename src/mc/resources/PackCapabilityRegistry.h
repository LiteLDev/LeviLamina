#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackCapabilityRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk27dd51;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCapabilityRegistry& operator=(PackCapabilityRegistry const&);
    PackCapabilityRegistry(PackCapabilityRegistry const&);
    PackCapabilityRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackCapabilityRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
