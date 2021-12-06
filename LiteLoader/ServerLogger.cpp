#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
#include <EventAPI.h>
using namespace Event;

bool onPlayerChat(const PlayerChatEvent &e) {
    Logger::Info("[Chat] {} > {}", e.player->getRealName(), e.msg);
    return true;
}

bool onPlayerCmd(PlayerCmdEvent e) {
    Logger::Info("[Command] {} /{}", e.player->getRealName(), e.cmd);
    return true;
}

void RegisterServerLogger() {
    Event::PlayerChatEvent::subscribe(onPlayerChat);
    Event::PlayerCmdEvent::subscribe(onPlayerCmd);
}