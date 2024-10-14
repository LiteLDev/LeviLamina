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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
