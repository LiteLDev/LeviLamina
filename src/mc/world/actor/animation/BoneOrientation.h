#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BoneOrientation {
public:
    // prevent constructor by default
    BoneOrientation& operator=(BoneOrientation const&);
    BoneOrientation(BoneOrientation const&);

public:
    // NOLINTBEGIN
    MCAPI BoneOrientation();

    MCAPI class HashedString const& getName() const;

    MCAPI class Vec3& getPivot();

    MCAPI class Vec3 const& getPivot() const;

    // NOLINTEND
};
