/**
 * @file  CollisionBoxComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CollisionBoxComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLLISIONBOXCOMPONENT
public:
    class CollisionBoxComponent& operator=(class CollisionBoxComponent const &) = delete;
    CollisionBoxComponent(class CollisionBoxComponent const &) = delete;
    CollisionBoxComponent() = delete;
#endif

public:
    /**
     * @symbol ?fromVec3\@CollisionBoxComponent\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void fromVec3(class Vec3 const &);
    /**
     * @symbol ?getDefaultBB\@CollisionBoxComponent\@\@QEBAAEBVVec2\@\@XZ
     */
    MCAPI class Vec2 const & getDefaultBB() const;

};
