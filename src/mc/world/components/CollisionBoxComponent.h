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
    // symbol: ?fromVec3@CollisionBoxComponent@@QEAAXAEBVVec3@@@Z
    MCAPI void fromVec3(class Vec3 const&);

    // symbol: ?getDefaultBB@CollisionBoxComponent@@QEBAAEBVVec2@@XZ
    MCAPI class Vec2 const& getDefaultBB() const;

    // NOLINTEND
};
