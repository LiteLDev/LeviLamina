#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
#include <EventAPI.h>

bool onPlayerChat(ChatEvent e) {
    Logger::Info("[Chat] {} > {}", e.pl->getRealName(), e.msg);
    return true;
}

bool onPlayerCmd(PlayerCmdEvent e) {
    Logger::Info("[CMD] {} /{}", e.Player->getRealName(), e.cmd);
    return true;
}

void RegisterServerLogger() {
    Event::addEventListener(onPlayerChat);
    Event::addEventListener(onPlayerCmd);
}