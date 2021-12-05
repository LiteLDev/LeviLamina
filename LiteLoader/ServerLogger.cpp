#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
#include <EventAPI.h>

bool onPlayerChat(ChatEvent e) {
    Logger::Info("[Chat] {} > {}", e.player->getRealName(), e.msg);
    return true;
}

bool onPlayerCmd(PlayerCmdEvent e) {
    Logger::Info("[CMD] {} /{}", e.player->getRealName(), e.cmd);
    return true;
}

void RegisterServerLogger() {
    Event::addEventListener(onPlayerChat);
    Event::addEventListener(onPlayerCmd);
}