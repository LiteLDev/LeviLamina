#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestBiomeSnowCovered : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    FilterTestBiomeSnowCovered& operator=(FilterTestBiomeSnowCovered const&);
    FilterTestBiomeSnowCovered(FilterTestBiomeSnowCovered const&);
    FilterTestBiomeSnowCovered();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FilterTestBiomeSnowCovered@@UEAA@XZ
    virtual ~FilterTestBiomeSnowCovered();

    // vIndex: 2, symbol: ?evaluate@FilterTestBiomeSnowCovered@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol:
    // ?getName@FilterTestBiomeSnowCovered@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
