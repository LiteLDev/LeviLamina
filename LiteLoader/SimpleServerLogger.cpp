#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
#include <EventAPI.h>
#include <Config.h>
#include <Utils/StringHelper.h>
using namespace Event;


void RegisterSimpleServerLogger() {
    if (LL::globalConfig.enableSimpleServerLogger)
    {
        Event::PlayerChatEvent::subscribe([](const Event::PlayerChatEvent& ev) {
            Logger("Chat").info("<{}> {}", ev.mPlayer->getRealName(), ev.mMessage);
            return true;
        });
        Event::PlayerCmdEvent::subscribe([](const Event::PlayerCmdEvent& ev) {
            Logger("Command").info("<{}> /{}", ev.mPlayer->getRealName(), ev.mCommand);
            return true;
        });
    }
}