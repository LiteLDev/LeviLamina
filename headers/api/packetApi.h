#pragma once
#include <api\myPacket.h>
#include <api\types\types.h>
#include <mc/Player.h>

namespace packetapi {
LIAPI MyPkt<MinecraftPacketIds(0x09)> CreateTextPacket(TextType tp, std::string text);
LIAPI MyPkt<MinecraftPacketIds(0x55), false> CreateTransferPacket(std::string address, int port);
}