#include "ll/api/event/block/BlockTryPlaceEvent.h"
#include "ll/api/event/EventManager.h"
#include "ll/api/memory/Hook.h"

#include "mc/BlockSource.hpp"
#include "mc/ItemUseInventoryTransaction.hpp"

#include "ll/api/event/impl/EventImpl.inl"
#include "ll/api/event/impl/EventManagerImpl.inl"
#include "ll/api/event/impl/ListenerImpl.inl"

namespace ll::event::block {

BlockTryPlaceEvent::BlockTryPlaceEvent(BlockInstance const& blockInstance, Player* player)
: blockInstance(blockInstance), player(player) {}

LL_GETTER_IMPL(BlockTryPlaceEvent, Player*, player, getPlayer)
LL_GETTER_IMPL(BlockTryPlaceEvent, BlockInstance, blockInstance, getBlockInstance)

// TODO: fix LeviLamina#548
LL_AUTO_TYPED_INSTANCE_HOOK(
    BlockTryPlaceEventHook,
    BlockSource,
    HookPriority::Normal,
    "?checkBlockPermissions@BlockSource@@QEAA_NAEAVActor@@AEBVBlockPos@@EAEBVItemStackBase@@_N@Z",
    char,
    Actor*         ac,
    BlockPos*      bp,
    uchar          facing,
    ItemStackBase* item,
    bool           a6
) {
    if (ac->isPlayer()) {
        auto               pl = reinterpret_cast<Player*>(ac);
        BlockTryPlaceEvent event(this->getBlockInstance(*bp), pl);
        EventManager<BlockTryPlaceEvent>::fireEvent(event);
        if (event.isCancelled()) {
            // `this` pointer is not used.
            ((ItemUseInventoryTransaction*)nullptr)->resendBlocksAroundArea(*pl, *bp, facing);
            return false;
        }
    }
    return origin(ac, bp, facing, item, a6);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::BlockTryPlaceEvent)
