#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

class ISuggestedContentOffersProvider {
public:
    // ISuggestedContentOffersProvider inner types define
    enum class CollectionType : int {
        StoreItems      = 0,
        RealmsPlusItems = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISuggestedContentOffersProvider() = default;

    virtual ::StoreCatalogItem const&
    getOfferItem(::ISuggestedContentOffersProvider::CollectionType type, int index) const = 0;

    virtual ::StoreCatalogItem& getOfferItem(::ISuggestedContentOffersProvider::CollectionType type, int index) = 0;

    virtual uint64 getNumOfferItems(::ISuggestedContentOffersProvider::CollectionType type) const = 0;

    virtual void setQueries(::std::string const& upsellQueryName, ::std::string const& realmsPlusQueryName) = 0;

    virtual void clearQueries() = 0;

    virtual bool tick() = 0;

    virtual ::std::string getSeeMorePageId(::ISuggestedContentOffersProvider::CollectionType type) const = 0;

    virtual ::std::optional<::std::string> getSuggestedOffersTitle() const = 0;

    virtual bool areSuggestedOffersLoading() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
