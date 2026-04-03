#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/party/parties/PartyPrivacy.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptions;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct SocialPlayer; }
namespace Parties { class IPartyProvider; }
namespace Parties { class Party; }
namespace Parties { class PartyTravelManager; }
namespace Social { class ProfileSystem; }
namespace Social { struct PlayerProfile; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class CurrentPartyFacet : public ::OreUI::FacetBase<::OreUI::CurrentPartyFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                mMainMenuDestinationName;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsDirty;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::PlayerProfile>> mMemberProfiles;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>               mMemberProfileSubscriptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                         mMembers;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                         mPrevMembers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::PlayerProfile>> mInviteeProfiles;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>             mInviteeProfileSubscriptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                       mInvitees;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                       mPrevInvitees;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>>                 mProfileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mPartySubscription;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>>      mPartyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartyTravelManager>>  mPartyTravelManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mUserAtDestinationSubscription;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&> mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 8, ::IOptions&>                      mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLanguageSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentPartyFacet& operator=(CurrentPartyFacet const&);
    CurrentPartyFacet(CurrentPartyFacet const&);
    CurrentPartyFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CurrentPartyFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CurrentPartyFacet(
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>             partyProvider,
        ::Bedrock::NonOwnerPointer<::Parties::PartyTravelManager>         partyTravelManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList,
        ::std::shared_ptr<::Social::ProfileSystem>                        profileSystem,
        ::IOptions&                                                       options,
        ::World::WorldPlayerListTracker&                                  worldPlayerListTracker
    );

    MCAPI ::std::shared_ptr<::Parties::Party> _getParty() const;

    MCAPI void _updateInviteeProfiles();

    MCAPI void _updateInvitees();

    MCAPI void _updateMainMenuName();

    MCAPI void _updateMemberProfiles();

    MCAPI void _updateMembers();

    MCAPI ::std::string const& getDestinationName() const;

    MCAPI bool getIsInParty() const;

    MCAPI ::std::string const& getLeaderXuid() const;

    MCAPI int const getMaxMemberCount() const;

    MCFOLD ::std::vector<::OreUI::SocialPlayer> const& getMembers() const;

    MCAPI ::std::string const& getPartyId() const;

    MCFOLD ::std::vector<::OreUI::SocialPlayer> const& getPendingInvitees() const;

    MCAPI ::Parties::PartyPrivacy getPrivacy() const;

    MCAPI bool getRestrictInvitesToLeader() const;

    MCAPI bool getShouldShowJoinDestination() const;
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
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>             partyProvider,
        ::Bedrock::NonOwnerPointer<::Parties::PartyTravelManager>         partyTravelManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList,
        ::std::shared_ptr<::Social::ProfileSystem>                        profileSystem,
        ::IOptions&                                                       options,
        ::World::WorldPlayerListTracker&                                  worldPlayerListTracker
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
