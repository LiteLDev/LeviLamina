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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GameCallbacks();
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
     * @symbol  ?onBeforeSimTick\@GameCallbacks\@\@UEAAXXZ
     */
    virtual void onBeforeSimTick();

};