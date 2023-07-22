/**
 * @file  ActorEnvironment.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorEnvironment {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?getHeadInWater\@ActorEnvironment\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool getHeadInWater(class EntityContext const &);
    /**
     * @symbol  ?getIsInLava\@ActorEnvironment\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool getIsInLava(class EntityContext const &);
    /**
     * @symbol  ?getIsInWater\@ActorEnvironment\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool getIsInWater(class EntityContext const &);
    /**
     * @symbol  ?setHeadInWater\@ActorEnvironment\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setHeadInWater(class EntityContext &, bool);
    /**
     * @symbol  ?setIsInLava\@ActorEnvironment\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setIsInLava(class EntityContext &, bool);
    /**
     * @symbol  ?setIsInWater\@ActorEnvironment\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setIsInWater(class EntityContext &, bool);

};