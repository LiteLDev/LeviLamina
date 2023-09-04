#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleTagIDFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestBiomeHasTag : public ::SimpleTagIDFilterTest {
public:
    // prevent constructor by default
    FilterTestBiomeHasTag& operator=(FilterTestBiomeHasTag const&) = delete;
    FilterTestBiomeHasTag(FilterTestBiomeHasTag const&)            = delete;
    FilterTestBiomeHasTag()                                        = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?setup@ActorHasEquipmentTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);

    // vIndex: 2, symbol: ?evaluate@FilterTestBiomeHasTag@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 3, symbol: ?finalizeParsedValue@FilterTestBiomeHasTag@@UEAAXAEAVIWorldRegistriesProvider@@@Z
    virtual void finalizeParsedValue(class IWorldRegistriesProvider&);

    // vIndex: 4, symbol: ?getName@FilterTestBiomeHasTag@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 5, symbol: ?_serializeDomain@ActorHasEquipmentTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeDomain() const;

    // vIndex: 6, symbol: ?_serializeValue@ActorBoolPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // symbol: ??1FilterTestBiomeHasTag@@UEAA@XZ
    MCVAPI ~FilterTestBiomeHasTag();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_evalBiome@FilterTestBiomeHasTag@@AEBA_NAEBVBiome@@AEBUFilterContext@@@Z
    MCAPI bool _evalBiome(class Biome const&, struct FilterContext const&) const;

    // NOLINTEND
};
