#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleFloatFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestMoonPhase : public ::SimpleFloatFilterTest {
public:
    // prevent constructor by default
    FilterTestMoonPhase& operator=(FilterTestMoonPhase const&);
    FilterTestMoonPhase(FilterTestMoonPhase const&);
    FilterTestMoonPhase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FilterTestMoonPhase@@UEAA@XZ
    virtual ~FilterTestMoonPhase();

    // vIndex: 2, symbol: ?evaluate@FilterTestMoonPhase@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@FilterTestMoonPhase@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
