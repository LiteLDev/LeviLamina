#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsClimbingTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorIsClimbingTest& operator=(ActorIsClimbingTest const&);
    ActorIsClimbingTest(ActorIsClimbingTest const&);
    ActorIsClimbingTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorIsClimbingTest@@UEAA@XZ
    virtual ~ActorIsClimbingTest();

    // vIndex: 2, symbol: ?evaluate@ActorIsClimbingTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@ActorIsClimbingTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
