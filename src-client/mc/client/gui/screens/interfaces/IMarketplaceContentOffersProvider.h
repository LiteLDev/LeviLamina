#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

class IMarketplaceContentOffersProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMarketplaceContentOffersProvider() = default;

    virtual ::StoreCatalogItem const& getOfferItem(int index) const = 0;

    virtual ::StoreCatalogItem& getOfferItem(int index) = 0;

    virtual uint64 getNumOfferItems() const = 0;

    virtual void setQuery(::std::string const& upsellQueryName) = 0;

    virtual void clearQuery() = 0;

    virtual bool tick() = 0;

    virtual ::std::string getSeeMorePageId() const = 0;

    virtual ::std::optional<::std::string> getSuggestedOffersTitle() const = 0;

    virtual bool areSuggestedOffersLoaded() const = 0;

    virtual ::std::function<bool(::StoreCatalogItem const&)> _getFilterFunction() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
