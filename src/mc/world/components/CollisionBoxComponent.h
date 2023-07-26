#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CollisionBoxComponent {

public:
    // prevent constructor by default
    CollisionBoxComponent& operator=(CollisionBoxComponent const&) = delete;
    CollisionBoxComponent(CollisionBoxComponent const&)            = delete;
    CollisionBoxComponent()                                        = delete;

public:
    /**
     * @symbol ?fromVec3\@CollisionBoxComponent\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void fromVec3(class Vec3 const&); // NOLINT
    /**
     * @symbol ?getDefaultBB\@CollisionBoxComponent\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const& getDefaultBB() const; // NOLINT
};
