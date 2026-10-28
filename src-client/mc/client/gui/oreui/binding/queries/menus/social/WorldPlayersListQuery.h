#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
namespace OreUI { class AllowListPath; }
namespace OreUI { class AllowListProfileImage; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace OreUI { class SocialPlayerObject; }
namespace OreUI { struct WorldPlayerInfoObject; }
namespace Social { class WorldPlayersList; }
namespace Social { struct PlayerIdentifier; }
namespace Social { struct PlayerProfile; }
// clang-format on

namespace OreUI {

class WorldPlayersListQuery : public ::OreUI::QueryBase<::OreUI::WorldPlayersListQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::WorldPlayerInfoObject, ::OreUI::WorldPlayerInfoObject>>
        mPlayerList;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::SocialPlayerObject, ::OreUI::SocialPlayerObject>>
                                                                                mPlayersInMyWorld;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mLocalPlayerID;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mIsLocalPlayerHosting;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mIsEnableInviteToPlayButton;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mIsInRealm;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mPlayersRefreshedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mPlayerPermissionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mPlayerInfoSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mLocalPlayerDataChangeSubscription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::WorldPlayersList>>    mWorldPlayerList;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                     mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPlayersListQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldPlayersListQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const&);

    MCAPI void _handleLocalPlayerDataChanged();

    MCAPI void _handlePlayerInfoChanged(
        ::Social::PlayerIdentifier const& playerIdentifier,
        ::OreUI::AllowListProfileImage    profileImage,
        ::OreUI::AllowListPath            platformProfilePic,
        ::Social::PlayerProfile const&    playerProfile
    );

    MCAPI void _handlePlayerPermissionsChanged(
        ::ActorUniqueID const&                         playerId,
        ::std::optional<::PlayerPermissionLevel> const permissionLevel
    );

    MCAPI void _handlePlayersRefreshed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const&);
    // NOLINTEND
};

} // namespace OreUI
