#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CollisionBoxComponent {
public:
    // prevent constructor by default
    CollisionBoxComponent& operator=(CollisionBoxComponent const&);
    CollisionBoxComponent(CollisionBoxComponent const&);
    CollisionBoxComponent();

public:
    // NOLINTBEGIN
    MCAPI void fromVec3(class Vec3 const&);

    MCAPI class Vec2 const& getDefaultBB() const;

    // NOLINTEND
};
