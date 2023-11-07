#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class IGameTestListener; }
// clang-format on

namespace gametest {

class MultipleTestTracker {
public:
    // prevent constructor by default
    MultipleTestTracker& operator=(MultipleTestTracker const&);
    MultipleTestTracker(MultipleTestTracker const&);
    MultipleTestTracker();

public:
    // NOLINTBEGIN
    // symbol: ?addListener@MultipleTestTracker@gametest@@QEAAXV?$shared_ptr@VIGameTestListener@gametest@@@std@@@Z
    MCAPI void addListener(std::shared_ptr<class gametest::IGameTestListener>);

    // symbol: ?isDone@MultipleTestTracker@gametest@@QEBA_NXZ
    MCAPI bool isDone() const;

    // symbol: ?removeListener@MultipleTestTracker@gametest@@QEAAXV?$shared_ptr@VIGameTestListener@gametest@@@std@@@Z
    MCAPI void removeListener(std::shared_ptr<class gametest::IGameTestListener>);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?sFailedOptionalTest@MultipleTestTracker@gametest@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sFailedOptionalTest;

    // symbol:
    // ?sFailedRequiredTest@MultipleTestTracker@gametest@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sFailedRequiredTest;

    // symbol:
    // ?sNotStartedTest@MultipleTestTracker@gametest@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sNotStartedTest;

    // symbol:
    // ?sOnGoingTest@MultipleTestTracker@gametest@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sOnGoingTest;

    // symbol:
    // ?sSuccessfulTest@MultipleTestTracker@gametest@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sSuccessfulTest;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $sFailedOptionalTest() { return sFailedOptionalTest; }

    static auto& $sFailedRequiredTest() { return sFailedRequiredTest; }

    static auto& $sNotStartedTest() { return sNotStartedTest; }

    static auto& $sOnGoingTest() { return sOnGoingTest; }

    static auto& $sSuccessfulTest() { return sSuccessfulTest; }

    // NOLINTEND
};

}; // namespace gametest
