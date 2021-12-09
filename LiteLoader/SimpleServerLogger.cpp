#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
#include <EventAPI.h>
#include <Config.h>
#include <Utils/StringHelper.h>
using namespace Event;

bool onPlayerChat(const PlayerChatEvent &e) {
    Logger::Info("[Chat] {} > {}", e.mPlayer->getRealName(), FixCurlyBracket(e.mMessage));
    return true;
}

bool onPlayerCmd(PlayerCmdEvent e) {
    Logger::Info("[Command] {} /{}", e.mPlayer->getRealName(),FixCurlyBracket(e.mCommand));
    return true;
}

void RegisterSimpleServerLogger() {
    if (LL::globalConfig.enableSimpleServerLogger)
    {
        Event::PlayerChatEvent::subscribe(onPlayerChat);
        Event::PlayerCmdEvent::subscribe(onPlayerCmd);
    }
}