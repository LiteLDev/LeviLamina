#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PlayerListEntry;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct SocialPlayerData; }
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

    MCAPI static ::OreUI::SocialPlayerData createSocialPlayerDataFromXboxLiveUserProfileData(
        ::Social::XboxLiveUserProfileData const&                   xboxLiveUserProfileData,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::std::shared_ptr<::Parties::Party> const&                 party,
        ::std::string const&                                       currentXuid
    );
    // NOLINTEND
};

} // namespace OreUI
