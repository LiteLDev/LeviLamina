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
    MCAPI explicit Randomize(::Random& random);

    MCAPI bool chanceFloatGreaterThan(float improbability) const;

    MCAPI ~Randomize();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& ChanceFloatGreaterThan_MinExcessiveImprobability();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Random& random);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
