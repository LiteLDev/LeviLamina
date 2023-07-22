#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/Actor.hpp"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/Container.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief Container change event.
 */
class ContainerChangeEvent : public Event<ContainerChangeEvent> {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(Actor*, actor, getActor);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Container*, container, getContainer);
    LL_RO_MEMBER(int, slot, getSlot);
    LL_RO_MEMBER(ItemStack*, previousItemStack, getPreviousItemStack);
    LL_RO_MEMBER(ItemStack*, newItemStack, getNewItemStack);

    ContainerChangeEvent(
        Player*              player,
        Actor*               actor,
        BlockInstance const& blockInstance,
        Container*           container,
        ItemStack*           previousItemStack,
        ItemStack*           newItemStack,
        int                  slot = -1
    );

    LL_DELETE_COPY(ContainerChangeEvent);
    LL_DELETE_MOVE(ContainerChangeEvent);
};
} // namespace ll::event::block
