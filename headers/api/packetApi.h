#pragma once
#include <api\myPacket.h>
#include <api\types\types.h>
#include <mc/Player.h>

namespace packetapi {
LIAPI void sendMessage(ServerPlayer* sp, TextType tp, std::string text);
}