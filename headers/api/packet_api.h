#pragma once
#include <loader/Loader.h>
#include <string>
#include <api/types/helper.h>
#include <mc\Actor.h>
#include <mc\Player.h>
#include<api/myPacket.h>
#include<stl/Bstream.h>
#include<stl/varint.h>
#include <api\types\types.h>

void Player::sendText(string_view text, TextType tp) {
	WBStream txtpkws;
	txtpkws.data.reserve(8 + text.size());
	txtpkws.apply((char)tp, (char)0, MCString(text));
	MyPkt<9> pk{ txtpkws.data };
	((ServerPlayer*)this)->sendNetworkPacket(pk);
}

