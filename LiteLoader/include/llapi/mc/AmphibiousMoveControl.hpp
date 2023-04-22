/**
 * @file  AmphibiousMoveControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?tick\@AmphibiousMoveControl\@\@UEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @symbol ??0AmphibiousMoveControl\@\@QEAA\@XZ
     */
    MCAPI AmphibiousMoveControl();

};
