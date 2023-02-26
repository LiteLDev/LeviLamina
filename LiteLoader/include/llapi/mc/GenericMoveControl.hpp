/**
 * @file  GenericMoveControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GenericMoveControl.
 *
 */
class GenericMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENERICMOVECONTROL
public:
    class GenericMoveControl& operator=(class GenericMoveControl const &) = delete;
    GenericMoveControl(class GenericMoveControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GenericMoveControl();
    /**
     * @vftbl  1
     * @symbol  ?initializeInternal\@GenericMoveControl\@\@UEAAXAEAVMob\@\@PEAUMoveControlDescription\@\@\@Z
     */
    virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /**
     * @vftbl  2
     * @symbol  ?tick\@GenericMoveControl\@\@MEAAXAEAVMoveControlComponent\@\@AEAVMob\@\@\@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
    /**
     * @symbol  ??0GenericMoveControl\@\@QEAA\@XZ
     */
    MCAPI GenericMoveControl();

};