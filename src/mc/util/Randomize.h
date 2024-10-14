#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Randomize {
public:
    // prevent constructor by default
    Randomize& operator=(Randomize const&);
    Randomize(Randomize const&);
    Randomize();

public:
    // NOLINTBEGIN
    MCAPI explicit Randomize(class Random& random);

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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static float const& ChanceFloatGreaterThan_MinExcessiveImprobability();

    // NOLINTEND
};
