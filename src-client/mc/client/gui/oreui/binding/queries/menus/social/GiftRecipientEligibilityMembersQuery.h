#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
class MarketplaceServicesManager;
namespace OreUI { class GameDependencies; }
namespace OreUI { class GiftRecipientEligibilityFriendObject; }
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

class GiftRecipientEligibilityMembersQuery : public ::OreUI::QueryBase<::OreUI::GiftRecipientEligibilityMembersQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MarketplaceServicesManager&> mMarketplaceServicesManager;
    ::ll::TypedStorage<8, 8, ::OreUI::IResourceAllowList&>  mResourceAllowList;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<
            ::OreUI::GiftRecipientEligibilityFriendObject,
            ::OreUI::GiftRecipientEligibilityFriendObject>>
        mMembers;
    // NOLINTEND

public:
    // prevent constructor by default
    GiftRecipientEligibilityMembersQuery& operator=(GiftRecipientEligibilityMembersQuery const&);
    GiftRecipientEligibilityMembersQuery(GiftRecipientEligibilityMembersQuery const&);
    GiftRecipientEligibilityMembersQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GiftRecipientEligibilityMembersQuery(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
