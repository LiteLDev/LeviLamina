#include <llapi/event/EventManager.h>
#include <llapi/event/block/HopperPushOutEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/BlockSource.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

namespace ll::event::block {

HopperPushOutEvent::HopperPushOutEvent(Vec3 const& pos, int dimensionId) : pos(pos), dimensionId(dimensionId) {}

LL_GETTER_IMPL(HopperPushOutEvent, Vec3, pos, getPos)
LL_GETTER_IMPL(HopperPushOutEvent, int, dimensionId, getDimensionId)

LL_AUTO_INSTANCE_HOOK(
    HopperPushOutEventHook,
    HookPriority::Normal,
    "?_pushOutItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H@Z",
    bool,
    BlockSource* blockSource,
    Container*   container,
    Vec3*        pos,
    int          a5
) {
    using EventManager = EventManager<HopperPushOutEvent>;

    HopperPushOutEvent event(*pos, blockSource->getDimensionId());
    EventManager::fireEvent(event);
    if (event.isCancelled()) {
        return false;
    }

    return origin(blockSource, container, pos, a5);
}

} // namespace ll::event::block

LL_EVENT_IMPL(block::HopperPushOutEvent)
