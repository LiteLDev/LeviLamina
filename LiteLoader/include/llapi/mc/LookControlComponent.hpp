/**
 * @file  LookControlComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   413564955
     * @symbol ??0LookControlComponent@@QEAA@XZ
     */
    MCAPI LookControlComponent();
    /**
     * @hash   -1135858264
     * @symbol ?getHasWantedPosition@LookControlComponent@@QEBA_NXZ
     */
    MCAPI bool getHasWantedPosition() const;
    /**
     * @hash   -1876202126
     * @symbol ?getHasWantedRotation@LookControlComponent@@QEBA_NXZ
     */
    MCAPI bool getHasWantedRotation() const;
    /**
     * @hash   -2059703952
     * @symbol ?getWantedPosition@LookControlComponent@@QEBA?AVVec3@@XZ
     */
    MCAPI class Vec3 getWantedPosition() const;
    /**
     * @hash   1476423824
     * @symbol ?getWantedRotation@LookControlComponent@@QEBA?AVVec3@@XZ
     */
    MCAPI class Vec3 getWantedRotation() const;
    /**
     * @hash   1344008948
     * @symbol ?getXMax@LookControlComponent@@QEBAMXZ
     */
    MCAPI float getXMax() const;
    /**
     * @hash   511889780
     * @symbol ?getYMax@LookControlComponent@@QEBAMXZ
     */
    MCAPI float getYMax() const;
    /**
     * @hash   -925268716
     * @symbol ?initialize@LookControlComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void initialize(class Mob &);
    /**
     * @hash   770186506
     * @symbol ??4LookControlComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class LookControlComponent & operator=(class LookControlComponent &&);
    /**
     * @hash   1244087820
     * @symbol ?setHasWantedPosition@LookControlComponent@@QEAAX_N@Z
     */
    MCAPI void setHasWantedPosition(bool);
    /**
     * @hash   -243913214
     * @symbol ?setHasWantedRotation@LookControlComponent@@QEAAX_N@Z
     */
    MCAPI void setHasWantedRotation(bool);
    /**
     * @hash   -704787630
     * @symbol ?setInternalType@LookControlComponent@@QEAAXV?$unique_ptr@VLookControl@@U?$default_delete@VLookControl@@@std@@@std@@@Z
     */
    MCAPI void setInternalType(std::unique_ptr<class LookControl>);
    /**
     * @hash   879484702
     * @symbol ?setLookAtPosition@LookControlComponent@@QEAAXAEBVVec3@@MM@Z
     */
    MCAPI void setLookAtPosition(class Vec3 const &, float, float);
    /**
     * @hash   -1658856443
     * @symbol ?setLookAtPosition@LookControlComponent@@QEAAXPEBVActor@@MM@Z
     */
    MCAPI void setLookAtPosition(class Actor const *, float, float);
    /**
     * @hash   1365725892
     * @symbol ?setLookAtRotation@LookControlComponent@@QEAAXAEBVVec3@@MM@Z
     */
    MCAPI void setLookAtRotation(class Vec3 const &, float, float);
    /**
     * @hash   117494870
     * @symbol ?setYMax@LookControlComponent@@QEAAXM@Z
     */
    MCAPI void setYMax(float);
    /**
     * @hash   2125301076
     * @symbol ?update@LookControlComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void update(class Mob &);

};