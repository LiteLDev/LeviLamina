#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameCallbacks {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMECALLBACKS
public:
    GameCallbacks& operator=(GameCallbacks const&) = delete;
    GameCallbacks(GameCallbacks const&)            = delete;
    GameCallbacks()                                = delete;
#endif

public:
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
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?onBeforeSimTick\@GameCallbacks\@\@UEAAXXZ
     */
    virtual void onBeforeSimTick();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMECALLBACKS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GameCallbacks();
#endif
};
