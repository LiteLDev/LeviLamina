#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

namespace gametest {

class IGameTestListener {
public:
    // prevent constructor by default
    IGameTestListener& operator=(IGameTestListener const&);
    IGameTestListener(IGameTestListener const&);
    IGameTestListener();

public:
    // NOLINTBEGIN
    MCVAPI void onTestFailed(class gametest::BaseGameTestInstance&);

    MCVAPI void onTestPassed(class gametest::BaseGameTestInstance&);

    MCVAPI void onTestRetryFinished(class gametest::BaseGameTestInstance&);

    MCVAPI void onTestRetryStarted(class gametest::BaseGameTestInstance&);

    MCVAPI void onTestStarted(class gametest::BaseGameTestInstance&);

    MCVAPI void onTestStructureLoaded(class gametest::BaseGameTestInstance&);

    // NOLINTEND
};

}; // namespace gametest
