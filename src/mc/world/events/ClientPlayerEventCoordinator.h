#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/NetworkType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/events/PlayerEventCoordinator.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class EntityContext;
class Player;
class Vec2;
struct ActorUniqueID;
class IClientInstance;
class LocalPlayer;
// clang-format on

class ClientPlayerEventCoordinator : public ::PlayerEventCoordinator {
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void sendCameraSetPlayerRot(::Player& player, ::Vec2 const& rotation);

    MCAPI void sendCloseAllScreensRequestEvent(::LocalPlayer& player);

    MCAPI void sendCloseDataDrivenScreenRequestEvent(::LocalPlayer& player, uint formId);

    MCAPI void sendLocalPlayerDeath(::IClientInstance& client, ::LocalPlayer& player);

    MCAPI void sendLocalPlayerOpenInventory(::IClientInstance& client, ::LocalPlayer& player);

    MCAPI void sendLocalPlayerOpenTrading(
        ::IClientInstance&     client,
        ::LocalPlayer&         player,
        ::ActorUniqueID const& uniqueID,
        bool                   useNewScreen
    );

    MCAPI void sendLocalPlayerRespawn(::IClientInstance& client, ::LocalPlayer& player);

    MCAPI void sendPlayerCreated(
        ::LocalPlayer&         player,
        ::persona::ProfileType personaSlot,
        ::std::string const&   classicSkinId,
        bool                   usingClassicSkin,
        ::NetworkType          networkType
    );
#endif

    MCAPI void sendPlayerDestroyedBlock(::Player& player, ::Block const& block);

#ifdef LL_PLAT_C
    MCAPI void sendPlayerInput(::EntityContext& entity);

    MCAPI void sendPlayerStartRiding(::Player& player, ::Actor& vehicle);

    MCAPI void
    sendPlayerStopRiding(::Player& player, bool exitFromPassenger, bool entityIsBeingDestroyed, bool switchingVehicles);

    MCAPI void sendPlayerTurn(::Player& player, ::Vec2& turnDelta);

    MCAPI void sendShowScreenRequestEvent(
        ::LocalPlayer&        player,
        ::std::string const&  screenId,
        uint                  formId,
        ::std::optional<uint> dataInstanceId
    );
#endif

    MCAPI void sendStartDestroyBlock(::Player& player, ::BlockPos const& pos, uchar& face);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
