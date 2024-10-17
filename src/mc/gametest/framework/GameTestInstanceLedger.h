#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/gametest/framework/IGameTestListener.h"

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
    // vIndex: 0
    virtual ~GameTestInstanceLedger() = default;

    // vIndex: 1
    virtual void onTestStructureLoaded(class gametest::BaseGameTestInstance& testInstance);

    // vIndex: 2
    virtual void onTestPassed(class gametest::BaseGameTestInstance&);

    // vIndex: 3
    virtual void onTestFailed(class gametest::BaseGameTestInstance&);

    // vIndex: 4
    virtual void onTestStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 5
    virtual void onTestRetryStarted(class gametest::BaseGameTestInstance&);

    // vIndex: 6
    virtual void onTestRetryFinished(class gametest::BaseGameTestInstance&);

    MCAPI void clear(DimensionType dimension);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void onTestFailed$(class gametest::BaseGameTestInstance&);

    MCAPI void onTestPassed$(class gametest::BaseGameTestInstance&);

    MCAPI void onTestRetryFinished$(class gametest::BaseGameTestInstance&);

    MCAPI void onTestRetryStarted$(class gametest::BaseGameTestInstance&);

    MCAPI void onTestStarted$(class gametest::BaseGameTestInstance&);

    MCAPI void onTestStructureLoaded$(class gametest::BaseGameTestInstance& testInstance);

    MCAPI static std::string const& GAME_TEST_INSTANCE_PREFIX();

    // NOLINTEND
};
