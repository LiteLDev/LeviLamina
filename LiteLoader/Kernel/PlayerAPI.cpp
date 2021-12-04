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

void Player::sendTextPacket(string text, TextType Type) {
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

void Player::sendTitlePacket(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration) {
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

void Player::sendNotePacket(unsigned int tone) {
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

void Player::sendSpawnParticleEffectPacket(Vec3 spawnpos, int dimid, string ParticleName, int64_t EntityUniqueID) {
    BinaryStream wp;
    wp.writeUnsignedChar(dimid);
    //If EntityUniqueID is not -1, the Position below will be interpreted as relative to the position of the entity associated with this unique ID.
    wp.writeVarInt64(EntityUniqueID);
    wp.writeFloat(spawnpos.x);
    wp.writeFloat(spawnpos.y);
    wp.writeFloat(spawnpos.z);
    //ParticleName is the name of the particle that should be shown. This name may point to a particle effect that is built-in, or to one implemented by behaviour packs.
    wp.writeString(ParticleName);
    MyPkt<0x76> pkts{wp.getAndReleaseData()};
    sendNetworkPacket(pkts);
}

//bad
void Player::sendPlaySoundPacket(string Soundname, Vec3 Position, float Volume, float Pitch) {
    BinaryStream wp;
    wp.reserve(Soundname.size());
    wp.writeString(Soundname);
    wp.writeVarInt(Position.x);
    wp.writeUnsignedVarInt(Position.y * 8);
    wp.writeVarInt(Position.z);
    wp.writeFloat(Volume);
    wp.writeFloat(Pitch);
    MyPkt<0x56> pkts{wp.getAndReleaseData()};
    sendNetworkPacket(pkts);
}

void setDataItem(BinaryStream wp, vector<FakeDataItem> a3) {
    wp.writeUnsignedVarInt(a3.size());
    for (auto& i : a3) {
        wp.writeUnsignedVarInt(i.id);
        wp.writeUnsignedVarInt((int)i.type);
        std::cout << (int)i.type << std::endl;
        switch ((int)i.type) {
            case 0:
                wp.writeUnsignedChar(i.byte);
                break;
            case 1:
                wp.writeUnsignedShort(i.shorts);
                break;
            case 2:
                wp.writeVarInt(i.ints);
                break;
            case 3:
                wp.writeFloat(i.floats);
                break;
            case 4:        
                wp.writeString(i.strings);
                break;
            case 5:

                break;//NBT
            case 6:
                wp.writeVarInt(i.bpos.x);
                wp.writeVarInt(i.bpos.y);
                wp.writeVarInt(i.bpos.z);
                break;
            case 7:
                wp.writeVarInt64(i.longs);
                break;
            case 8:
                wp.writeFloat(i.vec3.x);
                wp.writeFloat(i.vec3.y);
                wp.writeFloat(i.vec3.z);
                break;
            default:
                return;
        }
    }
}

void Player::sendAddItemEntityPacket(unsigned long long runtimeid, int itemid, int stacksize, short aux, Vec3 pos, vector<FakeDataItem> DataItem) {
    BinaryStream wp;
    wp.writeVarInt64(runtimeid);                                   //RuntimeId
    wp.writeUnsignedVarInt64(runtimeid);                           //EntityId
    wp.writeVarInt(itemid);                                        //ItemId
    wp.writeUnsignedShort(static_cast<unsigned short>(stacksize)); //StackSize
    wp.writeUnsignedVarInt(aux);                                   //Aux
    wp.writeBool(1);
    wp.writeUnsignedVarInt(110);
    wp.writeVarInt(0);
    wp.writeString("minecraft:apple"); 
    wp.writeFloat(pos.x);
    wp.writeFloat(pos.y);
    wp.writeFloat(pos.z);
    wp.writeFloat(pos.x);
    wp.writeFloat(pos.y);
    wp.writeFloat(pos.z); 
    setDataItem(wp, DataItem); //EntityMetadata & DataItem
    wp.writeBool(1);
    MyPkt<0x0F> pk{wp.getAndReleaseData()};
    sendNetworkPacket(pk);
}

void Player::sendAddEntityPacket(unsigned long long runtimeid, string entitytype, Vec3 pos, Vec3 rotation, vector<FakeDataItem> DataItem) {
    BinaryStream wp;
    wp.writeVarInt64(runtimeid); //RuntimeId
    wp.writeUnsignedVarInt64(runtimeid);  //EntityId
    wp.writeString(entitytype);
    wp.writeFloat(pos.x);       //pos
    wp.writeFloat(pos.y);
    wp.writeFloat(pos.z);
    wp.writeFloat(0);
    wp.writeFloat(0);
    wp.writeFloat(0);
    wp.writeFloat(rotation.x); //rotation
    wp.writeFloat(rotation.y);
    wp.writeFloat(rotation.z);
    wp.writeUnsignedVarInt(0); //attr
    setDataItem(wp, DataItem); //EntityMetadata & DataItem
    wp.writeUnsignedVarInt(0); //entity link
    MyPkt<0xd> pk{wp.getAndReleaseData()};
    sendNetworkPacket(pk);
}
/**
void Player::sendUpdateBlockPacket(BlockPos blockpos, int blockid, UpdateBlockFlags UpdateBlockType, int Layer) {
    BinaryStream wp;
    wp.writeVarInt(blockpos.x);
    wp.writeVarInt(blockpos.y);
    wp.writeVarInt(blockpos.z);
    wp.writeUnsignedVarInt(blockid);
    wp.writeUnsignedVarInt((int)UpdateBlockFlags::BlockUpdateNetwork);
    wp.writeUnsignedVarInt(blockid);
    wp.writeUnsignedVarInt(Layer);
    MyPkt<0x15> pk{wp.getAndReleaseData()};
    sendNetworkPacket(pk);
}

#include <MC/Tag.hpp>
#include <MC/CompoundTag.hpp>
void Player::sendBlockActorDataPacket(BlockPos blockpos, CompoundTag* nametag) {
    BinaryStream wps;
    wps.dwrite(blockpos.x);
    wps.dwrite(blockpos.y);
    wps.dwrite(blockpos.z);
    wps.dwrite(nametag);
    MyPkt<0x38> pk{wps.getAndReleaseData()};
    sendNetworkPacket(*pk);
}


void Player::sendContainerOpenPacket(BlockPos blockpos, unsigned char windowsid, ContainerType type, int64_t ContainerEntityUniqueID) {
    BinaryStream wp;
    wp.writeUnsignedChar(windowsid);
    wp.writeUnsignedChar((unsigned char)type);
    wp.writeVarInt(blockpos.x);
    wp.writeUnsignedVarInt(blockpos.y);
    wp.writeVarInt(blockpos.z);
    wp.writeVarInt64(ContainerEntityUniqueID);
    MyPkt<0x2E> pk{wp.getAndReleaseData()};
    sendNetworkPacket(pk);
}
*/