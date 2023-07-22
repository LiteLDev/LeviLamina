/**
 * @file  LookControlComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookControlComponent.
 *
 */
class LookControlComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKCONTROLCOMPONENT
public:
    class LookControlComponent& operator=(class LookControlComponent const &) = delete;
    LookControlComponent(class LookControlComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0LookControlComponent\@\@QEAA\@XZ
     */
    MCAPI LookControlComponent();
    /**
     * @symbol  ?getHasWantedPosition\@LookControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasWantedPosition() const;
    /**
     * @symbol  ?getHasWantedRotation\@LookControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasWantedRotation() const;
    /**
     * @symbol  ?getWantedPosition\@LookControlComponent\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getWantedPosition() const;
    /**
     * @symbol  ?getWantedRotation\@LookControlComponent\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getWantedRotation() const;
    /**
     * @symbol  ?getXMax\@LookControlComponent\@\@QEBAMXZ
     */
    MCAPI float getXMax() const;
    /**
     * @symbol  ?getYMax\@LookControlComponent\@\@QEBAMXZ
     */
    MCAPI float getYMax() const;
    /**
     * @symbol  ?initialize\@LookControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void initialize(class Mob &);
    /**
     * @symbol  ??4LookControlComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LookControlComponent & operator=(class LookControlComponent &&);
    /**
     * @symbol  ?setHasWantedPosition\@LookControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasWantedPosition(bool);
    /**
     * @symbol  ?setHasWantedRotation\@LookControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasWantedRotation(bool);
    /**
     * @symbol  ?setInternalType\@LookControlComponent\@\@QEAAXV?$unique_ptr\@VLookControl\@\@U?$default_delete\@VLookControl\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class LookControl>);
    /**
     * @symbol  ?setLookAtPosition\@LookControlComponent\@\@QEAAXAEBVVec3\@\@MM\@Z
     */
    MCAPI void setLookAtPosition(class Vec3 const &, float, float);
    /**
     * @symbol  ?setLookAtPosition\@LookControlComponent\@\@QEAAXPEBVActor\@\@MM\@Z
     */
    MCAPI void setLookAtPosition(class Actor const *, float, float);
    /**
     * @symbol  ?setLookAtRotation\@LookControlComponent\@\@QEAAXAEBVVec3\@\@MM\@Z
     */
    MCAPI void setLookAtRotation(class Vec3 const &, float, float);
    /**
     * @symbol  ?setYMax\@LookControlComponent\@\@QEAAXM\@Z
     */
    MCAPI void setYMax(float);
    /**
     * @symbol  ?update\@LookControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob &);

};