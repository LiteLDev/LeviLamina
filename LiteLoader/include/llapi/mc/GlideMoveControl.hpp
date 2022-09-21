/**
 * @file  MC/GlideMoveControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GlideMoveControl.
 *
 */
class GlideMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDEMOVECONTROL
public:
    class GlideMoveControl& operator=(class GlideMoveControl const &) = delete;
    GlideMoveControl(class GlideMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~GlideMoveControl();
    /**
     * @hash   1414407710
     * @vftbl  1
     * @symbol ?initializeInternal@GlideMoveControl@@UEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
     */
    virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /**
     * @hash   -666562833
     * @vftbl  2
     * @symbol ?tick@GlideMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @hash   1873048451
     * @symbol ??0GlideMoveControl@@QEAA@XZ
     */
    MCAPI GlideMoveControl();

};