/**
 * @file  MC/AmphibiousMoveControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "GenericMoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AmphibiousMoveControl.
 *
 */
class AmphibiousMoveControl : public GenericMoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMPHIBIOUSMOVECONTROL
public:
    class AmphibiousMoveControl& operator=(class AmphibiousMoveControl const &) = delete;
    AmphibiousMoveControl(class AmphibiousMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AmphibiousMoveControl();
    /**
     * @hash   1625990210
     * @vftbl  2
     * @symbol ?tick@AmphibiousMoveControl@@UEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @hash   1422564711
     * @symbol ??0AmphibiousMoveControl@@QEAA@XZ
     */
    MCAPI AmphibiousMoveControl();

};