#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IsHoldingSilkTouchTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    IsHoldingSilkTouchTest& operator=(IsHoldingSilkTouchTest const&);
    IsHoldingSilkTouchTest(IsHoldingSilkTouchTest const&);
    IsHoldingSilkTouchTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IsHoldingSilkTouchTest@@UEAA@XZ
    virtual ~IsHoldingSilkTouchTest() = default;

    // vIndex: 2, symbol: ?evaluate@IsHoldingSilkTouchTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@IsHoldingSilkTouchTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
