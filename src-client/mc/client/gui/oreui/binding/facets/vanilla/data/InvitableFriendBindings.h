#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/gui/oreui/resources/AllowListProfileImage.h"
#include "mc/client/social/FriendInviteType.h"
#include "mc/client/social/UserPresenceResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace Social { struct FriendData; }
// clang-format on

namespace OreUI {

struct InvitableFriendBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Social::FriendInviteType>       mFriendInviteType;
    ::ll::TypedStorage<8, 32, ::std::string>                   mUserId;
    ::ll::TypedStorage<8, 32, ::std::string>                   mPlayerName;
    ::ll::TypedStorage<4, 4, ::Social::UserPresenceResult>     mPresence;
    ::ll::TypedStorage<8, 144, ::OreUI::AllowListProfileImage> mProfileImage;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>          mPlatformImage;
    // NOLINTEND

public:
    // prevent constructor by default
    InvitableFriendBindings& operator=(InvitableFriendBindings const&);
    InvitableFriendBindings(InvitableFriendBindings const&);
    InvitableFriendBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InvitableFriendBindings(::OreUI::InvitableFriendBindings&&);

    MCAPI InvitableFriendBindings(
        ::Social::FriendData const&                                friendData,
        ::Social::FriendInviteType                                 inviteEntryType,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::std::string const& getActiveProfileImage() const;

    MCAPI ~InvitableFriendBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::InvitableFriendBindings&&);

    MCAPI void* $ctor(
        ::Social::FriendData const&                                friendData,
        ::Social::FriendInviteType                                 inviteEntryType,
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
