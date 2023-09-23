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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?onTestStructureLoaded@GameTestInstanceLedger@@UEAAXAEAVBaseGameTestInstance@gametest@@@Z
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance&);

    // symbol: ?clear@GameTestInstanceLedger@@QEAAXV?$AutomaticID@VDimension@@H@@@Z
    MCAPI void clear(DimensionType);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?GAME_TEST_INSTANCE_PREFIX@GameTestInstanceLedger@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const GAME_TEST_INSTANCE_PREFIX;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $GAME_TEST_INSTANCE_PREFIX() { return GAME_TEST_INSTANCE_PREFIX; }

    // NOLINTEND
};
