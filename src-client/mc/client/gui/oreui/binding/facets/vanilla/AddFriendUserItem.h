#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

namespace OreUI {

struct AddFriendUserItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                   xuid;
    ::ll::TypedStorage<8, 32, ::std::string>                   gamertag;
    ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage> profileImage;
    ::ll::TypedStorage<1, 1, bool>                             isOnline;
    ::ll::TypedStorage<1, 1, bool>                             isFollowingMe;
    ::ll::TypedStorage<1, 1, bool>                             isFollowedByMe;
    ::ll::TypedStorage<8, 32, ::std::string>                   description;
    // NOLINTEND

public:
    // prevent constructor by default
    AddFriendUserItem& operator=(AddFriendUserItem const&);
    AddFriendUserItem(AddFriendUserItem const&);
    AddFriendUserItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddFriendUserItem(::OreUI::AddFriendUserItem&&);

    MCAPI AddFriendUserItem(
        ::Social::XboxLiveUserProfileData const&                   profileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ~AddFriendUserItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::AddFriendUserItem&&);

    MCAPI void* $ctor(
        ::Social::XboxLiveUserProfileData const&                   profileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
