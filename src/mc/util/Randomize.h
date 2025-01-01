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
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Randomize(::Random& random);

    MCAPI bool chance(int likeliness, int possibilities) const;

    MCAPI bool chanceAllButOneIn(int possibilities) const;

    MCAPI bool chanceFloatGreaterThan(float improbability) const;

    MCAPI bool chanceFloatLessOrEqual(float probability) const;

    MCAPI bool chanceFloatLessThan(float probability) const;

    MCAPI bool chanceOneIn(int possibilities) const;

    MCAPI float nextFloat() const;

    MCAPI int nextIntInclusive(int min, int max) const;

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
    MCAPI void $dtor();
    // NOLINTEND
};
