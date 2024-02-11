#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsSprintingTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorIsSprintingTest& operator=(ActorIsSprintingTest const&);
    ActorIsSprintingTest(ActorIsSprintingTest const&);
    ActorIsSprintingTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorIsSprintingTest@@UEAA@XZ
    virtual ~ActorIsSprintingTest() = default;

    // vIndex: 2, symbol: ?evaluate@ActorIsSprintingTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@ActorIsSprintingTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
