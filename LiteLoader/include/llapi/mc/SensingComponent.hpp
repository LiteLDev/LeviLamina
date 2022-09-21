/**
 * @file  MC/SensingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SensingComponent.
 *
 */
class SensingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENSINGCOMPONENT
public:
    class SensingComponent& operator=(class SensingComponent const &) = delete;
    SensingComponent(class SensingComponent const &) = delete;
    SensingComponent() = delete;
#endif

public:
    /**
     * @hash   843938202
     * @symbol ?canSee@SensingComponent@@QEAA_NAEAVMob@@AEBVActor@@@Z
     */
    MCAPI bool canSee(class Mob &, class Actor const &);
    /**
     * @hash   -1174008797
     * @symbol ?reset@SensingComponent@@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   -1564959947
     * @symbol ?withinFOV@SensingComponent@@QEAA_NAEAVMob@@AEBVVec3@@M@Z
     */
    MCAPI bool withinFOV(class Mob &, class Vec3 const &, float);

};