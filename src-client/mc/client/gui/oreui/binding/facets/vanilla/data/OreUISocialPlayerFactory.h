#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PartyPresence.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PlayerListEntry;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct SocialPlayerData; }
namespace OreUI { struct WorldPlayerInfoBindings; }
namespace Parties { class Party; }
namespace Social { struct FriendData; }
namespace Social { struct PlayerProfileData; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

namespace OreUI {

class OreUISocialPlayerFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromFriendData(
        ::Social::FriendData const&                                friendData,
        ::std::vector<::PlayerListEntry const*> const&             lobbyPlayers,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::std::shared_ptr<::Parties::Party> const&                 party
    );

    MCAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromPlayerProfileData(
        ::Social::PlayerProfileData const&                         playerProfileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::std::shared_ptr<::Parties::Party> const&                 party,
        ::std::vector<::PlayerListEntry const*> const&             lobbyPlayers
    );

    MCAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromWorldPlayerInfo(
        ::OreUI::WorldPlayerInfoBindings const&    worldPlayerInfoBindings,
        ::std::shared_ptr<::Parties::Party> const& party,
        ::std::optional<::Social::FriendData>      friendData
    );

    MCAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromXboxLiveUserProfileData(
        ::Social::XboxLiveUserProfileData const&                   xboxLiveUserProfileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::std::shared_ptr<::Parties::Party> const&                 party,
        ::std::string const&                                       currentXuid
    );

    MCAPI static ::OreUI::PartyPresence
    getPartyPresence(::std::string const& xuid, ::std::shared_ptr<::Parties::Party> const& party);

    MCFOLD static bool
    isInSameGame(::Social::FriendData const& friendData, ::std::vector<::PlayerListEntry const*> const& lobbyPlayers);

    MCFOLD static bool isInSameGame(
        ::Social::PlayerProfileData const&             playerProfileData,
        ::std::vector<::PlayerListEntry const*> const& lobbyPlayers
    );
    // NOLINTEND
};

} // namespace OreUI
