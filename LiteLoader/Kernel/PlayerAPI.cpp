#include <MC/Minecraft.hpp>

#include <MC/Actor.hpp>
#include <MC/Mob.hpp>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>

#include <MC/Certificate.hpp>
#include <MC/CompoundTag.hpp>

#include <MC/NetworkHandler.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/NetworkIdentifier.hpp>
#include <MC/NetworkPeer.hpp>

#include <MC/ExtendedCertificate.hpp>
#include <MC/ConnectionRequest.hpp>
#include <MC/MinecraftPackets.hpp>
#include <MC/CommandRequestPacket.hpp>
#include <MC/TextPacket.hpp>
#include <MC/ScorePacketInfo.hpp>
#include <SendPacketAPI.h>
#include <MC/TransferPacket.hpp>

#include <MC/Level.hpp>
#include <MC/ItemStack.hpp>
#include <MC/ScriptItemStack.hpp>
#include <MC/Container.hpp>
#include <MC/SimpleContainer.hpp>
#include <MC/Scoreboard.hpp>

#include <EventAPI.h>
#include <bitset>

UserEntityIdentifierComponent* Player::getUserEntityIdentifierComponent() {
    return Mob::getUserEntityIdentifierComponent();
}

NetworkIdentifier* Player::getNetworkIdentifier() {
    return (NetworkIdentifier*)(getUserEntityIdentifierComponent());
}


Certificate* Player::getCertificate() {
    UserEntityIdentifierComponent* ueic = getUserEntityIdentifierComponent();
    if (ueic) {
        return dAccess<Certificate*, 184>(ueic);
    }
    return nullptr;
}

std::string Player::getRealName() {
    return ExtendedCertificate::getIdentityName(*getCertificate());
}

int Player::getAvgPing() {
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().avgping;
}

int Player::getLastPing() {
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().ping;
}

string Player::getIP()
{
    return getNetworkIdentifier()->getIP();
}

string Player::getLanguageCode() {
    auto map = Global<ServerNetworkHandler>->fetchConnectionRequest(*getNetworkIdentifier()).rawToken.get()->dataInfo.value_.map_;
    for (auto iter = map->begin(); iter != map->end(); ++iter) {
        string s(iter->first.c_str());
        if (s.find("LanguageCode") != s.npos) {
            auto langcode = iter->second.value_.string_;
            return langcode;
        }
    }
    return "unkown";
}

string Player::getServerAddress() {
    auto map = Global<ServerNetworkHandler>->fetchConnectionRequest(*getNetworkIdentifier()).rawToken.get()->dataInfo.value_.map_;
    for (auto iter = map->begin(); iter != map->end(); ++iter) {
        string s(iter->first.c_str());
        if (s.find("ServerAddress") != s.npos) {
            auto ServerAddress = iter->second.value_.string_;
            return ServerAddress;
        }
    }
    return "unkown";
}

