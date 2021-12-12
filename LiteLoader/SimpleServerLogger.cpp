#include <Global.h>
#include <MC/ServerPlayer.hpp>
#include <EventAPI.h>
#include <Config.h>
#include <Utils/StringHelper.h>
using namespace Event;

bool onPlayerChat(const PlayerChatEvent &e) {
    Logger("Chat").info("<{}> {}", e.mPlayer->getRealName(), e.mMessage);
    return true;
}

bool onPlayerCmd(PlayerCmdEvent e) {
    Logger("Command").info("<{}> /{}", e.mPlayer->getRealName(),e.mCommand);
    return true;
}

void RegisterSimpleServerLogger() {
    if (LL::globalConfig.enableSimpleServerLogger)
    {
        Event::PlayerChatEvent::subscribe(onPlayerChat);
        Event::PlayerCmdEvent::subscribe(onPlayerCmd);
    }
}