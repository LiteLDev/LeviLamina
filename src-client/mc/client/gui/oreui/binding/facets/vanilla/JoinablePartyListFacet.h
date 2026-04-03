#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct JoinablePartyFriend; }
namespace Parties { class IPartyProvider; }
namespace Parties { class JoinablePartyList; }
namespace Social { class ProfileSystem; }
namespace Social { struct PlayerProfile; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class JoinablePartyListFacet : public ::OreUI::FacetBase<::OreUI::JoinablePartyListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::JoinablePartyList>>   mJoinablePartyList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ProfileSystem>>                 mProfileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>>      mPartyProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mPartySubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mUpdateSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>             mPlayerProfileSubscriptions;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                            mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::Social::PlayerProfile>>         mPlayerProfiles;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::JoinablePartyFriend>>                mJoinablePartyFriendList;
    // NOLINTEND

public:
    // prevent constructor by default
    JoinablePartyListFacet& operator=(JoinablePartyListFacet const&);
    JoinablePartyListFacet(JoinablePartyListFacet const&);
    JoinablePartyListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JoinablePartyListFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JoinablePartyListFacet(
        ::Bedrock::NonOwnerPointer<::Parties::JoinablePartyList>   joinablePartyList,
        ::std::shared_ptr<::Social::ProfileSystem>                 profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>      partyProvider,
        ::World::WorldPlayerListTracker&                           worldPlayerListTracker
    );

    MCAPI void _updateJoinableParties();

    MCAPI void _updateProfiles();

    MCFOLD ::std::vector<::OreUI::JoinablePartyFriend> const& getJoinablePartyFriends() const;
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
        ::Bedrock::NonOwnerPointer<::Parties::JoinablePartyList>   joinablePartyList,
        ::std::shared_ptr<::Social::ProfileSystem>                 profileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>      partyProvider,
        ::World::WorldPlayerListTracker&                           worldPlayerListTracker
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
