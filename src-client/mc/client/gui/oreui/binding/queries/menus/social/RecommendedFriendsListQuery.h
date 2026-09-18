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
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
namespace Social { class RecommendedFriendsList; }
// clang-format on

namespace OreUI {

class RecommendedFriendsListQuery : public ::OreUI::QueryBase<::OreUI::RecommendedFriendsListQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                                               mIsLoading;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::AddFriendObject, ::OreUI::AddFriendObject>> mPlayerList;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::XboxAPICallResult, ::XboxAPICallResult>> mXboxAPICallResult;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::RecommendedFriendsList>>          mRecommendedFriendsList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>   mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRecommendedFriendsListSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RecommendedFriendsListQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RecommendedFriendsListQuery(::OreUI::GameDependencies const& game);

    MCAPI void _fetchData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
