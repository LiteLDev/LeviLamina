#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestHourlyClock : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    FilterTestHourlyClock& operator=(FilterTestHourlyClock const&);
    FilterTestHourlyClock(FilterTestHourlyClock const&);
    FilterTestHourlyClock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FilterTestHourlyClock@@UEAA@XZ
    virtual ~FilterTestHourlyClock();

    // vIndex: 1, symbol: ?setup@FilterTestHourlyClock@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2, symbol: ?evaluate@FilterTestHourlyClock@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@FilterTestHourlyClock@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
