#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

namespace gametest {

class IGameTestListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameTestListener() = default;

    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance& test);

    virtual void onTestPassed(::gametest::BaseGameTestInstance& test);

    virtual void onTestFailed(::gametest::BaseGameTestInstance& test);

    virtual void onTestStarted(::gametest::BaseGameTestInstance&);

    virtual void onTestRetryStarted(::gametest::BaseGameTestInstance&);

    virtual void onTestRetryFinished(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& test);

    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance& test);

    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance& test);

    MCNAPI void $onTestStarted(::gametest::BaseGameTestInstance&);

    MCNAPI void $onTestRetryStarted(::gametest::BaseGameTestInstance&);

    MCNAPI void $onTestRetryFinished(::gametest::BaseGameTestInstance&);


    // NOLINTEND
};

} // namespace gametest
