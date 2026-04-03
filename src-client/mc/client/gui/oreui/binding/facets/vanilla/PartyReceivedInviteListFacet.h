#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct PartyReceivedInviteData; }
namespace Parties { class IPartyProvider; }
namespace Parties { class PartyReceivedInviteList; }
namespace Social { class ProfileSystem; }
namespace Social { struct PlayerProfile; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class PartyReceivedInviteListFacet : public ::OreUI::FacetBase<::OreUI::PartyReceivedInviteListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>>                     mProfileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartyReceivedInviteList>> mPartyReceivedInviteList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>     mResourceAllowList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::PlayerProfile>>   mInviterProfiles;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PartyReceivedInviteData>>                mInvites;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                                mWorldPlayerListTracker;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mReceivedInviteUpdateSubscription;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>> mPartyProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPartySubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>        mInviterProfileSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyReceivedInviteListFacet& operator=(PartyReceivedInviteListFacet const&);
    PartyReceivedInviteListFacet(PartyReceivedInviteListFacet const&);
    PartyReceivedInviteListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyReceivedInviteListFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartyReceivedInviteListFacet(
        ::Bedrock::NonOwnerPointer<::Parties::PartyReceivedInviteList> partyReceivedInviteList,
        ::std::shared_ptr<::Social::ProfileSystem>                     profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>     resourceAllowList,
        ::World::WorldPlayerListTracker&                               worldPlayerListTracker,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>          partyProvider
    );

    MCAPI void _updateInvites();

    MCAPI void _updateProfiles();

    MCFOLD ::std::vector<::OreUI::PartyReceivedInviteData> const& getInvites() const;
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
        ::Bedrock::NonOwnerPointer<::Parties::PartyReceivedInviteList> partyReceivedInviteList,
        ::std::shared_ptr<::Social::ProfileSystem>                     profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>     resourceAllowList,
        ::World::WorldPlayerListTracker&                               worldPlayerListTracker,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>          partyProvider
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
