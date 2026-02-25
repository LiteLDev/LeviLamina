#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/party/parties/PartyPrivacy.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct SocialPlayer; }
namespace Parties { struct IPartyProvider; }
namespace Parties { struct Party; }
namespace Social { struct PlayerProfile; }
namespace Social { struct ProfileSystem; }
// clang-format on

namespace OreUI {

class CurrentPartyFacet : public ::OreUI::FacetBase<::OreUI::CurrentPartyFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                          mIsDirty;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::PlayerProfile>> mMemberProfiles;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>               mMemberProfileSubscriptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                         mMembers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::PlayerProfile>> mInviteeProfiles;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>             mInviteeProfileSubscriptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                       mInvitees;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>>                 mProfileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mPartySubscription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Parties::Party>>                        mParty;
    // NOLINTEND

public:
    // prevent constructor by default
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
        ::std::optional<::Bedrock::NotNullNonOwnerPtr<::Parties::IPartyProvider>> partyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const&         resourceAllowList,
        ::std::shared_ptr<::Social::ProfileSystem>                                profileSystem
    );

    MCAPI void _updateInviteeProfiles();

    MCAPI void _updateInvitees();

    MCAPI void _updateMemberProfiles();

    MCAPI void _updateMembers();

    MCAPI bool getIsInParty() const;

    MCAPI ::std::string const& getLeaderXuid() const;

    MCFOLD ::std::vector<::OreUI::SocialPlayer> const& getMembers() const;

    MCAPI ::std::string const& getPartyId() const;

    MCFOLD ::std::vector<::OreUI::SocialPlayer> const& getPendingInvitees() const;

    MCAPI ::Parties::PartyPrivacy getPrivacy() const;
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
        ::std::optional<::Bedrock::NotNullNonOwnerPtr<::Parties::IPartyProvider>> partyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const&         resourceAllowList,
        ::std::shared_ptr<::Social::ProfileSystem>                                profileSystem
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
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
