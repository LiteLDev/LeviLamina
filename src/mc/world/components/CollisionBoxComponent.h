#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CollisionBoxComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLLISIONBOXCOMPONENT
public:
    CollisionBoxComponent& operator=(CollisionBoxComponent const&) = delete;
    CollisionBoxComponent(CollisionBoxComponent const&)            = delete;
    CollisionBoxComponent()                                        = delete;
#endif

public:
    /**
     * @symbol ?fromVec3\@CollisionBoxComponent\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void fromVec3(class Vec3 const&);
    /**
     * @symbol ?getDefaultBB\@CollisionBoxComponent\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const& getDefaultBB() const;
};
