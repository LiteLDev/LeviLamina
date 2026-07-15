#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/RatingDataBindings.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
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
    // member functions
    // NOLINTBEGIN
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
