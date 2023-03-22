/**
 * @file  GameTestLevelListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameTestLevelListener.
 *
 */
class GameTestLevelListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTLEVELLISTENER
public:
    class GameTestLevelListener& operator=(class GameTestLevelListener const &) = delete;
    GameTestLevelListener(class GameTestLevelListener const &) = delete;
    GameTestLevelListener() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol ?onLevelTickEnd\@GameTestLevelListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    virtual enum class EventResult onLevelTickEnd(class Level &);
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol ?onEvent\@GameTestLevelListener\@\@UEAA?AW4EventResult\@\@AEBULevelNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct LevelNotificationEvent const &);
    /**
     * @symbol ??0GameTestLevelListener\@\@QEAA\@AEAVGameTestTicker\@gametest\@\@\@Z
     */
    MCAPI GameTestLevelListener(class gametest::GameTestTicker &);

};
