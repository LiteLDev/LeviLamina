/**
 * @file  MobAnimation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace MobAnimation {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?getAnimStep\@MobAnimation\@\@YAMAEBVEntityContext\@\@\@Z
     */
    MCAPI float getAnimStep(class EntityContext const &);
    /**
     * @symbol  ?getHurtTime\@MobAnimation\@\@YAHAEBVEntityContext\@\@\@Z
     */
    MCAPI int getHurtTime(class EntityContext const &);
    /**
     * @symbol  ?getWalkAnimPos\@MobAnimation\@\@YAMAEBVEntityContext\@\@\@Z
     */
    MCAPI float getWalkAnimPos(class EntityContext const &);
    /**
     * @symbol  ?getWalkAnimSpeed\@MobAnimation\@\@YAMAEBVEntityContext\@\@\@Z
     */
    MCAPI float getWalkAnimSpeed(class EntityContext const &);
    /**
     * @symbol  ?getWalkAnimSpeedMultiplier\@MobAnimation\@\@YAMAEBVEntityContext\@\@\@Z
     */
    MCAPI float getWalkAnimSpeedMultiplier(class EntityContext const &);
    /**
     * @symbol  ?getWalkAnimSpeedNewOld\@MobAnimation\@\@YA?AUInterpolationPair\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI struct InterpolationPair getWalkAnimSpeedNewOld(class EntityContext const &);
    /**
     * @symbol  ?initializeActor\@MobAnimation\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeActor(class EntityContext &);
    /**
     * @symbol  ?initializeMob\@MobAnimation\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeMob(class EntityContext &);
    /**
     * @symbol  ?setAnimStep\@MobAnimation\@\@YAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI void setAnimStep(class EntityContext &, float);
    /**
     * @symbol  ?setAnimStepO\@MobAnimation\@\@YAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI void setAnimStepO(class EntityContext &, float);
    /**
     * @symbol  ?setHurtTime\@MobAnimation\@\@YAXAEAVEntityContext\@\@H\@Z
     */
    MCAPI void setHurtTime(class EntityContext &, int);
    /**
     * @symbol  ?setWalkAnimPos\@MobAnimation\@\@YAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI void setWalkAnimPos(class EntityContext &, float);
    /**
     * @symbol  ?setWalkAnimSpeed\@MobAnimation\@\@YAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI void setWalkAnimSpeed(class EntityContext &, float);
    /**
     * @symbol  ?setWalkAnimSpeedMultiplier\@MobAnimation\@\@YAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI void setWalkAnimSpeedMultiplier(class EntityContext &, float);
    /**
     * @symbol  ?setWalkAnimSpeedO\@MobAnimation\@\@YAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI void setWalkAnimSpeedO(class EntityContext &, float);

};