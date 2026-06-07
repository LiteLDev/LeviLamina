#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/menus/social/CurrentPartyQuery.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class SocialPlayerObject; }
namespace Social { class ProfileSystem; }
namespace Social { struct PlayerProfile; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class CurrentPartyMembersQuery : public ::OreUI::QueryBase<::OreUI::CurrentPartyMembersQuery>,
                                 public ::OreUI::CurrentPartyQuery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mLeaderXuid;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint>>          mMaxMemberCount;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::SocialPlayerObject, ::std::allocator<::OreUI::SocialPlayerObject>>>
        mMembers;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::SocialPlayerObject, ::std::allocator<::OreUI::SocialPlayerObject>>>
                                                                                            mInvitees;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>>                   mProfileSystem;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                              mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>   mResourceAllowList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::PlayerProfile>> mMemberProfiles;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>               mMemberProfileSubscriptions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::PlayerProfile>> mInviteeProfiles;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mInviteeProfileSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentPartyMembersQuery& operator=(CurrentPartyMembersQuery const&);
    CurrentPartyMembersQuery(CurrentPartyMembersQuery const&);
    CurrentPartyMembersQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CurrentPartyMembersQuery(::OreUI::GameDependencies const& game);

    MCAPI void _fetchData();

    MCAPI void _updateInviteeProfiles();

    MCAPI void _updateInvitees();

    MCAPI void _updateMemberProfiles();

    MCAPI void _updateMembers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
