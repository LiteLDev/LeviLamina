#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
#include <EventAPI.h>
#include <Main/Config.h>
#include <MC/ItemStack.hpp>
#include <MC/CommandParameterData.hpp>
#include <MC/CommandRegistry.hpp>
#include <magic_enum/magic_enum.hpp>
using namespace Event;


void RegisterSimpleServerLogger()
{
    if (LL::globalConfig.enableSimpleServerLogger)
    {
        Event::PlayerChatEvent::subscribe([](const Event::PlayerChatEvent& ev) {
            static Logger logger("Chat");
            logger.info("<{}> {}", ev.mPlayer->getRealName(), ev.mMessage);
            return true;
        });
        Event::PlayerCmdEvent::subscribe([](const Event::PlayerCmdEvent& ev) {
            static Logger logger("Command");
            logger.info("<{}> /{}", ev.mPlayer->getRealName(), ev.mCommand);
            return true;
        });
    }
}

#include <MC/Command.hpp>
TInstanceHook(void, "?setPermissions@Player@@UEAAXW4CommandPermissionLevel@@@Z",
              Player, CommandPermissionLevel perm)
{
    if (LL::globalConfig.enableSimpleServerLogger)
    {
        static Logger logger("Permissions");
        logger.info("<{}> {}({}) -> {}({})",
                    getRealName(), magic_enum::enum_name(getCommandPermissionLevel()), (int)getCommandPermissionLevel(), magic_enum::enum_name(perm), (int)perm);
    }
}

// ==> LiteLoader/Main/BuiltinUnlockCmd.cpp
#include <MC/I18n.hpp>
void LogCommandRegistration(std::string const& name, char const* description, enum CommandPermissionLevel perm, short flag1, short flag2)
{
    static Logger logger("RegsterCommand");
    logger.consoleLevel = logger.debug.level;
    logger.debug("{:<18} - {:<12} - {}", name, magic_enum::enum_name(perm), I18n::get(description));
}
