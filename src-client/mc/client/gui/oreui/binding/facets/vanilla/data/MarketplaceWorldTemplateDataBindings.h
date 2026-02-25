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
    ::ll::TypedStorage<8, 280, ::World::MarketplaceWorldTemplateData> mTemplateData;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                 mThumbnailPath;
    ::ll::TypedStorage<8, 40, ::OreUI::RatingDataBindings>            mRatingDataBindings;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceWorldTemplateDataBindings& operator=(MarketplaceWorldTemplateDataBindings const&);
    MarketplaceWorldTemplateDataBindings(MarketplaceWorldTemplateDataBindings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MarketplaceWorldTemplateDataBindings();

    MCAPI MarketplaceWorldTemplateDataBindings(::OreUI::MarketplaceWorldTemplateDataBindings&&);

    MCFOLD ::std::string const& getCreator() const;

    MCFOLD ::std::string const& getId() const;

    MCFOLD bool getIsExpired() const;

    MCAPI bool getIsInstalled() const;

    MCAPI bool getIsUpdateAvailable() const;

    MCFOLD ::std::string const& getName() const;

    MCFOLD ::std::string const& getPackId() const;

    MCFOLD ::OreUI::RatingDataBindings const& getRatingDataBinding() const;

    MCAPI ::StoreCatalogCategory const& getStoreCatalogCategory() const;

    MCFOLD ::OreUI::AllowListPath const& getThumbnailPath() const;

    MCAPI bool isOfferInSubscription(::Bedrock::NotNullNonOwnerPtr<::DateManager> const& dateManager) const;

    MCAPI ~MarketplaceWorldTemplateDataBindings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OreUI::MarketplaceWorldTemplateDataBindings fromMarketplaceWorldTemplateData(
        ::World::MarketplaceWorldTemplateData const&                      worldTemplateInfo,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList,
        ::std::vector<::std::shared_ptr<::SDL::ScreenLayoutQuery>> const& upsellLayoutList,
        ::Bedrock::NonOwnerPointer<::DateManager> const&                  dateManager
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::OreUI::MarketplaceWorldTemplateDataBindings&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
