/**
 * @file  OnHitSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnHitSubcomponent.
 *
 */
class OnHitSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONHITSUBCOMPONENT
public:
    class OnHitSubcomponent& operator=(class OnHitSubcomponent const &) = delete;
    OnHitSubcomponent(class OnHitSubcomponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OnHitSubcomponent();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2() = 0;
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3() = 0;
    /**
     * @vftbl  4
     * @symbol  ?getName\@OnHitSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();
    /**
     * @symbol  ??0OnHitSubcomponent\@\@QEAA\@XZ
     */
    MCAPI OnHitSubcomponent();

//protected:
    /**
     * @symbol  ?_canAttack\@OnHitSubcomponent\@\@IEBA_NPEAVActor\@\@0\@Z
     */
    MCAPI bool _canAttack(class Actor *, class Actor *) const;

protected:

};