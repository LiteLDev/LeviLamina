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
namespace Social { class ReceivedFriendRequestsList; }
// clang-format on

namespace OreUI {

class ReceivedFriendRequestsQuery : public ::OreUI::QueryBase<::OreUI::ReceivedFriendRequestsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>> mIsLoading;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::AddFriendObject, ::std::allocator<::OreUI::AddFriendObject>>>
                                                                                       mRequests;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::XboxAPICallResult>>                 mXboxAPICallResult;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ReceivedFriendRequestsList>> mReceivedFriendRequestsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mReceivedFriendRequestsListSubscriber;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceivedFriendRequestsQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ReceivedFriendRequestsQuery(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
