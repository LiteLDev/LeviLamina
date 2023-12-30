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
    FilterTestBiomeHasTag& operator=(FilterTestBiomeHasTag const&);
    FilterTestBiomeHasTag(FilterTestBiomeHasTag const&);
    FilterTestBiomeHasTag();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FilterTestBiomeHasTag@@UEAA@XZ
    virtual ~FilterTestBiomeHasTag();

    // vIndex: 2, symbol: ?evaluate@FilterTestBiomeHasTag@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 3, symbol: ?finalizeParsedValue@FilterTestBiomeHasTag@@UEAAXAEAVIWorldRegistriesProvider@@@Z
    virtual void finalizeParsedValue(class IWorldRegistriesProvider& registries);

    // vIndex: 4, symbol: ?getName@FilterTestBiomeHasTag@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_evalBiome@FilterTestBiomeHasTag@@AEBA_NAEBVBiome@@AEBUFilterContext@@@Z
    MCAPI bool _evalBiome(class Biome const& b, struct FilterContext const& context) const;

    // NOLINTEND
};
