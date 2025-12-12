#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

class LegacyBlendedNoise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkf32158;
    ::ll::UntypedStorage<8, 40> mUnk53aefe;
    ::ll::UntypedStorage<8, 40> mUnka4b47b;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyBlendedNoise& operator=(LegacyBlendedNoise const&);
    LegacyBlendedNoise(LegacyBlendedNoise const&);
    LegacyBlendedNoise();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LegacyBlendedNoise();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::LegacyBlendedNoise make(::IRandom& random);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
