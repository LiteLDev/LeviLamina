#include "ll/core/tweak/SimpleServerLogger.h"

#include "ll/api/Logger.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/command/ExecuteCommandEvent.h"
#include "ll/api/event/player/PlayerChangePermEvent.h"
#include "ll/api/event/player/PlayerChatEvent.h"

#include "magic_enum.hpp"

namespace ll {
using namespace event;
struct SimpleServerLogger::Impl {
    ll::event::ListenerPtr playerChat;
    ll::event::ListenerPtr playerCommand;
    ll::event::ListenerPtr playerPermission;

    ~Impl() {
        auto& bus = EventBus::getInstance();
        bus.removeListener(playerCommand);
        bus.removeListener(playerChat);
        bus.removeListener(playerPermission);
    }
};
void SimpleServerLogger::call(SimpleServerLoggerConfig const& config) {
    if (config.enabled) {
        if (!impl) impl = std::make_unique<Impl>();
        auto& bus = EventBus::getInstance();
        if (config.playerChat && !impl->playerChat) {
            impl->playerChat = bus.emplaceListener<PlayerChatEvent>([](PlayerChatEvent& ev) {
                static Logger logger("PlayerChat");
                logger.info("<{}> {}", ev.self().getRealName(), ev.message());
            });
        }
        if (config.playerCommand && !impl->playerCommand) {
            impl->playerCommand = bus.emplaceListener<ExecutingCommandEvent>([](ExecutingCommandEvent& ev) {
                auto& context = ev.commandContext();
                if (context.getCommandOrigin().getOriginType() != CommandOriginType::Player) {
                    return;
                }
                static Logger logger("PlayerCmd");
                logger.info(
                    "<{}> {}",
                    ((Player*)(context.getCommandOrigin().getEntity()))->getRealName(),
                    context.mCommand
                );
            });
        }
        if (config.playerPermission && !impl->playerPermission) {
            impl->playerPermission = bus.emplaceListener<PlayerChangePermEvent>([](PlayerChangePermEvent& ev) {
                static Logger logger("PlayerPerm");
                logger.info(
                    "<{}> {}({}) -> {}({})",
                    ev.self().getRealName(),
                    magic_enum::enum_name(ev.self().getCommandPermissionLevel()),
                    fmt::underlying(ev.self().getCommandPermissionLevel()),
                    magic_enum::enum_name(ev.newPerm()),
                    fmt::underlying(ev.newPerm())
                );
            });
        }
    } else {
        impl.reset();
    }
}
SimpleServerLogger::SimpleServerLogger()  = default;
SimpleServerLogger::~SimpleServerLogger() = default;
} // namespace ll
