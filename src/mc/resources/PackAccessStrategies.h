#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackAccessStrategies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5b7350;
    ::ll::UntypedStorage<8, 8> mUnk6ae93b;
    // NOLINTEND

public:
    // prevent constructor by default
    PackAccessStrategies& operator=(PackAccessStrategies const&);
    PackAccessStrategies(PackAccessStrategies const&);
    PackAccessStrategies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackAccessStrategies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
