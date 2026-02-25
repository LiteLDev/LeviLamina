#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/FriendsLoadingState.h"
#include "mc/client/social/FriendInviteType.h"
#include "mc/client/social/InvitableFriendsHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct InvitableFriendBindings; }
namespace Social { class IUserManager; }
namespace Social { struct FriendList; }
namespace Social { struct MultiplayerServiceManager; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class InvitableFriendsListFacet : public ::OreUI::FacetBase<::OreUI::InvitableFriendsListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mFriendListSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mLobbyChangedSubscriber;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::FriendList>>                    mFriendList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>>      mUserManager;
    ::ll::TypedStorage<8, 88, ::Social::InvitableFriendsHandler>                          mInvitableFriendsHandler;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::InvitableFriendBindings>>            mInvitableFriends;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<4, 4, ::OreUI::FriendsLoadingState>                                mXblFriendsLoadingState;
    ::ll::TypedStorage<4, 4, ::OreUI::FriendsLoadingState>                                mPlatformFriendsLoadingState;
    ::ll::TypedStorage<1, 1, bool>                                                        mHasPlatformIcons;
    // NOLINTEND

public:
    // prevent constructor by default
    InvitableFriendsListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvitableFriendsListFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InvitableFriendsListFacet(
        ::std::shared_ptr<::Social::FriendList>                                   friendList,
        ::World::WorldPlayerListTracker&                                          worldPlayerListTracker,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> const& multiplayerServiceManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>                     userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>                resourceAllowList
    );

    MCAPI void _fetchInvitableFriends();

    MCFOLD ::std::vector<::OreUI::InvitableFriendBindings> const& getInvitableFriends();

    MCFOLD ::OreUI::FriendsLoadingState getPlatformFriendsLoadingState() const;

    MCAPI ::OreUI::FriendsLoadingState getXblFriendsLoadingState() const;

    MCAPI bool const hasPlatformIcons() const;

    MCAPI void sendInvite(::std::string userId, ::Social::FriendInviteType entryType);
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
        ::World::WorldPlayerListTracker&                                          worldPlayerListTracker,
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> const& multiplayerServiceManager,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>                     userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>                resourceAllowList
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
