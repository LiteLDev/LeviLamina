#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestDimensionWeather : public ::FilterTest {
public:
    // prevent constructor by default
    FilterTestDimensionWeather& operator=(FilterTestDimensionWeather const&);
    FilterTestDimensionWeather(FilterTestDimensionWeather const&);
    FilterTestDimensionWeather();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FilterTestDimensionWeather@@UEAA@XZ
    virtual ~FilterTestDimensionWeather() = default;

    // vIndex: 1, symbol: ?setup@FilterTestDimensionWeather@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2, symbol: ?evaluate@FilterTestDimensionWeather@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol:
    // ?getName@FilterTestDimensionWeather@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 6, symbol: ?_serializeValue@FilterTestDimensionWeather@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND
};
