#include "liteloader/SimpleServerLogger.h"

#include <magic_enum.hpp>

#include "llapi/LoggerAPI.h"
#include "llapi/event/LegacyEvents.h"
#include "llapi/memory/Hook.h"
#include "llapi/event/EventManager.h"
#include "llapi/mc/ServerPlayer.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/CommandRegistry.hpp"

#include "liteloader/Config.h"

using namespace ll::event::legacy;
using ll::event::Listener;
using ll::event::player::PlayerChatEvent;
bool                                     ll::SimpleServerLogger::inited = false;
std::weak_ptr<Listener<PlayerChatEvent>> ll::SimpleServerLogger::chatListener{};
EventListener<PlayerCmdEvent>            ll::SimpleServerLogger::cmdListener{0};

bool ll::SimpleServerLogger::registerSimpleServerLogger() {
    if (inited)
        return false;
    if (ll::globalConfig.enableSimpleServerLogger) {
        chatListener = PlayerChatEvent::subscribe(
            [](const PlayerChatEvent& event) {
                static Logger logger("Chat");
                logger.info("<{}> {}", event.getPlayer()->getRealName(), event.getMessage());
            },
            event::EventPriority::Monitor
        );

        cmdListener = ll::event::legacy::PlayerCmdEvent::subscribe([](const ll::event::legacy::PlayerCmdEvent& ev) {
            static Logger logger("Command");
            logger.info("<{}> /{}", ev.mPlayer->getRealName(), ev.mCommand);
            return true;
        });
        inited      = true;
        return true;
    }
    return false;
}

bool ll::SimpleServerLogger::unregisterSimpleServerLogger() {
    if (!inited)
        return false;
    ll::event::EventManager<PlayerChatEvent>::removeListener(chatListener);
    cmdListener.remove();
    inited = false;
    return true;
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    PermissionLog,
    Player,
    HookPriority::Normal,
    "?setPermissions@Player@@QEAAXW4CommandPermissionLevel@@@Z",
    void,
    CommandPermissionLevel perm
) {
    if (ll::globalConfig.enableSimpleServerLogger) {
        static Logger logger("Permissions");
        logger.info(
            "<{}> {}({}) -> {}({})",
            getRealName(),
            magic_enum::enum_name(getCommandPermissionLevel()),
            (int)getCommandPermissionLevel(),
            magic_enum::enum_name(perm),
            (int)perm
        );
    }
    return origin(perm);
}

// ==> LiteLoader/Main/BuiltinUnlockCmd.cpp
#include "llapi/mc/I18n.hpp"

void LogCommandRegistration(
    std::string const&          name,
    char const*                 description,
    enum CommandPermissionLevel perm,
    short                       flag1,
    short                       flag2
) {
    static Logger logger("RegisterCommand");
    logger.consoleLevel = logger.debug.level;
    logger.debug(
        "{:<18} - {:<12} - 0x{:<5x} - {}", name, magic_enum::enum_name(perm), flag1 | flag2, I18n::get(description)
    );
}
