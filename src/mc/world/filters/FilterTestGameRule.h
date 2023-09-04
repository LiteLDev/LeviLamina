#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestGameRule : public ::FilterTest {
public:
    // prevent constructor by default
    FilterTestGameRule& operator=(FilterTestGameRule const&) = delete;
    FilterTestGameRule(FilterTestGameRule const&)            = delete;
    FilterTestGameRule()                                     = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?setup@FilterTestGameRule@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);

    // vIndex: 2, symbol: ?evaluate@FilterTestGameRule@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@FilterTestGameRule@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 6, symbol: ?_serializeValue@FilterTestGameRule@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // symbol: ??1FilterTestGameRule@@UEAA@XZ
    MCVAPI ~FilterTestGameRule();

    // NOLINTEND
};
