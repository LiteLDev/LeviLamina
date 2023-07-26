#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class GameTestInstanceLedger {

public:
    // prevent constructor by default
    GameTestInstanceLedger& operator=(GameTestInstanceLedger const&) = delete;
    GameTestInstanceLedger(GameTestInstanceLedger const&)            = delete;
    GameTestInstanceLedger()                                         = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?onTestStructureLoaded\@GameTestInstanceLedger\@\@UEAAXAEAVBaseGameTestInstance\@gametest\@\@\@Z
     */
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance&); // NOLINT
    /**
     * @symbol ??0GameTestInstanceLedger\@\@QEAA\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI GameTestInstanceLedger(class LevelStorage&); // NOLINT
    /**
     * @symbol ?clear\@GameTestInstanceLedger\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void clear(class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol
     * ?getBoundingBoxes\@GameTestInstanceLedger\@\@QEBA?AV?$vector\@VBoundingBox\@\@V?$allocator\@VBoundingBox\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI std::vector<class BoundingBox> getBoundingBoxes(class AutomaticID<class Dimension, int>) const; // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?GAME_TEST_INSTANCE_PREFIX\@GameTestInstanceLedger\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const GAME_TEST_INSTANCE_PREFIX; // NOLINT
};
