#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsPanickingTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorIsPanickingTest& operator=(ActorIsPanickingTest const&);
    ActorIsPanickingTest(ActorIsPanickingTest const&);
    ActorIsPanickingTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorIsPanickingTest@@UEAA@XZ
    virtual ~ActorIsPanickingTest() = default;

    // vIndex: 2, symbol: ?evaluate@ActorIsPanickingTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@ActorIsPanickingTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
