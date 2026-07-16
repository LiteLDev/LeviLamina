#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/SimpleTagIDFilterTest.h"

// auto generated forward declare list
// clang-format off
class IWorldRegistriesProvider;
struct FilterContext;
// clang-format on

class FilterTestBiomeHasTag : public ::SimpleTagIDFilterTest {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool evaluate(::FilterContext const&) const /*override*/;

    virtual void finalizeParsedValue(::IWorldRegistriesProvider&) /*override*/;

    virtual ::std::string_view getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
