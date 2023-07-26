/**
 * @file  ActorTransform.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorTransform {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?getRenderPosition\@ActorTransform\@\@YAAEBVVec3\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI class Vec3 const & getRenderPosition(class EntityContext const &);
    /**
     * @symbol  ?getRenderRotation\@ActorTransform\@\@YAAEBVVec2\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI class Vec2 const & getRenderRotation(class EntityContext const &);
    /**
     * @symbol  ?initializeActor\@ActorTransform\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeActor(class EntityContext &);
    /**
     * @symbol  ?setRenderPosition\@ActorTransform\@\@YAXAEAVEntityContext\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void setRenderPosition(class EntityContext &, class Vec3 const &);

};