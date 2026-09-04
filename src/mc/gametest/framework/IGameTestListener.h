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

    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance);

    virtual void onTestPassed(::gametest::BaseGameTestInstance& testInstance);

    virtual void onTestFailed(::gametest::BaseGameTestInstance& testInstance);

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
    MCNAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& testInstance);

    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance& testInstance);

    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance& testInstance);

#ifdef LL_PLAT_S
    MCNAPI void $onTestStarted(::gametest::BaseGameTestInstance& testInstance);
#else // LL_PLAT_C
    MCNAPI void $onTestStarted(::gametest::BaseGameTestInstance&);
#endif

    MCNAPI void $onTestRetryStarted(::gametest::BaseGameTestInstance&);

    MCNAPI void $onTestRetryFinished(::gametest::BaseGameTestInstance&);


    // NOLINTEND
};

} // namespace gametest
