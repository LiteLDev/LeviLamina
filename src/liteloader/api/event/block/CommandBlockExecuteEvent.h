#pragma once

#include "liteloader/api/event/Event.h"
#include "mc/Actor.hpp"
#include "mc/BlockInstance.hpp"
#include "liteloader/api/utils/AccessorMacro.h"

namespace ll::event::block {
/**
 * @brief command block execute event.
 */
class CommandBlockExecuteEvent : public Event<CommandBlockExecuteEvent>, public Cancellable {
    LL_RO_MEMBER(std::string, command, getCommand);
    LL_RO_MEMBER(bool, isMinecart, getIsMinecart);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Actor*, minecart, getMinecart);

    CommandBlockExecuteEvent(
        std::string const&   command,
        bool                 isMinecart,
        BlockInstance const& blockInstance,
        Actor*               minecart
    );

    CommandBlockExecuteEvent(
        std::string&&        command,
        bool                 isMinecart,
        BlockInstance const& blockInstance,
        Actor*               minecart
    );

    LL_DELETE_COPY(CommandBlockExecuteEvent);
    LL_DELETE_MOVE(CommandBlockExecuteEvent);
};
} // namespace ll::event::block
