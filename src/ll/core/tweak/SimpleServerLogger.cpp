#include "ll/api/event/command/ExecuteCommandEvent.h"
#include "ll/api/event/player/PlayerChangePermEvent.h"
#include "ll/api/event/player/PlayerSendMessageEvent.h"

#include "ll/api/Logger.h"
#include "ll/api/event/EventBus.h"
#include "ll/core/Config.h"

#include "magic_enum.hpp"

namespace ll {
void setupSimpleServerLogger() {
    using namespace event;
    if (globalConfig.modules.simpleServerLogger.playerCommand)
        EventBus::getInstance().emplaceListener<ExecutingCommandEvent>([](ExecutingCommandEvent& ev) {
            if (ev.commandContext.getCommandOrigin().getOriginType() != CommandOriginType::Player) {
                return;
            }
            static Logger logger("PlayerCmd");
            logger.info(
                "<{}> {}",
                ((Player*)(ev.commandContext.getCommandOrigin().getEntity()))->getRealName(),
                ev.commandContext.mCommand
            );
        });
    if (globalConfig.modules.simpleServerLogger.playerChat)
        EventBus::getInstance().emplaceListener<PlayerSendMessageEvent>([](PlayerSendMessageEvent& ev) {
            static Logger logger("PlayerChat");
            logger.info("<{}> {}", ev.player.getRealName(), ev.message);
        });
    if (globalConfig.modules.simpleServerLogger.playerPermission)
        EventBus::getInstance().emplaceListener<PlayerChangePermEvent>([](PlayerChangePermEvent& ev) {
            static Logger logger("PlayerPerm");
            logger.info(
                "<{}> {}({}) -> {}({})",
                ev.player.getRealName(),
                magic_enum::enum_name(ev.player.getCommandPermissionLevel()),
                std::to_underlying(ev.player.getCommandPermissionLevel()),
                magic_enum::enum_name(ev.newPerm),
                std::to_underlying(ev.newPerm)
            );
        });
}
} // namespace ll