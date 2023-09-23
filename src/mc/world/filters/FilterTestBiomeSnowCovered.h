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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?setup@ActorBoolPropertyTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);

    // vIndex: 2, symbol: ?evaluate@FilterTestBiomeSnowCovered@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 3, symbol: ?finalizeParsedValue@FilterTest@@UEAAXAEAVIWorldRegistriesProvider@@@Z
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);

    // vIndex: 4, symbol:
    // ?getName@FilterTestBiomeSnowCovered@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 5, symbol: ?_serializeDomain@ActorBoolPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeDomain() const;

    // vIndex: 6, symbol: ?_serializeValue@ActorBoolPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // symbol: ??1FilterTestBiomeSnowCovered@@UEAA@XZ
    MCVAPI ~FilterTestBiomeSnowCovered();

    // NOLINTEND
};
