#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class ScopedSerializationTraits {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc9eb44;
    ::ll::UntypedStorage<1, 1> mUnkaabeac;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedSerializationTraits& operator=(ScopedSerializationTraits const&);
    ScopedSerializationTraits(ScopedSerializationTraits const&);
    ScopedSerializationTraits();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScopedSerializationTraits();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
