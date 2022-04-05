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