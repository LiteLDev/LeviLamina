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

#ifdef LL_PLAT_S
    virtual void onTestStarted(::gametest::BaseGameTestInstance& testInstance);
#else // LL_PLAT_C
    virtual void onTestStarted(::gametest::BaseGameTestInstance&);
#endif

    virtual void onTestRetryStarted(::gametest::BaseGameTestInstance&);

    virtual void onTestRetryFinished(::gametest::BaseGameTestInstance&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& test);

    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance& test);

    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance& test);

    MCNAPI void $onTestStarted(::gametest::BaseGameTestInstance& testInstance);

    MCNAPI void $onTestRetryStarted(::gametest::BaseGameTestInstance&);

    MCNAPI void $onTestRetryFinished(::gametest::BaseGameTestInstance&);


    // NOLINTEND
};

} // namespace gametest
