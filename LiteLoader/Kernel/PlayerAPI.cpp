#include <MC/Actor.hpp>
#include <MC/Mob.hpp>
#include <MC/Player.hpp>
#include <MC/NetworkIdentifier.hpp>
#include <MC/NetworkPeer.hpp>
#include <MC/NetworkHandler.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/Minecraft.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/Certificate.hpp>
#include <MC/ExtendedCertificate.hpp>
#include <MC/ItemStack.hpp>
#include <EventAPI.h>
#include <MC/ScriptItemStack.hpp>
#include <SendPacketAPI.h>
UserEntityIdentifierComponent* Player::getUserEntityIdentifierComponent() {
    return Mob::getUserEntityIdentifierComponent();
}

NetworkIdentifier* Player::getNetworkIdentifier(){
    return (NetworkIdentifier*)(getUserEntityIdentifierComponent());
}

Certificate* Player::getCert() {
    UserEntityIdentifierComponent* ueic = getUserEntityIdentifierComponent();
    if (ueic) {
        return dAccess<Certificate*, 184>(ueic);
    }
    return nullptr;
}

std::string Player::getRealName() {
    return ExtendedCertificate::getIdentityName(*getCert());
}

int Player::getAvgPing() {
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().avgping;
}

int Player::getLastPing() {
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().ping;
}

string Player::getLanguageCode() {
    for (auto& [i, j] : PlayerJoinData) {
        if (i == this->getRealName())
            if (j.first == "LanguageCode") {
                return j.second;
            }
    }
    return "unkown";
}

string Player::getDeviceName() {
    switch ((int)getPlatform()) {
        case -1:
            return u8"Unknown";
        case 1:
            return u8"Android";
        case 2:
            return u8"iOS";
        case 3:
            return u8"OSX";
        case 4:
            return u8"Amazon";
        case 5:
            return u8"GearVR";
        case 6:
            return u8"Hololens";
        case 7:
            return u8"Win10";
        case 8:
            return u8"WIN32";
        case 9:
            return u8"Dedicated";
        case 10:
            return u8"TVOS";
        case 11:
            return u8"PlayStation";
        case 12:
            return u8"Nintendo";
        case 13:
            return u8"Xbox";
        case 14:
            return u8"WindowsPhone";
        default:
            return u8"Unknown";
    }
}

void Player::kick(string msg) {
     NetworkIdentifier* netid = getNetworkIdentifier();
     Global<Minecraft>->getServerNetworkHandler()->disconnectClient(*netid, msg, 0);
}

string Player::getName()
{
    return getNameTag();
}

string Player::getUuid()
{
    auto ueic = getUserEntityIdentifierComponent();
    if (!ueic)
        return "";
    auto uuid = (void*)((uintptr_t)ueic + 168);
    string uuidStr;
    SymCall("?asString@UUID@mce@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ",
        string*, void*, string*)(uuid, &uuidStr);
    return uuidStr;
}


void Player::sendText(string text, TextType Type) {
    BinaryStream wp;
    wp.reserve(8 + text.size());
    wp.writeUnsignedChar((char)Type);
    wp.writeBool(false);
    switch (Type) {
        case TextType::CHAT:
        case TextType::WHISPER:
        case TextType::ANNOUNCEMENT:
            wp.writeString("Server");
        case TextType::RAW:
        case TextType::TIP:
        case TextType::SYSTEM:
        case TextType::JSON:
            wp.writeString(text);
            break;
        case TextType::TRANSLATION:
        case TextType::POPUP:
        case TextType::JUKEBOX_POPUP:
            wp.writeString(text);
            wp.writeVarInt(0);
    }
    wp.writeString("");
    wp.writeString("");
    MyPkt<0x09> pkt{wp.getAndReleaseData()};
    sendNetworkPacket(pkt);
}

void Player::sendTitle(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration) {
    BinaryStream wp;
    wp.reserve(8 + text.size());
    wp.writeVarInt((int)Type);
    wp.writeString(text);
    wp.writeVarInt(FadeInDuration);
    wp.writeVarInt(RemainDuration);
    wp.writeVarInt(FadeOutDuration);
    wp.writeString(getXuid());
    wp.writeString("");
    MyPkt<0x58> pkt{wp.getAndReleaseData()};
    sendNetworkPacket(pkt);
}
std::vector<unsigned int> Music_Tones;
unsigned short scale = 1;


void Player::sendNote(unsigned int tone) {
    if (tone == 0) {
        return;
    }
     BinaryStream wp;
     wp.writeUnsignedChar(81);
     wp.writeFloat(getPos().x);
     wp.writeFloat(getPos().y);
     wp.writeFloat(getPos().z);
     wp.writeVarInt(tone * 2);
     wp.writeString("");
     wp.writeBool(0);
     wp.writeBool(1);
     MyPkt<0x7B> pkts{wp.getAndReleaseData()};
     sendNetworkPacket(pkts);
}

/*
TClasslessInstanceHook(
    void,
    "?_sendInternal@NetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVPacket@@AEBV?$basic_string@DU?$char_traits@D@std@@"
    "V?$allocator@D@2@@std@@@Z",
    NetworkIdentifier const& id, Packet const& pkt, std::string& data) {
    auto stream = ReadOnlyBinaryStream(data, 0i64);
    auto pktid = stream.getUnsignedVarInt();
    auto pkthash = do_hash(data.c_str());
    auto pkttime = _time64(0);
    if (pktid == 0x58) {
        std::cout << "[Network][O][" << pkttime << "]\tLength:" << data.length() << "\tPktID:" << pktid << "[" << pkt.getName() << "]\tHash:" << pkthash << "\n";
    }
    original(this, id, pkt, data);
}
*/