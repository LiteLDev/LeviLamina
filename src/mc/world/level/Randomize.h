#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/util/Random.h"

class Randomize {
public:
    Bedrock::NonOwnerPointer<Random> mRandom; // this+0x8

    // prevent constructor by default
    Randomize& operator=(Randomize const&);
    Randomize(Randomize const&);
    Randomize();

public:
    // NOLINTBEGIN
    MCAPI explicit Randomize(class Random& random);

    MCAPI bool chance(int, int) const;

    MCAPI bool chanceAllButOneIn(int) const;

    MCAPI bool chanceFloatGreaterThan(float) const;

    MCAPI bool chanceFloatLessOrEqual(float probability) const;

    MCAPI bool chanceFloatLessThan(float probability) const;

    MCAPI bool chanceOneIn(int) const;

    MCAPI float nextFloat() const;

    MCAPI int nextIntInclusive(int min, int max) const;

    MCAPI ~Randomize();

    MCAPI static float const ChanceFloatGreaterThan_MinExcessiveImprobability;

    // NOLINTEND
};
