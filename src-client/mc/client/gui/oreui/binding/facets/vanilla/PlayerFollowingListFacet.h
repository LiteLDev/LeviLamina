#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct AddFriendUserItem; }
namespace Social { class FollowingList; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class PlayerFollowingListFacet : public ::OreUI::FacetBase<::OreUI::PlayerFollowingListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::FollowingList>>                  mFollowingList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager const>> mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>>  mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::AddFriendUserItem>>                   mDisplayableList;
    ::ll::TypedStorage<8, 32, ::std::string>                                               mXuid;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                             mFollowingListSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerFollowingListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerFollowingListFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerFollowingListFacet(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager const> userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>  resourceAllowList
    );

    MCFOLD ::std::vector<::OreUI::AddFriendUserItem>& getDisplayableList();

    MCAPI bool isDataLoading() const;

    MCAPI void load(::std::string const& xuid);
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
