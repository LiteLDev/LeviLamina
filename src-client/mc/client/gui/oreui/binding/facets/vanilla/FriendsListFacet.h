#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/FriendsLoadingState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct SocialPlayer; }
namespace Parties { struct IPartyProvider; }
namespace Parties { struct Party; }
namespace Realms { struct RealmsList; }
namespace Social { class IUserManager; }
namespace Social { struct FriendList; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class FriendsListFacet : public ::OreUI::FacetBase<::OreUI::FriendsListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::FriendList>>                    mFriendList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsList>>                    mRealmsList;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                            mWorldPlayerListTracker;
    ::ll::TypedStorage<4, 4, ::OreUI::FriendsLoadingState>                                mXblFriendsLoadingState;
    ::ll::TypedStorage<4, 4, ::OreUI::FriendsLoadingState>                                mPlatformFriendsLoadingState;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>>      mUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mPartySubscription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Parties::Party>>                        mParty;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                       mXblFriends;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                       mPlatformFriends;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mBuildGameListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mRealmsListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mFriendListChangedSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mPlayerListChangedSubscriber;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                       mPrevXblFriends;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                       mPrevPlatformFriends;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendsListFacet& operator=(FriendsListFacet const&);
    FriendsListFacet(FriendsListFacet const&);
    FriendsListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FriendsListFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FriendsListFacet(
        ::std::shared_ptr<::Social::FriendList>                                   friendList,
        ::std::shared_ptr<::Realms::RealmsList>                                   realmsList,
        ::World::WorldPlayerListTracker&                                          worldPlayerListTracker,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>                resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>                     userManager,
        ::std::optional<::Bedrock::NotNullNonOwnerPtr<::Parties::IPartyProvider>> partyProvider
    );

    MCAPI void _copyFriendsList();

    MCFOLD ::std::vector<::OreUI::SocialPlayer> const& getPlatformFriends() const;

    MCFOLD ::OreUI::FriendsLoadingState getPlatformFriendsLoadingState() const;

    MCFOLD ::std::vector<::OreUI::SocialPlayer> const& getXblFriends() const;

    MCFOLD ::OreUI::FriendsLoadingState getXblFriendsLoadingState() const;

    MCFOLD void userControlledUpdateGameList();
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
        ::std::shared_ptr<::Social::FriendList>                                   friendList,
        ::std::shared_ptr<::Realms::RealmsList>                                   realmsList,
        ::World::WorldPlayerListTracker&                                          worldPlayerListTracker,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>                resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>                     userManager,
        ::std::optional<::Bedrock::NotNullNonOwnerPtr<::Parties::IPartyProvider>> partyProvider
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
