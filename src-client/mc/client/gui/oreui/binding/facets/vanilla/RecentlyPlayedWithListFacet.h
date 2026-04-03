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
namespace OreUI { struct SocialPlayer; }
namespace Parties { class IPartyProvider; }
namespace Social { class IUserManager; }
namespace Social { class RecentlyPlayedWithList; }
// clang-format on

namespace OreUI {

class RecentlyPlayedWithListFacet : public ::OreUI::FacetBase<::OreUI::RecentlyPlayedWithListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::RecentlyPlayedWithList>>        mRecentlyPlayedWithList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::AddFriendUserItem>>                  mDisplayableList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                       mRecentlyPlayedWith;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::SocialPlayer>>                       mPrevRecentlyPlayedWith;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mRecentlyPlayedWithListSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPartySubscription;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>> mPartyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager const>> mUserManager;
    // NOLINTEND

public:
    // prevent constructor by default
    RecentlyPlayedWithListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecentlyPlayedWithListFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecentlyPlayedWithListFacet(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager const> userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>  resourceAllowList,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>       partyProvider
    );

    MCFOLD ::std::vector<::OreUI::AddFriendUserItem>& getDisplayableList();

    MCFOLD ::std::vector<::OreUI::SocialPlayer> const& getRecentlyPlayedWith();

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
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>  resourceAllowList,
        ::Bedrock::NonOwnerPointer<::Parties::IPartyProvider>       partyProvider
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
