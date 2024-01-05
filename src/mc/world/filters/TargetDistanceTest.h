#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleFloatFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TargetDistanceTest : public ::SimpleFloatFilterTest {
public:
    // prevent constructor by default
    TargetDistanceTest& operator=(TargetDistanceTest const&);
    TargetDistanceTest(TargetDistanceTest const&);
    TargetDistanceTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TargetDistanceTest@@UEAA@XZ
    virtual ~TargetDistanceTest() = default;

    // vIndex: 2, symbol: ?evaluate@TargetDistanceTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@TargetDistanceTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
