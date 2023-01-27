/**
 * @file  GameTestInstanceLedger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameTestInstanceLedger.
 *
 */
class GameTestInstanceLedger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTINSTANCELEDGER
public:
    class GameTestInstanceLedger& operator=(class GameTestInstanceLedger const &) = delete;
    GameTestInstanceLedger(class GameTestInstanceLedger const &) = delete;
    GameTestInstanceLedger() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GameTestInstanceLedger();
    /**
     * @hash   554344418
     * @vftbl  1
     * @symbol  ?onTestStructureLoaded\@GameTestInstanceLedger\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance &);
    /**
     * @hash   3035415
     * @symbol  ??0GameTestInstanceLedger\@\@QEAA\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI GameTestInstanceLedger(class LevelStorage &);
    /**
     * @hash   -715643626
     * @symbol  ?clear\@GameTestInstanceLedger\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void clear(class AutomaticID<class Dimension, int>);
    /**
     * @hash   1519669551
     * @symbol  ?getBoundingBoxes\@GameTestInstanceLedger\@\@QEBA?AV?$vector\@VBoundingBox\@\@V?$allocator\@VBoundingBox\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI std::vector<class BoundingBox> getBoundingBoxes(class AutomaticID<class Dimension, int>) const;

//private:

private:
    /**
     * @hash   -1008752915
     * @symbol  ?GAME_TEST_INSTANCE_PREFIX\@GameTestInstanceLedger\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const GAME_TEST_INSTANCE_PREFIX;

};