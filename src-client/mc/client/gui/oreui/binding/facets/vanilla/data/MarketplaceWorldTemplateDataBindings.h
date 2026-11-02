#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/RatingDataBindings.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/store/StoreCatalogCategory.h"
#include "mc/client/world/MarketplaceWorldTemplateData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
namespace OreUI { class IResourceAllowList; }
namespace SDL { struct ScreenLayoutQuery; }
// clang-format on

namespace OreUI {

struct MarketplaceWorldTemplateDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 328, ::World::MarketplaceWorldTemplateData> mTemplateData;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                 mThumbnailPath;
    ::ll::TypedStorage<8, 40, ::OreUI::RatingDataBindings>            mRatingDataBindings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string const& getCreator() const;

    MCNAPI ::std::string const& getDiscountText() const;

    MCNAPI bool getHasDiscount() const;

    MCNAPI ::std::string const& getId() const;

    MCNAPI bool getIsExpired() const;

    MCNAPI bool getIsFree() const;

    MCNAPI bool getIsInstalled() const;

    MCNAPI bool getIsUpdateAvailable() const;

    MCNAPI ::std::string const& getName() const;

    MCNAPI int getNonDiscountedPrice() const;

    MCNAPI ::std::string const& getPackId() const;

    MCNAPI int getPrice() const;

    MCNAPI ::OreUI::RatingDataBindings const& getRatingDataBinding() const;

    MCNAPI ::StoreCatalogCategory const& getStoreCatalogCategory() const;

    MCNAPI ::OreUI::AllowListPath const& getThumbnailPath() const;

    MCNAPI ~MarketplaceWorldTemplateDataBindings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::OreUI::MarketplaceWorldTemplateDataBindings fromMarketplaceWorldTemplateData(
        ::World::MarketplaceWorldTemplateData const&                      worldTemplateInfo,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList,
        ::std::vector<::std::shared_ptr<::SDL::ScreenLayoutQuery>> const& upsellLayoutList,
        ::Bedrock::NonOwnerPointer<::DateManager> const&                  dateManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
