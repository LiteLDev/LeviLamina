#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class PlayerSocialManagerFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PlayerSocialManagerFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                          mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSocialManagerFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerSocialManagerFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerSocialManagerFacet(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager);

    MCNAPI void addFriend(::std::string xuid, ::IMinecraftEventing::AddedFriendLocation addedLocation);

    MCNAPI void block(::std::string xuid);

    MCNAPI void favorite(::std::string xuid);

    MCNAPI void mute(::std::string xuid);

    MCNAPI void removeFriend(::std::string xuid);

    MCNAPI void showXboxProfileCard(::std::string xuid);

    MCNAPI void unblock(::std::string xuid);

    MCNAPI void unfavorite(::std::string xuid);

    MCNAPI void unmute(::std::string xuid);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
