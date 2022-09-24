/**
 * @file  ShooterComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShooterComponent.
 *
 */
class ShooterComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTERCOMPONENT
public:
    class ShooterComponent& operator=(class ShooterComponent const &) = delete;
    ShooterComponent(class ShooterComponent const &) = delete;
#endif

public:
    /**
     * @hash   -583848051
     * @symbol ??0ShooterComponent@@QEAA@XZ
     */
    MCAPI ShooterComponent();
    /**
     * @hash   1260334136
     * @symbol ?getAuxValue@ShooterComponent@@QEAAHXZ
     */
    MCAPI int getAuxValue();
    /**
     * @hash   -786589972
     * @symbol ?onShoot@ShooterComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void onShoot(class Actor &);
    /**
     * @hash   924698171
     * @symbol ??1ShooterComponent@@QEAA@XZ
     */
    MCAPI ~ShooterComponent();

};