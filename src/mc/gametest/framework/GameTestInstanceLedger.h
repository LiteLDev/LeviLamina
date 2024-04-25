#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestListener; }
// clang-format on

class GameTestInstanceLedger : public ::gametest::IGameTestListener {
public:
    // prevent constructor by default
    GameTestInstanceLedger& operator=(GameTestInstanceLedger const&);
    GameTestInstanceLedger(GameTestInstanceLedger const&);
    GameTestInstanceLedger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GameTestInstanceLedger@@UEAA@XZ
    virtual ~GameTestInstanceLedger() = default;

    // vIndex: 1, symbol: ?onTestStructureLoaded@GameTestInstanceLedger@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance&);

    // vIndex: 2, symbol: ?onTestPassed@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestPassed(class gametest::BaseGameTestInstance&);

    // vIndex: 3, symbol: ?onTestFailed@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestFailed(class gametest::BaseGameTestInstance&);

    // vIndex: 4, symbol: ?onTestStarted@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 5, symbol: ?onTestRetryStarted@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestRetryStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 6, symbol: ?onTestRetryFinished@IGameTestListener@gametest@@UEAAXAEAVBaseGameTestInstance@2@@Z
    virtual void onTestRetryFinished(class gametest::BaseGameTestInstance&);

    // symbol: ??0GameTestInstanceLedger@@QEAA@AEAVLevelStorage@@@Z
    MCAPI explicit GameTestInstanceLedger(class LevelStorage& storage);

    // symbol: ?clear@GameTestInstanceLedger@@QEAAXV?$AutomaticID@VDimension@@H@@@Z
    MCAPI void clear(DimensionType dimension);

    // symbol:
    // ?getBoundingBoxes@GameTestInstanceLedger@@QEBA?AV?$vector@VBoundingBox@@V?$allocator@VBoundingBox@@@std@@@std@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI std::vector<class BoundingBox> getBoundingBoxes(DimensionType dimension) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?GAME_TEST_INSTANCE_PREFIX@GameTestInstanceLedger@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const GAME_TEST_INSTANCE_PREFIX;

    // NOLINTEND
};
