#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleFloatFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestBrightness : public ::SimpleFloatFilterTest {
public:
    // prevent constructor by default
    FilterTestBrightness& operator=(FilterTestBrightness const&);
    FilterTestBrightness(FilterTestBrightness const&);
    FilterTestBrightness();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FilterTestBrightness@@UEAA@XZ
    virtual ~FilterTestBrightness();

    // vIndex: 2, symbol: ?evaluate@FilterTestBrightness@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@FilterTestBrightness@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
