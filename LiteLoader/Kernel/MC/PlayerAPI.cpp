﻿#include <MC/Minecraft.hpp>

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
#include <MC/BinaryStream.hpp>
#include <MC/TransferPacket.hpp>

#include <MC/Level.hpp>
#include <MC/ItemStack.hpp>
#include <MC/ScriptItemStack.hpp>
#include <MC/Container.hpp>
#include <MC/SimpleContainer.hpp>
#include <MC/Scoreboard.hpp>
#include <MC/PlaySoundPacket.hpp>
#include <MC/SetDisplayObjectivePacket.hpp>

#include <Impl/ObjectivePacketHelper.h>
#include <Impl/FormPacketHelper.h>
#include <EventAPI.h>
#include <bitset>

NetworkIdentifier* Player::getNetworkIdentifier() 
{
    return (NetworkIdentifier*)(getUserEntityIdentifierComponent());
}


Certificate* Player::getCertificate() 
{
    UserEntityIdentifierComponent* ueic = getUserEntityIdentifierComponent();
    if (ueic) {
        return dAccess<Certificate*, 184>(ueic);
    }
    return nullptr;
}

std::string Player::getRealName() 
{
    if (isSimulatedPlayer())
        return getName();
    return ExtendedCertificate::getIdentityName(*getCertificate());
}

int Player::getAvgPing() 
{
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().avgping;
}

int Player::getLastPing() 
{
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().ping;
}

string Player::getIP()
{
    return getNetworkIdentifier()->getIP();
}

string Player::getLanguageCode() 
{
    auto map = Global<ServerNetworkHandler>->fetchConnectionRequest(*getNetworkIdentifier()).rawToken.get()->dataInfo.value_.map_;
    for (auto & iter : *map) 
    {
        string s(iter.first.c_str());
        if (s.find("LanguageCode") != std::string::npos) 
        {
            auto langCode = iter.second.value_.string_;
            return langCode;
        }
    }
    return "unknown";
}

string Player::getServerAddress() 
{
    auto map = Global<ServerNetworkHandler>->fetchConnectionRequest(*getNetworkIdentifier()).rawToken.get()->dataInfo.value_.map_;
    for (auto iter = map->begin(); iter != map->end(); ++iter) 
    {
        string s(iter->first.c_str());
        if (s.find("ServerAddress") != s.npos) 
        {
            auto ServerAddress = iter->second.value_.string_;
            return ServerAddress;
        }
    }
    return "unknown";
}

