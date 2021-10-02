#include <api\myPacket.h>
#include <api\types\types.h>
#include <debug\MemSearcher.h>
#include <lbpch.h>
#include <mc/Player.h>

namespace packetapi {
LIAPI void sendMessage(ServerPlayer* sp, TextType tp, std::string text) {
    WBStream txtpkws;
    txtpkws.data.reserve(8 + text.size());
    txtpkws.apply((char)tp, (char)0);
    switch (tp) {
        case CHAT:
        case WHISPER:
        case ANNOUNCEMENT:
            txtpkws.apply("Server");
        case RAW:
        case TIP:
        case SYSTEM:
        case JSON:
            txtpkws.apply(MCString(text));
            break;
        case TRANSLATION:
        case POPUP:
        case JUKEBOX_POPUP:
            txtpkws.apply(MCString(text));
            txtpkws.apply(0);
    }
    txtpkws.apply("", "");
    MyPkt<MinecraftPacketIds(0x09)> pk{txtpkws};
    sp->sendNetworkPacket(pk);
}
} // namespace packetapi