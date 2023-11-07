#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorInactivityTimerTest : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    ActorInactivityTimerTest& operator=(ActorInactivityTimerTest const&);
    ActorInactivityTimerTest(ActorInactivityTimerTest const&);
    ActorInactivityTimerTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ActorInactivityTimerTest() = default;

    // vIndex: 2, symbol: ?evaluate@ActorInactivityTimerTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@ActorInactivityTimerTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
