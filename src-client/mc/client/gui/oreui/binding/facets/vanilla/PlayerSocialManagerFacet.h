#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class PlayerSocialManagerFacet : public ::OreUI::FacetBase<::OreUI::PlayerSocialManagerFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerSocialManagerFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addFriend(::std::string xuid, ::IMinecraftEventing::AddedFriendLocation addedLocation);

    MCAPI void block(::std::string xuid);

    MCAPI void favorite(::std::string xuid);

    MCAPI void mute(::std::string xuid);

    MCAPI void removeFriend(::std::string xuid);

    MCAPI void showXboxProfileCard(::std::string xuid);

    MCAPI void unblock(::std::string xuid);

    MCAPI void unfavorite(::std::string xuid);

    MCAPI void unmute(::std::string xuid);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
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
