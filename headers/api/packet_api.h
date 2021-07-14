#pragma once
#include <api/myPacket.h>
#include <api/types/helper.h>
#include <api\types\types.h>
#include <loader/Loader.h>
#include <mc\Actor.h>
#include <mc\Player.h>
#include <stl/Bstream.h>
#include <stl/varint.h>
#include <string>

void Player::sendText(string_view text, TextType tp) {
    WBStream txtpkws;
    txtpkws.data.reserve(8 + text.size());
    txtpkws.apply((char)tp, (char)0, MCString(text));
    MyPkt<9> pk{txtpkws.data};
    ((ServerPlayer *)this)->sendNetworkPacket(pk);
}
