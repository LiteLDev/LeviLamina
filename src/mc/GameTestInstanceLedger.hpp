/**
 * @file  GameTestInstanceLedger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @vftbl  1
     * @symbol  ?onTestStructureLoaded\@GameTestInstanceLedger\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance &);
    /**
     * @symbol  ??0GameTestInstanceLedger\@\@QEAA\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI GameTestInstanceLedger(class LevelStorage &);
    /**
     * @symbol  ?clear\@GameTestInstanceLedger\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void clear(class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ?getBoundingBoxes\@GameTestInstanceLedger\@\@QEBA?AV?$vector\@VBoundingBox\@\@V?$allocator\@VBoundingBox\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI std::vector<class BoundingBox> getBoundingBoxes(class AutomaticID<class Dimension, int>) const;

//private:

private:
    /**
     * @symbol  ?GAME_TEST_INSTANCE_PREFIX\@GameTestInstanceLedger\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const GAME_TEST_INSTANCE_PREFIX;

};