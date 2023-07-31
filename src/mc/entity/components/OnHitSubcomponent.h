#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnHitSubcomponent {

public:
    // prevent constructor by default
    OnHitSubcomponent& operator=(OnHitSubcomponent const&) = delete;
    OnHitSubcomponent(OnHitSubcomponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2() = 0;
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?getName\@OnHitSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const* getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONHITSUBCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OnHitSubcomponent();
#endif
    /**
     * @symbol ??0OnHitSubcomponent\@\@QEAA\@XZ
     */
    MCAPI OnHitSubcomponent();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_canAttack\@OnHitSubcomponent\@\@IEBA_NPEAVActor\@\@0\@Z
     */
    MCAPI bool _canAttack(class Actor*, class Actor*) const;
    // NOLINTEND
};
