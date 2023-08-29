#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/player/PlayerInteractEntityEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/Player.hpp"
#include "mc/ServerNetworkHandler.hpp"
#include "mc/ServerPlayer.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

namespace ll::event::player {

PlayerInteractEntityEvent::PlayerInteractEntityEvent(
    ServerPlayer*   serverPlayer,
    ActorRuntimeID  targetId,
    InteractiveMode interactiveMode
)
: serverPlayer(serverPlayer), targetId(targetId), interactiveMode(interactiveMode) {}

LL_GETTER_IMPL(PlayerInteractEntityEvent, ServerPlayer*, serverPlayer, getServerPlayer)
LL_GETTER_IMPL(PlayerInteractEntityEvent, ActorRuntimeID, targetId, getTargetId)
LL_GETTER_IMPL(
    PlayerInteractEntityEvent,
    PlayerInteractEntityEvent::InteractiveMode,
    interactiveMode,
    getInteractiveMode
)

using EventManager = EventManager<PlayerInteractEntityEvent>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    PlayerInteractEntityHook,
    ServerNetworkHandler,
    HookPriority::Normal,
    "?handle@ItemUseOnActorInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z",
    void,
    ServerPlayer* sp,
    bool          unk
) {
    using ll::memory::dAccess;
    PlayerInteractEntityEvent event(
        sp,
        dAccess<ActorRuntimeID, 104>(this),
        static_cast<PlayerInteractEntityEvent::InteractiveMode>(dAccess<int, 112>(this))
    );
    if (event.isCancelled()) {
        return;
    }
    origin(sp, unk);
}

} // namespace ll::event::player

LL_EVENT_IMPL(player::PlayerInteractEntityEvent)
