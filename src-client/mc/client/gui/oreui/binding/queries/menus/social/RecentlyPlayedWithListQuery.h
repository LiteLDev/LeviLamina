#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/social/XboxAPICallResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class AddFriendObject; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace OreUI { class SocialPlayerObject; }
namespace Parties { class IPartyProvider; }
namespace Social { class IUserManager; }
namespace Social { class RecentlyPlayedWithList; }
// clang-format on

namespace OreUI {

class RecentlyPlayedWithListQuery : public ::OreUI::QueryBase<::OreUI::RecentlyPlayedWithListQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>>       mPartyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager const>> mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>  mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::RecentlyPlayedWithList>>         mRecentlyPlayedWithList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRecentlyPlayedWithListSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRecentlyPlayedWithFilteredListSubscriber;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::AddFriendObject, ::OreUI::AddFriendObject>>
        mFilteredAddFriendList;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::SocialPlayerObject, ::OreUI::SocialPlayerObject>>
                                                                                            mFilteredPartyInviteList;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                               mIsLoading;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::XboxAPICallResult, ::XboxAPICallResult>> mXboxApiCallResult;
    // NOLINTEND

public:
    // prevent constructor by default
    RecentlyPlayedWithListQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecentlyPlayedWithListQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);

    MCAPI void _updateLists();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND
};

} // namespace OreUI