string Player::getDeviceTypeName() {
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

bool Player::kick(string msg) {
    NetworkIdentifier* netid = getNetworkIdentifier();
    Global<Minecraft>->getServerNetworkHandler()->disconnectClient(*netid, msg, 0);
    return true;
}

bool Player::sendText(string text, TextType type)
{
    return sendTextPacket(text, type);
}

bool Player::talkAs(const string& msg)
{
    return sendTextTalkPacket(msg);
}

bool Player::giveItem(ItemStack* item) {
    return this->add(*item);
}

int Player::clearItem(string typeName) {
    int res = 0;

    //Hand
    ItemStack* item = getHandSlot();
    if (item->getTypeName() == typeName) {
        item->setNull();
        ++res;
    }

    //OffHand
    item = (ItemStack*)&getOffhandSlot();
    if (item->getTypeName() == typeName) {
        item->setNull();
        ++res;
    }

    //Inventory
    Container* container = &getInventory();
    auto items = container->getAllSlots();
    int size = container->getSize();
    for (int i = 0; i < size; ++i) {
        if (items[i]->getTypeName() == typeName) {
            int cnt = items[i]->getCount();
            container->removeItem(i, cnt);
            res += cnt;
        }
    }

    //Armor
    auto& armor = getArmorContainer();
    items = armor.getAllSlots();
    size = armor.getSize();
    for (int i = 0; i < size; ++i) {
        if (items[i]->getTypeName() == typeName) {
            int cnt = items[i]->getCount();
            armor.removeItem(i, cnt);
            res += cnt;
        }
    }
    refreshInventory();
    return res;
}

string Player::getName() {
    return getNameTag();
}

bool Player::runcmd(const string& cmd) {
    return Level::runcmdAs(this, cmd);
}

Container* Player::getEnderChestContainer() {
    return dAccess<Container*>(this, 4200); //IDA Player::Player() 782
}

bool Player::transferServer(const string& address, unsigned short port) {
    BinaryStream wp;
    wp.reserve(8 + address.size());
    wp.writeString(address);
    wp.writeUnsignedShort(port);
    NetworkPacket<85> pkt{wp.getAndReleaseData()};
    sendNetworkPacket(pkt);
    return true;
}

std::pair<BlockPos, int> Player::getRespawnPosition() {
    BlockPos bp = getSpawnPosition();
    int dimId = getSpawnDimension();
    if (dimId == 3) // has no bed.
    {
        bp = getExpectedSpawnPosition();
        dimId = getExpectedSpawnDimensionId();
    }

    return {bp, dimId};
}

CompoundTag* Player::getNbt() {
    return CompoundTag::fromPlayer(this);
}

bool Player::setNbt(CompoundTag* nbt) {
    nbt->setPlayer(this);
    return true;
}

string Player::getUuid() {
    auto ueic = getUserEntityIdentifierComponent();
    if (!ueic)
        return "";
    auto uuid = (void*)((uintptr_t)ueic + 168);
    string uuidStr;
    SymCall("?asString@UUID@mce@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ",
            string*, void*, string*)(uuid, &uuidStr);
    return uuidStr;
}

float Player::getAvgPacketLoss() {
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().avgpacketloss;
}

string Player::getClientId() {
    return Global<ServerNetworkHandler>->fetchConnectionRequest(*getNetworkIdentifier()).getDeviceId();
}

int Player::getDeviceType() {
    return getPlatform();
}

bool Player::crashClient() {
    Packet* pkt = MinecraftPackets::createPacket(58);
    dAccess<bool, 56>(pkt) = 1;
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::setSidebar(std::string title, const std::vector<std::pair<std::string, int>>& data, ObjectiveSortOrder sortOrder)
{
    sendSetDisplayObjectivePacket(title, "FakeScoreObj", (char)sortOrder);

    vector<ScorePacketInfo> info;
    for (auto& x : data)
    {
        const ScoreboardId& id = ::Global<Scoreboard>->createScoreboardId(x.first);
        ScorePacketInfo i((ScoreboardId*)&id, x.second, x.first);
        info.emplace_back(i);
    }

    sendSetScorePacket(0, info);
    return sendSetDisplayObjectivePacket(title, "FakeScoreObj", (char)sortOrder);
}

bool Player::removeSidebar()
{
    return sendSetDisplayObjectivePacket("", "", (char)0);
}

int Player::getScore(string key)
{
    return ::Global<Scoreboard>->getScore(this, key);
}

bool Player::setScore(string key, int value)
{
    return ::Global<Scoreboard>->setScore(this, key, value);
}

bool Player::addScore(string key, int value)
{
    return ::Global<Scoreboard>->addScore(this, key, value);
}

bool Player::reduceScore(string key, int value)
{
    return ::Global<Scoreboard>->reduceScore(this, key, value);
}

bool Player::deleteScore(string key)
{
    return ::Global<Scoreboard>->deleteScore(this, key);
}


////////////////////////// Packet //////////////////////////

bool Player::sendTextPacket(string text, TextType Type) {
    BinaryStream wp;
    wp.reserve(8 + text.size());
    wp.writeUnsignedChar((char)Type);
    wp.writeBool(true);
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
    TextPacket pkt;
    pkt.write(wp);
    sendNetworkPacket(pkt);
    return true;
}

bool Player::sendTitlePacket(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration) {
    BinaryStream wp;
    wp.reserve(8 + text.size());
    wp.writeVarInt((int)Type);
    wp.writeString(text);
    wp.writeVarInt(FadeInDuration);
    wp.writeVarInt(RemainDuration);
    wp.writeVarInt(FadeOutDuration);
    wp.writeString(getXuid());
    wp.writeString("");
    NetworkPacket<0x58> pkt{wp.getAndReleaseData()};
    sendNetworkPacket(pkt);
    return true;
}

bool Player::sendNotePacket(unsigned int tone) {
    if (tone == 0) {
        return false;
    }
    BinaryStream wp;
    wp.writeUnsignedChar(82);
    wp.writeFloat(getPos().x);
    wp.writeFloat(getPos().y);
    wp.writeFloat(getPos().z);
    wp.writeVarInt(tone * 2);
    wp.writeString("");
    wp.writeBool(0);
    wp.writeBool(1);
    NetworkPacket<0x7B> pkts{wp.getAndReleaseData()};
    sendNetworkPacket(pkts);
    return true;
}

bool Player::sendSpawnParticleEffectPacket(Vec3 spawnpos, int dimid, string ParticleName, int64_t EntityUniqueID) {
    BinaryStream wp;
    wp.writeUnsignedChar(dimid);
    //If EntityUniqueID is not -1, the Position below will be interpreted as relative to the position of the entity associated with this unique ID.
    wp.writeVarInt64(EntityUniqueID);
    wp.writeFloat(spawnpos.x);
    wp.writeFloat(spawnpos.y);
    wp.writeFloat(spawnpos.z);
    //ParticleName is the name of the particle that should be shown. This name may point to a particle effect that is built-in, or to one implemented by behaviour packs.
    wp.writeString(ParticleName);
    NetworkPacket<0x76> pkts{wp.getAndReleaseData()};
    sendNetworkPacket(pkts);
    return true;
}

//bad
bool Player::sendPlaySoundPacket(string Soundname, Vec3 Position, float Volume, float Pitch) {
    BinaryStream wp;
    wp.reserve(Soundname.size());
    wp.writeString(Soundname);
    wp.writeVarInt((int)Position.x);
    wp.writeUnsignedVarInt((unsigned int)(Position.y * 8));
    wp.writeVarInt((int)(Position.z));
    wp.writeFloat(Volume);
    wp.writeFloat(Pitch);
    NetworkPacket<0x56> pkts{wp.getAndReleaseData()};
    sendNetworkPacket(pkts);
    return true;
}

void setDataItem(BinaryStream& wp, vector<FakeDataItem> a3) {
    wp.writeUnsignedVarInt(a3.size());
    for (auto& i : a3) {
        wp.writeUnsignedVarInt(i.id);
        wp.writeUnsignedVarInt((int)i.type);
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

                break; //NBT
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

bool Player::sendAddItemEntityPacket(unsigned long long runtimeid, int itemid, int stacksize, short aux, Vec3 pos, vector<FakeDataItem> DataItem) {
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
    NetworkPacket<0x0F> pk{wp.getAndReleaseData()};
    sendNetworkPacket(pk);
    return true;
}

bool Player::sendAddEntityPacket(unsigned long long runtimeid, string entitytype, Vec3 pos, Vec3 rotation, vector<FakeDataItem> DataItem) {
    BinaryStream wp;
    wp.writeVarInt64(runtimeid);         //RuntimeId
    wp.writeUnsignedVarInt64(runtimeid); //EntityId
    wp.writeString(entitytype);
    wp.writeFloat(pos.x); //pos
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
    NetworkPacket<0xd> pk{wp.getAndReleaseData()};
    sendNetworkPacket(pk);
    return true;
}

bool Player::sendTransferPacket(const string& address, short port) {
    BinaryStream bs;
    bs.writeString(address);
    bs.writeUnsignedShort(port);
    TransferPacket pkt;
    pkt.write(bs);
    sendNetworkPacket(pkt);
    return true;
}

bool Player::sendSetDisplayObjectivePacket(const string& title, const string& name, char sortOrder) {
    BinaryStream wp;
    wp.writeString("sidebar");
    wp.writeString(name);
    wp.writeString(title);
    wp.writeString("dummy");
    wp.writeVarInt(sortOrder);
    NetworkPacket<107> pk{wp.getAndReleaseData()};
    sendNetworkPacket(pk);
    return true;
}

bool Player::sendSetScorePacket(char type, const vector<ScorePacketInfo>& data) {
    auto packet = MinecraftPackets::createPacket(0x6c);
    dAccess<char>(packet, 48) = type;
    dAccess<vector<ScorePacketInfo>>(packet, 56) = data;
    sendNetworkPacket(*packet);
    return true;
}

#include <MC/BossEventPacket.hpp>
bool Player::sendBossEventPacket(BossEvent type, string name, float percent, BossEventColour colour, int overlay)
{
    BinaryStream wp;
    char tmp[0x90];
    auto pkt = SymCall("??0BossEventPacket@@QEAA@XZ", BossEventPacket*, void*)(tmp);
    dAccess<ActorUniqueID, 56>(pkt) = getUniqueID();
    dAccess<BossEvent, 72>(pkt) = type;
    dAccess<gsl::string_span<-1>, 80>(pkt) = gsl::string_span<-1>(name);
    dAccess<float, 112>(pkt) = percent;
    dAccess<ActorUniqueID, 64>(pkt) = getUniqueID();
    dAccess<int, 124>(pkt) = 1;
    dAccess<BossEventColour, 116>(pkt) = colour;
    dAccess<int, 120>(pkt) = overlay;
    sendNetworkPacket(*pkt);
    return true;
    //wp.writeVarInt64(getActorUniqueId().get());
    //wp.writeUnsignedVarInt((int)type);
    //switch (type)
    //{
    //    case BossEvent::Show:
    //        wp.writeString(name);
    //        wp.writeFloat(percent);
    //        wp.writeUnsignedShort(1);
    //        wp.writeUnsignedVarInt((int)colour);
    //        wp.writeUnsignedVarInt(overlay);
    //        break;
    //    case BossEvent::Hide:
    //        break;
    //    case BossEvent::RegisterPlayer:
    //    case BossEvent::UnregisterPlayer:
    //        wp.writeVarInt64(getActorUniqueId().get());
    //        break;
    //    case BossEvent::HealthPercentage:
    //        wp.writeFloat(percent);
    //        break;
    //    case BossEvent::Title:
    //        wp.writeString(name);
    //        break;
    //    case BossEvent::AppearanceProperties:
    //        wp.writeUnsignedShort(1);
    //        wp.writeUnsignedVarInt((int)colour);
    //        wp.writeUnsignedVarInt(overlay);
    //        break;
    //    case BossEvent::Texture:
    //        wp.writeUnsignedVarInt((int)colour);
    //        wp.writeUnsignedVarInt(overlay);
    //        break;
    //    default:
    //        return false;
    //}
    //NetworkPacket<0x4a> pk{wp.getAndReleaseData()};
    //sendNetworkPacket(pk);
    //return true;
}

bool Player::sendCommandRequestPacket(const string& cmd) {
    auto packet = MinecraftPackets::createPacket(0x4d);
    dAccess<string, 48>(packet) = cmd;
    NetworkIdentifier* nid = getNetworkIdentifier();
    Global<ServerNetworkHandler>->handle(*getNetworkIdentifier(), *((CommandRequestPacket*)packet));
    return true;
}

bool Player::sendTextTalkPacket(const string& msg) {
    auto packet = MinecraftPackets::createPacket(0x09);
    dAccess<unsigned char, 48>(packet) = 1;
    dAccess<string, 56>(packet) = "";
    dAccess<string, 88>(packet) = msg;
    Global<ServerNetworkHandler>->handle(*getNetworkIdentifier(), *((TextPacket*)packet));
    return true;
}

bool Player::isValid(Player* player)
{
    auto pls = Level::getAllPlayers();
    for (auto& pl : pls)
        if (pl == player)
            return true;
    return false;
}