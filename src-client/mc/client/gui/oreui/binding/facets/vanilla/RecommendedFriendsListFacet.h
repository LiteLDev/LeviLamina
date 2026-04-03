#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/social/XboxAPICallResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct AddFriendUserItem; }
namespace Social { class IUserManager; }
namespace Social { class RecommendedFriendsList; }
// clang-format on

namespace OreUI {

class RecommendedFriendsListFacet : public ::OreUI::FacetBase<::OreUI::RecommendedFriendsListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::RecommendedFriendsList>>        mRecommendedFriendsList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::AddFriendUserItem>>                  mDisplayableList;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRecommendedFriendsListSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RecommendedFriendsListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecommendedFriendsListFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecommendedFriendsListFacet(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager const> userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>  resourceAllowList
    );

    MCFOLD ::std::vector<::OreUI::AddFriendUserItem>& getDisplayableList();

    MCFOLD ::XboxAPICallResult const getXboxAPICallResult() const;

    MCFOLD bool isDataLoading() const;
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
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager const> userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>  resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
