#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
#include <EventAPI.h>
#include <Config.h>
using namespace Event;

bool onPlayerChat(const PlayerChatEvent &e) {
    Logger::Info("[Chat] {} > {}", e.player->getRealName(), e.msg);
    return true;
}

bool onPlayerCmd(PlayerCmdEvent e) {
    Logger::Info("[Command] {} /{}", e.player->getRealName(), e.cmd);
    return true;
}

void RegisterSimpleServerLogger() {
    if (LL::globalConfig.enableSimpleServerLogger)
    {
        Event::PlayerChatEvent::subscribe(onPlayerChat);
        Event::PlayerCmdEvent::subscribe(onPlayerCmd);
    }
}