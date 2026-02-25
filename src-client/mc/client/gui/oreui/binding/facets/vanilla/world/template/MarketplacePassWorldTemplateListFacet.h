#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/SeeMoreRouteData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
struct MarketplaceServicesManager;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct MarketplaceWorldTemplateDataBindings; }
namespace World { class MarketplacePassWorldTemplateManager; }
// clang-format on

namespace OreUI {

class MarketplacePassWorldTemplateListFacet
: public ::OreUI::FacetBase<::OreUI::MarketplacePassWorldTemplateListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::MarketplacePassWorldTemplateManager&> mMarketplacePassWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::MarketplaceServicesManager&>                 mMarketplaceServicesManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager>> mDateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MarketplaceWorldTemplateDataBindings>>
                                                                          mMarketplacePassWorldTemplates;
    ::ll::TypedStorage<8, 72, ::std::optional<::OreUI::SeeMoreRouteData>> mSeeMoreRouteData;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MarketplaceWorldTemplateDataBindings>>
                                                                           mPrevMarketplacePassWorldTemplates;
    ::ll::TypedStorage<8, 72, ::std::optional<::OreUI::SeeMoreRouteData>>  mPrevSeeMoreRouteData;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>> mRefreshTask;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplacePassWorldTemplateListFacet& operator=(MarketplacePassWorldTemplateListFacet const&);
    MarketplacePassWorldTemplateListFacet(MarketplacePassWorldTemplateListFacet const&);
    MarketplacePassWorldTemplateListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~MarketplacePassWorldTemplateListFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MarketplacePassWorldTemplateListFacet(
        ::World::MarketplacePassWorldTemplateManager&              marketplacePassWorldTemplateManager,
        ::MarketplaceServicesManager&                              marketplaceServicesManager,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>               dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::std::vector<::OreUI::MarketplaceWorldTemplateDataBindings> _getMarketplacePassWorldTemplates() const;

    MCAPI ::OreUI::SeeMoreRouteData _getSeeMoreRouteData() const;

    MCAPI void _initWorldTemplates();

    MCAPI bool _tryReadWorldTemplates();

    MCAPI void clearRefreshTaskState();

    MCFOLD ::std::vector<::OreUI::MarketplaceWorldTemplateDataBindings> const& getMarketplacePassWorldTemplates() const;

    MCAPI ::OreUI::FacetTaskState getRefreshTaskState() const;

    MCFOLD ::std::optional<::OreUI::SeeMoreRouteData> const& getSeeMoreRouteData() const;

    MCAPI void refreshOffers();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::World::MarketplacePassWorldTemplateManager&              marketplacePassWorldTemplateManager,
        ::MarketplaceServicesManager&                              marketplaceServicesManager,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>               dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
