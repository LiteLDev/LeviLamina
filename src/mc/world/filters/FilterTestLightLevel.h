#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestLightLevel : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    FilterTestLightLevel& operator=(FilterTestLightLevel const&);
    FilterTestLightLevel(FilterTestLightLevel const&);
    FilterTestLightLevel();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FilterTestLightLevel@@UEAA@XZ
    virtual ~FilterTestLightLevel() = default;

    // vIndex: 2, symbol: ?evaluate@FilterTestLightLevel@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@FilterTestLightLevel@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
