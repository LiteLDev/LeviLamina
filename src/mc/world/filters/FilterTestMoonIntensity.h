#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleFloatFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestMoonIntensity : public ::SimpleFloatFilterTest {
public:
    // prevent constructor by default
    FilterTestMoonIntensity& operator=(FilterTestMoonIntensity const&);
    FilterTestMoonIntensity(FilterTestMoonIntensity const&);
    FilterTestMoonIntensity();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FilterTestMoonIntensity@@UEAA@XZ
    virtual ~FilterTestMoonIntensity();

    // vIndex: 2, symbol: ?evaluate@FilterTestMoonIntensity@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@FilterTestMoonIntensity@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
