#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class Randomize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Random>> mRandom;
    // NOLINTEND

public:
    // prevent constructor by default
    Randomize();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Randomize(::Random& random);

    MCNAPI bool chanceFloatGreaterThan(float improbability) const;

    MCNAPI ~Randomize();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& ChanceFloatGreaterThan_MinExcessiveImprobability();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Random& random);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
