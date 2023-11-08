#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasNameTagTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorHasNameTagTest& operator=(ActorHasNameTagTest const&);
    ActorHasNameTagTest(ActorHasNameTagTest const&);
    ActorHasNameTagTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorHasNameTagTest@@UEAA@XZ
    virtual ~ActorHasNameTagTest() = default;

    // vIndex: 2, symbol: ?evaluate@ActorHasNameTagTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@ActorHasNameTagTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
