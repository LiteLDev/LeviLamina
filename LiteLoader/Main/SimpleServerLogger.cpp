#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
#include <EventAPI.h>
#include <Main/Config.h>
#include <MC/ItemStack.hpp>
#include <MC/CommandParameterData.hpp>
#include <MC/CommandRegistry.hpp>
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

TInstanceHook(void, "?registerCommand@CommandRegistry@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDW4CommandPermissionLevel@@UCommandFlag@@3@Z", 
    CommandRegistry, std::string const& name, char const* description, enum CommandPermissionLevel perm, struct CommandFlag& flag1, struct CommandFlag& flag2)
{
    if (LL::globalConfig.debugMode)
    {
        static Logger logger("RegCommand");
        logger.debug("RegsterCommand \"{}\"");
    }
    return original(this, name, description, perm, flag1, flag2);
}