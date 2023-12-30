#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestBiome : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    FilterTestBiome& operator=(FilterTestBiome const&);
    FilterTestBiome(FilterTestBiome const&);
    FilterTestBiome();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FilterTestBiome@@UEAA@XZ
    virtual ~FilterTestBiome();

    // vIndex: 2, symbol: ?evaluate@FilterTestBiome@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@FilterTestBiome@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