string Player::getDeviceTypeName() 
{
    switch ((int)getPlatform()) 
    {
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

bool Player::kick(const string& msg) 
{
    NetworkIdentifier* pNetworkIdentifier = getNetworkIdentifier();
    Global<Minecraft>->getServerNetworkHandler()->disconnectClient(*pNetworkIdentifier, msg, 0);
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

bool Player::giveItem(ItemStack* item) 
{
    if (!this->add(*item))
        return false;
    refreshInventory();
    return true;
}

int Player::clearItem(string typeName) 
{
    int res = 0;

    //Hand
    ItemStack* item = getHandSlot();
    if (item->getTypeName() == typeName) 
    {
        item->setNull();
        ++res;
    }

    //OffHand
    item = (ItemStack*)&getOffhandSlot();
    if (item->getTypeName() == typeName) 
    {
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

string Player::getName() 
{
    return getNameTag();
}

bool Player::runcmd(const string& cmd)
{
    return sendCommandRequestPacket(cmd);
}

Container* Player::getEnderChestContainer() 
{
    return dAccess<Container*>(this, 4200);//IDA Player::Player() 782
}

bool Player::transferServer(const string& address, unsigned short port)
{
    return sendTransferPacket(address, port);
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

std::unique_ptr<CompoundTag> Player::getNbt() 
{
    return CompoundTag::fromPlayer(this);
}

bool Player::setNbt(CompoundTag* nbt) 
{
    nbt->setPlayer(this);
    return true;
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

unsigned char Player::getClientSubId()
{
    auto ueic = getUserEntityIdentifierComponent();
    if (!ueic)
        return -1;
    return dAccess<unsigned char>(ueic, 160);
}

float Player::getAvgPacketLoss()
{
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().avgpacketloss;
}

string Player::getClientId() 
{
    return Global<ServerNetworkHandler>->fetchConnectionRequest(*getNetworkIdentifier()).getDeviceId();
}

int Player::getDeviceType() 
{
    return getPlatform();
}

bool Player::isOP()
{
    return (int)getPlayerPermissionLevel() >= 2;
}

bool Player::crashClient() 
{
    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::LevelChunk);
    dAccess<bool, 56>(pkt.get()) = 1;
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::setSidebar(const std::string& title, const std::vector<std::pair<std::string, int>>& data, ObjectiveSortOrder sortOrder)
{
    sendSetDisplayObjectivePacket(title, "FakeScoreObj", (char)sortOrder);

    vector<ScorePacketInfo> info;
    for (auto& x : data)
    {
        const ScoreboardId& id = ScoreboardId(NewScoreId());
        ScorePacketInfo i((ScoreboardId*)&id, "FakeScoreObj", IdentityDefinition::Type::Fake, x.second, x.first);
        info.emplace_back(i);
    }
    sendSetScorePacket(0, info);
    return sendSetDisplayObjectivePacket(title, "FakeScoreObj", (char)sortOrder);
}

bool Player::removeSidebar()
{
    return sendSetDisplayObjectivePacket("", "", (char)0);
}

int Player::getScore(const string& key)
{
    return Scoreboard::getScore(this, key);
}

bool Player::setScore(const string& key, int value)
{
    return Scoreboard::setScore(this, key, value);
}

bool Player::addScore(const string& key, int value)
{
    return Scoreboard::addScore(this, key, value);
}

bool Player::reduceScore(const string& key, int value)
{
    return Scoreboard::reduceScore(this, key, value);
}

bool Player::deleteScore(const string& key)
{
    return Scoreboard::deleteScore(this, key);
}


////////////////////////// Packet //////////////////////////

static_assert(sizeof(TextPacket) == 216);
static_assert(sizeof(PlaySoundPacket) == 152);
static_assert(sizeof(TransferPacket) == 88);

bool Player::sendTextPacket(string text, TextType Type) const
{
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
            break;
        case TextType::JSON_WHISPER:
            break;
    }
    wp.writeString("");
    wp.writeString("");

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::Text);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendTitlePacket(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration) const 
{
    BinaryStream wp;
    wp.reserve(8 + text.size());
    wp.writeVarInt((int)Type);
    wp.writeString(text);
    wp.writeVarInt(FadeInDuration);
    wp.writeVarInt(RemainDuration);
    wp.writeVarInt(FadeOutDuration);
    wp.writeString(getXuid());
    wp.writeString("");

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::SetTitle);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendNotePacket(unsigned int tone) 
{
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
    wp.writeBool(false);
    wp.writeBool(true);

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::LevelSoundEvent);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendSpawnParticleEffectPacket(Vec3 spawnPos, int dimID, string ParticleName, int64_t EntityUniqueID) const 
{
    BinaryStream wp;
    wp.writeUnsignedChar(dimID);
    //If EntityUniqueID is not -1, the Position below will be interpreted as relative to the position of the entity associated with this unique ID.
    wp.writeVarInt64(EntityUniqueID);
    wp.writeFloat(spawnPos.x);
    wp.writeFloat(spawnPos.y);
    wp.writeFloat(spawnPos.z);
    //ParticleName is the name of the particle that should be shown. This name may point to a particle effect that is built-in, or to one implemented by behaviour packs.
    wp.writeString(ParticleName);

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::SpawnParticleEffect);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendPlaySoundPacket(string SoundName, Vec3 Position, float Volume, float Pitch) const 
{
    PlaySoundPacket playSoundPkt(std::move(SoundName), Position, Volume, Pitch);
    sendNetworkPacket(playSoundPkt);
    return true;
}

void setDataItem(BinaryStream& wp, vector<FakeDataItem> a3) 
{
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

bool Player::sendAddItemEntityPacket(unsigned long long runtimeID, int itemID, int stackSize, short aux, Vec3 pos, vector<FakeDataItem> DataItem) const 
{
    BinaryStream wp;
    wp.writeVarInt64(runtimeID);                                   //RuntimeId
    wp.writeUnsignedVarInt64(runtimeID);                           //EntityId
    wp.writeVarInt(itemID);                                        //ItemId
    wp.writeUnsignedShort(static_cast<unsigned short>(stackSize)); //StackSize
    wp.writeUnsignedVarInt(aux);                                   //Aux
    wp.writeBool(true);
    wp.writeUnsignedVarInt(110);
    wp.writeVarInt(0);
    wp.writeString("minecraft:apple");
    wp.writeFloat(pos.x);
    wp.writeFloat(pos.y);
    wp.writeFloat(pos.z);
    wp.writeFloat(pos.x);
    wp.writeFloat(pos.y);
    wp.writeFloat(pos.z);
    setDataItem(wp, std::move(DataItem)); //EntityMetadata & DataItem
    wp.writeBool(true);

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::AddItemActor);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendAddEntityPacket(unsigned long long runtimeID, string entityType, Vec3 pos, Vec3 rotation, vector<FakeDataItem> DataItem) 
{
    BinaryStream wp;
    wp.writeVarInt64(runtimeID);         //RuntimeId
    wp.writeUnsignedVarInt64(runtimeID); //EntityId
    wp.writeString(entityType);
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

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::AddEntity);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendTransferPacket(const string& address, short port) const 
{
    TransferPacket transferPkt(address, port);
    sendNetworkPacket(transferPkt);
    return true;
}

bool Player::sendSetDisplayObjectivePacket(const string& title, const string& name, char sortOrder) const 
{
    sendNetworkPacket(SetDisplayObjectivePacket("sidebar", name, title, "dummy", ObjectiveSortOrder(sortOrder)));
    return true;
}

bool Player::sendSetScorePacket(char type, const vector<ScorePacketInfo>& data) 
{
    auto packet = MinecraftPackets::createPacket(0x6c);
    dAccess<char>(packet.get(), 48) = type;
    dAccess<vector<ScorePacketInfo>>(packet.get(), 56) = data;
    sendNetworkPacket(*packet);
    return true;
}

bool Player::sendBossEventPacket(BossEvent type, string name, float percent, BossEventColour colour, int overlay)
{
    /*
    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::BossEvent);
    dAccess<ActorUniqueID, 56>(pkt.get()) = getUniqueID();
    dAccess<BossEvent, 72>(pkt.get()) = type;
    dAccess<gsl::string_span<-1>, 80>(pkt.get()) = gsl::string_span<-1>(name);
    dAccess<float, 112>(pkt.get()) = percent;
    dAccess<ActorUniqueID, 64>(pkt.get()) = getUniqueID();
    dAccess<int, 124>(pkt.get()) = 1;
    dAccess<BossEventColour, 116>(pkt.get()) = colour;
    dAccess<int, 120>(pkt.get()) = overlay;
    sendNetworkPacket(*pkt);
    */
    BinaryStream wp;
    wp.writeVarInt64(getActorUniqueId().get());
    wp.writeUnsignedVarInt((int)type);
    switch (type)
    {
        case BossEvent::Show:
            wp.writeString(name);
            wp.writeFloat(percent);
            goto LABEL_3;
        case BossEvent::RegisterPlayer:
        case BossEvent::UnregisterPlayer:
        {
            wp.writeVarInt64(getActorUniqueId().get());
            break;
        }
        case BossEvent::HealthPercentage:
        {
            wp.writeFloat(percent);
            break;
        }
        case BossEvent::Title:
        {
            wp.writeString(name);
            break;
        }
        case BossEvent::AppearanceProperties:
        LABEL_3:
            wp.writeUnsignedShort(1);
            goto LABEL_4;
        case BossEvent::Texture:
        LABEL_4:
            wp.writeUnsignedVarInt((int)colour);
            wp.writeUnsignedVarInt(overlay);
            break;
    }

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::BossEvent);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendCommandRequestPacket(const string& cmd) 
{
    auto packet = MinecraftPackets::createPacket(0x4d);
    dAccess<string, 48>(packet.get()) = cmd;
    Global<ServerNetworkHandler>->handle(*getNetworkIdentifier(), *((CommandRequestPacket*)packet.get()));
    return true;
}

bool Player::sendTextTalkPacket(const string& msg) 
{
    auto packet = MinecraftPackets::createPacket(0x09);
    dAccess<unsigned char, 48>(packet.get()) = 1;
    dAccess<string, 56>(packet.get()) = "";
    dAccess<string, 88>(packet.get()) = msg;
    Global<ServerNetworkHandler>->handle(*getNetworkIdentifier(), *((TextPacket*)packet.get()));
    return true;
}

bool Player::sendRawFormPacket(unsigned formId, const string& data) const
{
    BinaryStream wp;
    wp.reserve(32 + data.size());
    wp.writeUnsignedVarInt(formId);
    wp.writeString(data);

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::ModalFormRequest);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendSimpleFormPacket(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(int)> callback) const
{
    string model = u8R"({"title": "%s","content":"%s","buttons":%s,"type":"form"})";
    model = model.replace(model.find("%s"), 2, title);
    model = model.replace(model.find("%s"), 2, content);

    fifo_json buttonText;
    for (int i = 0; i < buttons.size(); ++i)
    {
        fifo_json oneButton;
        oneButton["text"] = buttons[i];
        if (!images[i].empty())
        {
            fifo_json image;
            image["type"] = images[i].find("textures/") == 0 ? "path" : "url";
            image["data"] = images[i];
            oneButton["image"] = image;
        }
        buttonText.push_back(oneButton);
    }
    model = model.replace(model.find("%s"), 2, buttonText.dump());

    unsigned formId = NewFormId();
    if (!sendRawFormPacket(formId, model))
        return false;
    SetSimpleFormPacketCallback(formId, callback);
    return true;
}

bool Player::sendModalFormPacket(const string& title, const string& content, const string& button1, const string& button2, std::function<void(bool)> callback)
{
    string model = R"({"title":"%s","content":"%s","button1":"%s","button2":"%s","type":"modal"})";
    model = model.replace(model.find("%s"), 2, title);
    model = model.replace(model.find("%s"), 2, content);
    model = model.replace(model.find("%s"), 2, button1);
    model = model.replace(model.find("%s"), 2, button2);

    unsigned formId = NewFormId();
    if (!sendRawFormPacket(formId, model))
        return false;
    SetModalFormPacketCallback(formId, callback);
    return true;
}

bool Player::sendCustomFormPacket(const std::string& data, std::function<void(string)> callback)
{
    unsigned formId = NewFormId();
    if (!sendRawFormPacket(formId, data))
        return false;
    SetCustomFormPacketCallback(formId, callback);
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