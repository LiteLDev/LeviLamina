#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/queries/menus/social/PartyReceivedInviteObject.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace Parties { class IPartyProvider; }
namespace Social { class InviteManager; }
namespace Social { class ProfileSystem; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class SocialInvitesQuery : public ::OreUI::QueryBase<::OreUI::SocialInvitesQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 5064, ::std::optional<::std::variant<::OreUI::PartyReceivedInviteObject>>> mTopInviteProperty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::InviteManager>>                            mInviteManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mTopInviteChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mInviterProfileSubscription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>>                 mProfileSystem;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                            mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>>      mPartyProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialInvitesQuery& operator=(SocialInvitesQuery const&);
    SocialInvitesQuery(SocialInvitesQuery const&);
    SocialInvitesQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SocialInvitesQuery(::OreUI::GameDependencies const& game);

    MCAPI void _fetchData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
