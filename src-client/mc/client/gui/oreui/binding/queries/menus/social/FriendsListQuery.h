#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/FriendsLoadingState.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class SocialPlayerObject; }
namespace Parties { class IPartyProvider; }
namespace Social { class FriendList; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class FriendsListQuery : public ::OreUI::QueryBase<::OreUI::FriendsListQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::FriendsLoadingState, ::OreUI::FriendsLoadingState>>
        mXblLoadingState;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::FriendsLoadingState, ::OreUI::FriendsLoadingState>>
        mPlatformLoadingState;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::SocialPlayerObject, ::OreUI::SocialPlayerObject>>
        mXblFriends;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::SocialPlayerObject, ::OreUI::SocialPlayerObject>>
                                                                                          mPlatformFriends;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::FriendList>>                    mFriendList;
    ::ll::TypedStorage<8, 8, ::World::WorldPlayerListTracker&>                            mWorldPlayerListTracker;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>>      mPartyProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mFriendListChangedSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mPlayerListChangedSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mPartySubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendsListQuery& operator=(FriendsListQuery const&);
    FriendsListQuery(FriendsListQuery const&);
    FriendsListQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FriendsListQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FriendsListQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const&);

    MCAPI void _updateLists();

    MCAPI void _updateStatus();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const&);
    // NOLINTEND
};

} // namespace OreUI
