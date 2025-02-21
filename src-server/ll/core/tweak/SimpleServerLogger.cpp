#include "ll/core/tweak/SimpleServerLogger.h"

#include "ll/api/event/EventBus.h"
#include "ll/api/event/command/ExecuteCommandEvent.h"
#include "ll/api/event/player/PlayerChatEvent.h"
#include "ll/api/event/player/ServerPlayerEvent.h"
#include "ll/core/LeviLamina.h"

#include "mc/server/commands/CommandOrigin.h"

#include "magic_enum/magic_enum.hpp"

namespace ll {
using namespace event;
struct SimpleServerLogger::Impl {
    ll::event::ListenerPtr playerChat;
    ll::event::ListenerPtr playerCommand;

    ~Impl() {
        auto& bus = EventBus::getInstance();
        bus.removeListener(playerCommand);
        bus.removeListener(playerChat);
    }
};
void SimpleServerLogger::call(SimpleServerLoggerConfig const& config) {
    if (config.enabled) {
        if (!impl) impl = std::make_unique<Impl>();
        auto& bus = EventBus::getInstance();
        if (config.playerChat && !impl->playerChat) {
            impl->playerChat = bus.emplaceListener<PlayerChatEvent>([](PlayerChatEvent& ev) {
                getLogger().info("[PlayerChat] <{}> {}", ev.self().getRealName(), ev.message());
            });
        }
        if (config.playerCommand && !impl->playerCommand) {
            impl->playerCommand = bus.emplaceListener<ExecutingCommandEvent>([](ExecutingCommandEvent& ev) {
                auto& context = ev.commandContext();
                if (context.mOrigin->getOriginType() != CommandOriginType::Player) {
                    return;
                }
                getLogger().info(
                    "[PlayerCmd] <{}> {}",
                    ((Player*)(context.mOrigin->getEntity()))->getRealName(),
                    context.mCommand
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
