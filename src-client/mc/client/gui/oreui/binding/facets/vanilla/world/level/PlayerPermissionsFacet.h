#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/commands/PlayerPermissionsCommandsUtils.h"
#include "mc/client/commands/PlayerPermissionsLevelListener.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/world/level/PlayerPermissionsActionState.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/world/level/PlayerPermissionsError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class MinecraftCommands;
class PacketSender;
class PlayerPermissionsManager;
class PlayerPermissionsSynchroniser;
struct LocalPlayerChangedConnector;
namespace OreUI { struct PlayerAbilityBindings; }
namespace World { class WorldPlayerListTracker; }
// clang-format on

namespace OreUI {

class PlayerPermissionsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PlayerPermissionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mLocalPlayerSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mPlayerPermissionsChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mPlayerListChangedSubscription;
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer*()>> mGetCurrentLocalPlayer;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>           mIsInGame;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>           mIsPrimaryClient;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>           mIsHostingLocalDedicatedServer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerPermissionsManager>> mPlayerPermissionsManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerPermissionsSynchroniser>>
                                                                             mPlayerPermissionsSynchroniser;
    ::ll::TypedStorage<8, 80, ::PlayerPermissionsCommandsUtils>              mCommandsUtils;
    ::ll::TypedStorage<1, 1, bool>                                           mPlayerIdInvalidFlag;
    ::ll::TypedStorage<1, 1, bool>                                           mPlayerPermissionsMissingFlag;
    ::ll::TypedStorage<1, 1, bool>                                           mSelectedPlayerLeftFlag;
    ::ll::TypedStorage<1, 1, bool>                                           mSelectedPlayerPermissionsChangedFlag;
    ::ll::TypedStorage<1, 1, bool>                                           mOperatorCommandsRevokedFlag;
    ::ll::TypedStorage<1, 1, ::OreUI::PlayerPermissionsActionState>          mKickCommandState;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mCurrentPlayerID;
    ::ll::TypedStorage<1, 2, ::std::optional<::PlayerPermissionLevel>>       mCurrentPlayerPermissionLevel;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PlayerAbilityBindings>> mPlayerPermissionList;
    ::ll::TypedStorage<1, 1, bool>                                           mCanEditPermissions;
    ::ll::TypedStorage<1, 1, bool>                                           mCanKickPlayer;
    ::ll::TypedStorage<1, 1, bool>                                           mLocalPlayerLoaded;
    ::ll::TypedStorage<1, 1, bool>                                           mPermissionsChanged;
    ::ll::TypedStorage<1, 1, bool>                                           mStatesChanged;
    ::ll::TypedStorage<1, 1, bool>                                           mErrorFlagsChanged;
    ::ll::TypedStorage<1, 1, bool>                                           mAreCheatsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                           mIsWorldTemplateOptionsLocked;
    ::ll::TypedStorage<8, 136, ::PlayerPermissionsLevelListener>             mLevelListener;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerPermissionsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerPermissionsFacet(
        ::MinecraftCommands&                 commands,
        ::PacketSender&                      packetSender,
        ::LocalPlayerChangedConnector const& localPlayerChangedConnector,
        ::World::WorldPlayerListTracker&     worldPlayerListTracker,
        ::std::function<::LocalPlayer*()>    getCurrentLocalPlayer,
        ::std::function<bool()>              isInGame,
        ::std::function<bool()>              isPrimaryClient,
        ::std::function<bool()>              isHostingLocalDedicatedServer
    );

    MCNAPI void _evaluateStates();

    MCNAPI void _initResources();

    MCNAPI void _reloadPermissions();

    MCNAPI bool _validateLocalPlayer();

    MCNAPI bool areCheatsEnabled() const;

    MCNAPI bool canEditPermissions() const;

    MCNAPI bool canKickPlayer() const;

    MCNAPI void clearErrorFlag(::OreUI::PlayerPermissionsError error);

    MCNAPI void enableCheats();

    MCNAPI ::std::optional<::PlayerPermissionLevel> const& getCurrentPlayerPermissionLevel() const;

    MCNAPI ::OreUI::PlayerPermissionsActionState const& getKickCommandState() const;

    MCNAPI bool getOperatorCommandsRevokedFlag() const;

    MCNAPI bool getPlayerIdInvalidFlag() const;

    MCNAPI ::std::vector<::OreUI::PlayerAbilityBindings> const& getPlayerPermissionList() const;

    MCNAPI bool getPlayerPermissionsMissingFlag() const;

    MCNAPI bool getSelectedPlayerLeftFlag() const;

    MCNAPI bool getSelectedPlayerPermissionsChangedFlag() const;

    MCNAPI bool isWorldTemplateOptionsLocked() const;

    MCNAPI void kickPlayer(::std::string playerId);

    MCNAPI void loadPlayerPermissions(::std::string playerId);

    MCNAPI void requestSavePermissions();

    MCNAPI void setPlayerPermission(::std::string playerId, ::AbilitiesIndex abilityIndex, bool isEnabled);

    MCNAPI void setPlayerPermissionLevel(::std::string playerId, ::PlayerPermissionLevel playerPermissionLevel);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::MinecraftCommands&                 commands,
        ::PacketSender&                      packetSender,
        ::LocalPlayerChangedConnector const& localPlayerChangedConnector,
        ::World::WorldPlayerListTracker&     worldPlayerListTracker,
        ::std::function<::LocalPlayer*()>    getCurrentLocalPlayer,
        ::std::function<bool()>              isInGame,
        ::std::function<bool()>              isPrimaryClient,
        ::std::function<bool()>              isHostingLocalDedicatedServer
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
