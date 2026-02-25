#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/commands/PlayerPermissionsCommandsUtils.h"
#include "mc/client/commands/PlayerPermissionsLevelListener.h"
#include "mc/client/gui/oreui/binding/FacetBase.h"
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

class PlayerPermissionsFacet : public ::OreUI::FacetBase<::OreUI::PlayerPermissionsFacet> {
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
    virtual ~PlayerPermissionsFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerPermissionsFacet(
        ::MinecraftCommands&                 commands,
        ::PacketSender&                      packetSender,
        ::LocalPlayerChangedConnector const& localPlayerChangedConnector,
        ::World::WorldPlayerListTracker&     worldPlayerListTracker,
        ::std::function<::LocalPlayer*()>    getCurrentLocalPlayer,
        ::std::function<bool()>              isInGame,
        ::std::function<bool()>              isPrimaryClient,
        ::std::function<bool()>              isHostingLocalDedicatedServer
    );

    MCAPI void _clearResources();

    MCAPI bool _evaluateCanEditPermissions();

    MCAPI bool _evaluateCanKickPlayer(::ActorUniqueID playerId);

    MCAPI void _evaluateStates();

    MCAPI void _initResources();

    MCAPI void _reloadPermissions();

    MCAPI void _syncFromManager(::ActorUniqueID playerId);

    MCAPI bool areCheatsEnabled() const;

    MCAPI bool canEditPermissions() const;

    MCFOLD bool canKickPlayer() const;

    MCAPI void clearErrorFlag(::OreUI::PlayerPermissionsError error);

    MCAPI void enableCheats();

    MCFOLD ::std::optional<::PlayerPermissionLevel> const& getCurrentPlayerPermissionLevel() const;

    MCAPI ::OreUI::PlayerPermissionsActionState const& getKickCommandState() const;

    MCAPI bool getOperatorCommandsRevokedFlag() const;

    MCFOLD bool getPlayerIdInvalidFlag() const;

    MCFOLD ::std::vector<::OreUI::PlayerAbilityBindings> const& getPlayerPermissionList() const;

    MCAPI bool getPlayerPermissionsMissingFlag() const;

    MCAPI bool getSelectedPlayerLeftFlag() const;

    MCAPI bool getSelectedPlayerPermissionsChangedFlag() const;

    MCAPI bool isWorldTemplateOptionsLocked() const;

    MCAPI void kickPlayer(::std::string playerId);

    MCAPI void loadPlayerPermissions(::std::string playerId);

    MCAPI void requestSavePermissions();

    MCAPI void setPlayerPermission(::std::string playerId, ::AbilitiesIndex abilityIndex, bool isEnabled);

    MCAPI void setPlayerPermissionLevel(::std::string playerId, ::PlayerPermissionLevel playerPermissionLevel);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
