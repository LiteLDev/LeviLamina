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
    ::ll::TypedStorage<8, 176, ::OreUI::AllowListProfileImage> profileImage;
    ::ll::TypedStorage<1, 1, bool>                             isOnline;
    ::ll::TypedStorage<1, 1, bool>                             isFollowingMe;
    ::ll::TypedStorage<1, 1, bool>                             isFollowedByMe;
    ::ll::TypedStorage<1, 1, bool>                             isFriend;
    ::ll::TypedStorage<1, 1, bool>                             isFriendRequestReceived;
    ::ll::TypedStorage<1, 1, bool>                             isFriendRequestSent;
    ::ll::TypedStorage<8, 32, ::std::string>                   description;
    // NOLINTEND

public:
    // prevent constructor by default
    AddFriendUserItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddFriendUserItem(
        ::Social::XboxLiveUserProfileData const&                   profileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Social::XboxLiveUserProfileData const&                   profileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND
};

} // namespace OreUI
