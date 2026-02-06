#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct CommonImage;
struct Offer;
struct ProductSku;
namespace catalog { struct ImageResourceManager; }
// clang-format on

class OfferModelBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Offer*>                                            mTheOffer;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mProductId;
    ::ll::TypedStorage<4, 4, uint>                                                mCoinCount;
    ::ll::TypedStorage<4, 4, uint>                                                mBonusCoinCount;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::catalog::ImageResourceManager>> mImageResourceManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OfferModelBase() = default;

    virtual ::std::string const& getProductId() const;

    virtual void setCoinCount(uint);

    virtual uint getCoinCount() const;

    virtual uint getBonusCoinCount() const;

    virtual ::std::string const& getPriceInCurrency() const;

    virtual ::ProductSku getSku() const;

    virtual bool isAvailableForPurchase() const;

    virtual void addKeyArtAndThumbnail(::CommonImage const&);

    virtual ::ResourceLocation const& getKeyArtLocation(int) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
