#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/SeeMoreRouteData.h"

// auto generated forward declare list
// clang-format off
class SuggestedContentOffersProvider;
// clang-format on

namespace OreUI {

class MarketplaceSuggestionsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::MarketplaceSuggestionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SuggestedContentOffersProvider>> mOffersProvider;
    ::ll::TypedStorage<8, 72, ::std::optional<::OreUI::SeeMoreRouteData>>          mSeeMoreRouteData;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceSuggestionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MarketplaceSuggestionsFacet(::std::shared_ptr<::SuggestedContentOffersProvider> offersProvider);

    MCNAPI ::std::optional<::OreUI::SeeMoreRouteData> const& getSeeMoreRouteData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::SuggestedContentOffersProvider> offersProvider);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
