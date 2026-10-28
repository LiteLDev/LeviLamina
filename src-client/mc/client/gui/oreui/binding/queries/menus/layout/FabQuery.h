#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/FetchStatus.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/services/Discriminated.h"

// auto generated forward declare list
// clang-format off
class ILocalHydratingLayoutServiceCache;
namespace Bedrock::Services::layout::model { struct ClientDrivenMarketplaceBannerFab; }
namespace Bedrock::Services::layout::model { struct ClientDrivenRealmsUpsellBannerFab; }
namespace Bedrock::Services::layout::model { struct ClientDrivenRecentlyPlayedFab; }
namespace Bedrock::Services::layout::model { struct ExperienceFab; }
namespace Bedrock::Services::layout::model { struct ExperienceListFab; }
namespace Bedrock::Services::layout::model { struct ExperiencePdpFab; }
namespace Bedrock::Services::layout::model { struct FabBase; }
namespace Bedrock::Services::layout::model { struct LanWorldListFab; }
namespace Bedrock::Services::layout::model { struct SimpleAnnouncementFab; }
namespace Bedrock::Services::layout::model { struct SimpleCalloutBannerFab; }
namespace Bedrock::Services::layout::model { struct StandardMarketplaceItemListFab; }
namespace Bedrock::Services::layout::model { struct StandardMarketplaceSearchBarFab; }
namespace Bedrock::Services::layout::model { struct TileListFab; }
namespace OreUI { class FabObject; }
// clang-format on

namespace OreUI {

class FabQuery : public ::OreUI::QueryBase<::OreUI::FabQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::FetchStatus, ::OreUI::FetchStatus>> mFetchStatus;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::FabObject>>                           mFab;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ILocalHydratingLayoutServiceCache>>
                                                                       mLocalHydratingLayoutServiceCache;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                            mTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::SharedAsync<void>> mFetchTask;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mRefreshSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    FabQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FabQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FabQuery(
        ::Bedrock::NotNullNonOwnerPtr<::ILocalHydratingLayoutServiceCache> localHydratingLayoutServiceCache,
        ::std::string const&                                               fabId
    );

    MCAPI void _continueFab(::std::string const& fabId, ::std::string const& continuationToken);

    MCAPI void _fetchFab(::std::string const& fabId);

    MCAPI void _publishFab(
        ::std::variant<::std::variant<
            ::Bedrock::Services::Discriminated<::Bedrock::Services::layout::model::FabBase, 0>,
            ::Bedrock::Services::Discriminated<::Bedrock::Services::layout::model::ExperienceFab, 1>,
            ::Bedrock::Services::Discriminated<::Bedrock::Services::layout::model::ExperienceListFab, 2>,
            ::Bedrock::Services::Discriminated<::Bedrock::Services::layout::model::ClientDrivenRecentlyPlayedFab, 3>,
            ::Bedrock::Services::Discriminated<::Bedrock::Services::layout::model::SimpleCalloutBannerFab, 4>,
            ::Bedrock::Services::Discriminated<::Bedrock::Services::layout::model::LanWorldListFab, 5>,
            ::Bedrock::Services::Discriminated<::Bedrock::Services::layout::model::TileListFab, 6>,
            ::Bedrock::Services::Discriminated<::Bedrock::Services::layout::model::ClientDrivenMarketplaceBannerFab, 7>,
            ::Bedrock::Services::Discriminated<::Bedrock::Services::layout::model::ExperiencePdpFab, 8>,
            ::Bedrock::Services::Discriminated<::Bedrock::Services::layout::model::SimpleAnnouncementFab, 9>,
            ::Bedrock::Services::
                Discriminated<::Bedrock::Services::layout::model::ClientDrivenRealmsUpsellBannerFab, 10>,
            ::Bedrock::Services::Discriminated<::Bedrock::Services::layout::model::StandardMarketplaceItemListFab, 11>,
            ::Bedrock::Services::
                Discriminated<::Bedrock::Services::layout::model::StandardMarketplaceSearchBarFab, 12>>> const& fab
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ILocalHydratingLayoutServiceCache> localHydratingLayoutServiceCache,
        ::std::string const&                                               fabId
    );
    // NOLINTEND
};

} // namespace OreUI
