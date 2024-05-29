#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsSittingTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorIsSittingTest& operator=(ActorIsSittingTest const&);
    ActorIsSittingTest(ActorIsSittingTest const&);
    ActorIsSittingTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorIsSittingTest@@UEAA@XZ
    virtual ~ActorIsSittingTest() = default;

    // vIndex: 2, symbol: ?evaluate@ActorIsSittingTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@ActorIsSittingTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
