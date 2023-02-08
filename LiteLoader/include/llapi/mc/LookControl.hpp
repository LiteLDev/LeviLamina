/**
 * @file  LookControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookControl.
 *
 */
class LookControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKCONTROL
public:
    class LookControl& operator=(class LookControl const &) = delete;
    LookControl(class LookControl const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LookControl();
    /**
     * @hash   -836297834
     * @vftbl  1
     * @symbol  ?initializeInternal\@LookControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void initializeInternal(class Mob &);
    /**
     * @hash   -2085148874
     * @vftbl  2
     * @symbol  ?tick\@LookControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void tick(class Mob &);
    /**
     * @hash   -1253409110
     * @symbol  ??0LookControl\@\@QEAA\@XZ
     */
    MCAPI LookControl();

};