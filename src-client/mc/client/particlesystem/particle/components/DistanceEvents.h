#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace ParticleSystem {

struct DistanceEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                          mDistanceInterval;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mEventName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DistanceEvents();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem
