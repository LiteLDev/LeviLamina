#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IsTakingFireDamageTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    IsTakingFireDamageTest& operator=(IsTakingFireDamageTest const&);
    IsTakingFireDamageTest(IsTakingFireDamageTest const&);
    IsTakingFireDamageTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IsTakingFireDamageTest@@UEAA@XZ
    virtual ~IsTakingFireDamageTest() = default;

    // vIndex: 2, symbol: ?evaluate@IsTakingFireDamageTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@IsTakingFireDamageTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
