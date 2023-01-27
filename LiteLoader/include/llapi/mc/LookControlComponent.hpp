/**
 * @file  LookControlComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -429147477
     * @symbol  ??0LookControlComponent\@\@QEAA\@XZ
     */
    MCAPI LookControlComponent();
    /**
     * @hash   -1003978312
     * @symbol  ?getHasWantedPosition\@LookControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasWantedPosition() const;
    /**
     * @hash   -1744260670
     * @symbol  ?getHasWantedRotation\@LookControlComponent\@\@QEBA_NXZ
     */
    MCAPI bool getHasWantedRotation() const;
    /**
     * @hash   1384109488
     * @symbol  ?getWantedPosition\@LookControlComponent\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getWantedPosition() const;
    /**
     * @hash   633711392
     * @symbol  ?getWantedRotation\@LookControlComponent\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getWantedRotation() const;
    /**
     * @hash   1609506340
     * @symbol  ?getXMax\@LookControlComponent\@\@QEBAMXZ
     */
    MCAPI float getXMax() const;
    /**
     * @hash   777417924
     * @symbol  ?getYMax\@LookControlComponent\@\@QEBAMXZ
     */
    MCAPI float getYMax() const;
    /**
     * @hash   -1767981148
     * @symbol  ?initialize\@LookControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void initialize(class Mob &);
    /**
     * @hash   989279130
     * @symbol  ??4LookControlComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LookControlComponent & operator=(class LookControlComponent &&);
    /**
     * @hash   1375967772
     * @symbol  ?setHasWantedPosition\@LookControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasWantedPosition(bool);
    /**
     * @hash   -112017886
     * @symbol  ?setHasWantedRotation\@LookControlComponent\@\@QEAAX_N\@Z
     */
    MCAPI void setHasWantedRotation(bool);
    /**
     * @hash   -1547500062
     * @symbol  ?setInternalType\@LookControlComponent\@\@QEAAXV?$unique_ptr\@VLookControl\@\@U?$default_delete\@VLookControl\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class LookControl>);
    /**
     * @hash   36787646
     * @symbol  ?setLookAtPosition\@LookControlComponent\@\@QEAAXAEBVVec3\@\@MM\@Z
     */
    MCAPI void setLookAtPosition(class Vec3 const &, float, float);
    /**
     * @hash   1793413797
     * @symbol  ?setLookAtPosition\@LookControlComponent\@\@QEAAXPEBVActor\@\@MM\@Z
     */
    MCAPI void setLookAtPosition(class Actor const *, float, float);
    /**
     * @hash   523044212
     * @symbol  ?setLookAtRotation\@LookControlComponent\@\@QEAAXAEBVVec3\@\@MM\@Z
     */
    MCAPI void setLookAtRotation(class Vec3 const &, float, float);
    /**
     * @hash   -725186810
     * @symbol  ?setYMax\@LookControlComponent\@\@QEAAXM\@Z
     */
    MCAPI void setYMax(float);
    /**
     * @hash   1282619396
     * @symbol  ?update\@LookControlComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void update(class Mob &);

};