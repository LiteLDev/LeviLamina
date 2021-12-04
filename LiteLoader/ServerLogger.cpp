#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
#include <EventAPI.h>

bool onPlayerChat(ChatEV e) {
    Logger::Info("[Chat] {} > {}", e.pl->getRealName(), e.msg);
    return true;
}

bool onPlayerCmd(PlayerUseCmdEV e) {
    Logger::Info("[CMD] {} /{}", e.Player->getRealName(), e.cmd);
    return true;
}

void RegisterServerLogger() {
    Event::addEventListener(onPlayerChat);
    Event::addEventListener(onPlayerCmd);
}