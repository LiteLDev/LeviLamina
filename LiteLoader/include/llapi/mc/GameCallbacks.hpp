/**
 * @file  GameCallbacks.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameCallbacks.
 *
 */
class GameCallbacks {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMECALLBACKS
public:
    class GameCallbacks& operator=(class GameCallbacks const &) = delete;
    GameCallbacks(class GameCallbacks const &) = delete;
    GameCallbacks() = delete;
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
