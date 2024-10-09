#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Cavifier {
public:
    // prevent constructor by default
    Cavifier& operator=(Cavifier const&);
    Cavifier(Cavifier const&);
    Cavifier();

public:
    // NOLINTBEGIN
    MCAPI Cavifier(class CavifierNoises const& cavifierNoises, float minCellY, float densityBoost);

    MCAPI float cavify(class Vec3 pos, int, float density) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI float _getSpaghetti2d(class Vec3 pos) const;

    // NOLINTEND
};
