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
    // vIndex: 0
    virtual ~FilterTestBiomeHasTag();

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 3
    virtual void finalizeParsedValue(class IWorldRegistriesProvider& registries);

    // vIndex: 4
    virtual std::string_view getName() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _evalBiome(class Biome const& b, struct FilterContext const& context) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI bool evaluate$(struct FilterContext const& context) const;

    MCAPI void finalizeParsedValue$(class IWorldRegistriesProvider& registries);

    MCAPI std::string_view getName$() const;

    // NOLINTEND
};
