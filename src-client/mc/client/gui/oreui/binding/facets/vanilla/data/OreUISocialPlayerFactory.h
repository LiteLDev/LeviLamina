#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PartyPresence.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PlayerListEntry;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct SocialPlayer; }
namespace OreUI { struct WorldPlayerInfoBindings; }
namespace Parties { struct Party; }
namespace Social { struct FriendData; }
namespace Social { struct PlayerProfileData; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

namespace OreUI {

class OreUISocialPlayerFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OreUI::SocialPlayer createSocialPlayerFromFriendData(
        ::Social::FriendData const&                                friendData,
        ::std::vector<::PlayerListEntry const*> const&             lobbyPlayers,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::std::shared_ptr<::Parties::Party> const&                 party
    );

    MCAPI static ::OreUI::SocialPlayer createSocialPlayerFromPlayerProfileData(
        ::Social::PlayerProfileData const&                         playerProfileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::std::shared_ptr<::Parties::Party> const&                 party
    );

    MCAPI static ::OreUI::SocialPlayer createSocialPlayerFromWorldPlayerInfo(
        ::OreUI::WorldPlayerInfoBindings const&    worldPlayerInfoBindings,
        ::std::shared_ptr<::Parties::Party> const& party,
        ::std::optional<::Social::FriendData>      friendData
    );

    MCAPI static ::OreUI::SocialPlayer createSocialPlayerFromXboxLiveUserProfileData(
        ::Social::XboxLiveUserProfileData const&                   xboxLiveUserProfileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::std::shared_ptr<::Parties::Party> const&                 party,
        ::std::string const&                                       currentXuid
    );

    MCAPI static ::OreUI::PartyPresence
    getPartyPresence(::std::string const& xuid, ::std::shared_ptr<::Parties::Party> const& party);
    // NOLINTEND
};

} // namespace OreUI
