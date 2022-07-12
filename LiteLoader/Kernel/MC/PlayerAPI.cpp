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
#include <MC/ToastRequestPacket.hpp>

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
#include <MC/Container.hpp>
#include <MC/SimpleContainer.hpp>
#include <MC/Scoreboard.hpp>
#include <MC/PlaySoundPacket.hpp>
#include <MC/SetDisplayObjectivePacket.hpp>
#include <MC/Block.hpp>
#include <MC/AttributeInstance.hpp>

#include <Impl/ObjectivePacketHelper.h>
#include <Impl/FormPacketHelper.h>
#include <EventAPI.h>
#include <bitset>
#include <MC/ItemStackDescriptor.hpp>
#include <MC/NetworkItemStackDescriptor.hpp>
#include <MC/ToastRequestPacket.hpp>

extern Logger logger;

NetworkIdentifier* Player::getNetworkIdentifier() 
{
    return (NetworkIdentifier*)(getUserEntityIdentifierComponent());
}


Certificate* Player::getCertificate() 
{
    UserEntityIdentifierComponent* ueic = getUserEntityIdentifierComponent();
    if (ueic) {
        return ueic->mCertificate.get();
    }
    return nullptr;
}

std::string Player::getRealName() 
{
    if (isSimulatedPlayer())
        return dAccess<std::string>(this, 2472);
    return ExtendedCertificate::getIdentityName(*getCertificate());
}

int Player::getAvgPing() 
{
    if (isSimulatedPlayer())
        return -1;
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().avgping;
}

int Player::getLastPing() 
{
    if (isSimulatedPlayer())
        return -1;
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().ping;
}

string Player::getIP()
{
    if (isSimulatedPlayer())
        return "127.0.0.1";
    return getNetworkIdentifier()->getIP();
}

#include <MC/Localization.hpp>
string Player::getLanguageCode()
{
    if (isSimulatedPlayer())
    {
        return I18n::getCurrentLanguage()->getFullLanguageCode();
    }
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
    if (isSimulatedPlayer())
        return "unknown";
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
            return "Unknown";
        case 1:
            return "Android";
        case 2:
            return "iOS";
        case 3:
            return "OSX";
        case 4:
            return "Amazon";
        case 5:
            return "GearVR";
        case 6:
            return "Hololens";
        case 7:
            return "Win10";
        case 8:
            return "WIN32";
        case 9:
            return "Dedicated";
        case 10:
            return "TVOS";
        case 11:
            return "PlayStation";
        case 12:
            return "Nintendo";
        case 13:
            return "Xbox";
        case 14:
            return "WindowsPhone";
        case 15:
            return "Linux";
        default:
            return "Unknown";
    }
}

bool Player::kick(const std::string& msg) 
{
    NetworkIdentifier* pNetworkIdentifier = getNetworkIdentifier();
    Global<ServerNetworkHandler>->disconnectClient(*pNetworkIdentifier, msg, 0);
    return true;
}

bool Player::sendText(const std::string& text, TextType type)
{
    return sendTextPacket(text, type);
}

bool Player::talkAs(const std::string& msg)
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
        auto out = item->getCount();
        item->setNull();
        res += out;
    }

    //OffHand
    item = (ItemStack*)&getOffhandSlot();
    if (item->getTypeName() == typeName) 
    {
        auto out = item->getCount();
        item->setNull();
        res += out;
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
    return dAccess<Container*>(this, 4960); // IDA Player::Player() 782
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
#include <MC/Attribute.hpp>
#include <MC/AttributeInstance.hpp>
#include <MC/HashedString.hpp>
#include <LiteLoader/Header/SendPacketAPI.h>
bool Player::refreshAttribute(class Attribute const& attribute)
{
    return refreshAttributes({&attribute});
}
bool Player::refreshAttributes(std::vector<Attribute const*> const& attributes)
{
    BinaryStream wp;
    wp.writeUnsignedVarInt64(getRuntimeID()); // EntityId
    wp.writeUnsignedVarInt((unsigned)attributes.size());
    for (auto attribute : attributes)
    {
        auto& instance = getAttribute(*attribute);
        wp.writeFloat(instance.getMinValue());
        wp.writeFloat(instance.getMaxValue());
        wp.writeFloat(instance.getCurrentValue());
        wp.writeFloat(instance.getDefaultValue(2));
        wp.writeString((*attribute).getName().getString());
    }
    wp.writeUnsignedVarInt64(0);
    auto pkt = MinecraftPackets::createPacket(0x1D);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

string Player::getUuid() 
{
    auto ueic = getUserEntityIdentifierComponent();
    if (!ueic)
        return "";
    return ueic->mUUID.asString();
}

unsigned char Player::getClientSubId()
{
    auto ueic = getUserEntityIdentifierComponent();
    if (!ueic)
        return -1;
    return ueic->mClientSubId;
}

float Player::getAvgPacketLoss()
{
    if (isSimulatedPlayer())
        return 0.f;
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().avgpacketloss;
}

string Player::getClientId() 
{
    if (isSimulatedPlayer())
        return "";
    return Global<ServerNetworkHandler>->fetchConnectionRequest(*getNetworkIdentifier()).getDeviceId();
}

int Player::getDeviceType() 
{
    return getPlatform();
}

bool Player::isOperator()
{
    return (int)getPlayerPermissionLevel() >= 2;
}

bool Player::isOP()
{
    return isOperator();
}

int Player::getCurrentExperience() {
    auto& attr = getAttribute(Player::EXPERIENCE);
    float currentExp = getXpNeededForNextLevel() * attr.getCurrentValue();
    return static_cast<int>(currentExp);
}

bool Player::setCurrentExperience(int exp) {
    auto attr = getMutableAttribute(Player::EXPERIENCE);
    if (!attr) return false;
    int levelExp = getXpNeededForNextLevel();
    attr->setCurrentValue(static_cast<float>(exp) / levelExp);
    return true;
}

size_t Player::getTotalExperience() {
    int level = getPlayerLevel();
    size_t exp = getTotalXpNeededForLevel(level);
    exp += getCurrentExperience();
    return exp;
}

bool Player::setTotalExperience(size_t exp) {
    resetPlayerLevel();
    if (exp <= INT32_MAX) {
        addExperience(static_cast<int>(exp));
        return true;
    } else {
        addExperience(INT32_MAX);
        size_t newExp = exp - INT32_MAX;
        if (exp <= INT32_MAX) {
            addExperience(static_cast<int>(exp));
        } else {
            // reach max level
            addExperience(INT32_MAX); 
        }
        return true;
    }
}

bool Player::reduceExperience(size_t exp) {
    auto attr = getMutableAttribute(Player::EXPERIENCE);
    if (!attr) return false;
    int neededExp = getXpNeededForNextLevel();
    int currExp = static_cast<int>(attr->getCurrentValue() * neededExp);
    if (exp <= currExp) {
        attr->setCurrentValue(static_cast<float>(currExp - exp) / neededExp);
        return true;
    }
    attr->setCurrentValue(0);
    size_t needExp = exp - currExp;
    int level = getPlayerLevel();
    while (level > 0) {
        addLevels(-1);
        int levelXp = getXpNeededForNextLevel();
        if (needExp < levelXp) {
            attr->setCurrentValue(static_cast<float>(levelXp - needExp) / getXpNeededForNextLevel());
            return true;
        }
        needExp -= levelXp;
        level = getPlayerLevel();
    }
    return false;
}

int Player::getXpNeededForLevel(int nextLevel) {
    int const level = nextLevel - 1;
    if (level / 15) {
        if (level / 15 == 1)
            return 5 * level - 38;
        else
            return 9 * level - 158;
    } else {
        return 2 * level + 7;
    }
}

size_t Player::getTotalXpNeededForLevel(int level) {
    size_t result = 0;
    for (int i = 1; i <= level; i++) {
        result += getXpNeededForLevel(i);
    }
    return result;
}

bool Player::crashClient() 
{
    if (isSimulatedPlayer())
        return false;
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

void Player::addBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay)
{
    BinaryStream wp;
    wp.writeVarInt64(uid);
    wp.writeUnsignedVarInt((int)0);
    wp.writeString(name);
    wp.writeFloat(percent);
    wp.writeUnsignedShort(1);
    wp.writeUnsignedVarInt((int)colour);
    wp.writeUnsignedVarInt(overlay);
    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::BossEvent);
    pkt->read(wp);
    sendAddEntityPacket(uid, "player", Vec3(getPos().x, (float)-70, getPos().z), Vec2{0, 0}, 0);
    sendNetworkPacket(*pkt);
}

void Player::removeBossEvent(int64_t uid)
{
    BinaryStream wp;
    wp.writeVarInt64(uid);
    wp.writeUnsignedVarInt((int)2);
    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::BossEvent);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
}

void Player::updateBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay)
{
    removeBossEvent(uid);
    addBossEvent(uid, name, percent, colour, overlay);
}


////////////////////////// Packet //////////////////////////

static_assert(sizeof(TextPacket) == 216);
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
        case TextType::JSON_WHISPER:
        case TextType::JSON:
            wp.writeString(text);
            break;
        case TextType::TRANSLATION:
        case TextType::POPUP:
        case TextType::JUKEBOX_POPUP:
            wp.writeString(text);
            wp.writeUnsignedVarInt(0);
            break;
    }
    wp.writeString("");
    wp.writeString("");

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::Text);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendToastPacket(string title, string msg) {
    sendNetworkPacket(ToastRequestPacket(title, msg));
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
    auto& PlayerPos = getPosition();
    wp.writeFloat(PlayerPos.x);
    wp.writeFloat(PlayerPos.y);
    wp.writeFloat(PlayerPos.z);
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

// Bad?
bool Player::sendAddItemEntityPacket(unsigned long long runtimeID, Item const& item, int stackSize, short aux, Vec3 pos, vector<std::unique_ptr<DataItem>> dataItems) const
{
    BinaryStream wp;
    wp.writeVarInt64(runtimeID);                                   //RuntimeId
    wp.writeUnsignedVarInt64(runtimeID);                           //EntityId

    // NetworkItemStackDescriptor
    ItemStackDescriptor desc(item, aux, stackSize, nullptr);
    NetworkItemStackDescriptor netDesc(desc);
    wp.writeType(netDesc);
    //wp.writeBool(true);                                            //hasNetID
    //wp.writeVarInt(itemID);                                        //ItemId
    //wp.writeUnsignedShort(static_cast<unsigned short>(stackSize)); //StackSize
    //wp.writeUnsignedVarInt(aux);                                   //Aux
    //wp.writeUnsignedVarInt(110);
    //wp.writeVarInt(0);
    //wp.writeString("minecraft:apple");

    wp.writeType(pos);        //mPos
    wp.writeType(Vec3::ZERO); //mVelocity
    wp.writeType(dataItems);  //EntityMetadata & DataItem
    wp.writeBool(false);       //isFromFishing

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::AddItemActor);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendAddEntityPacket(unsigned long long runtimeID, string entityType, Vec3 pos, Vec2 rotation, float headYaw, vector<std::unique_ptr<DataItem>> dataItems)
{
    BinaryStream bs;
    bs.writeVarInt64(runtimeID);
    bs.writeUnsignedVarInt64(runtimeID);
    bs.writeString(entityType);
    bs.writeType(pos);
    bs.writeType(Vec3{0, 0, 0});
    bs.writeType(Vec3{0, 0, 0});
    bs.writeFloat(0.0);
    // Atrribute
    bs.writeUnsignedVarInt(0);

    // DataItem
    bs.writeUnsignedVarInt(0);

    // Links
    bs.writeUnsignedVarInt(0);
 
    NetworkPacket<13> pkt(bs.getAndReleaseData());
    sendNetworkPacket(pkt);
    return true;
}

bool Player::sendUpdateBlockPacket(BlockPos const& bpos, unsigned int runtimeId, UpdateBlockFlags flag, UpdateBlockLayer layer)
{
    BinaryStream wp;
    wp.writeVarInt(bpos.x);
    wp.writeUnsignedVarInt(bpos.y);
    wp.writeVarInt(bpos.z);
    wp.writeUnsignedVarInt(runtimeId);
    wp.writeUnsignedVarInt((unsigned int)flag);
    wp.writeUnsignedVarInt((unsigned int)layer);
    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::UpdateBlock);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}
bool Player::sendUpdateBlockPacket(BlockPos const& bpos, const Block& block, UpdateBlockFlags flag, UpdateBlockLayer layer)
{
    return sendUpdateBlockPacket(bpos, block.getRuntimeId(), flag, layer);
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
    BinaryStream wp;
    wp.writeVarInt64(getUniqueID() + 1145141919);
    wp.writeUnsignedVarInt((int)type);
    switch (type)
    {
        case BossEvent::Show:
            wp.writeString(name);
            wp.writeFloat(percent);
            goto LABEL_3;
        case BossEvent::RegisterPlayer:
        case BossEvent::UnregisterPlayer:
        case BossEvent::ResendRaidBossEventData:
        {
            wp.writeVarInt64(getUniqueID() + 1145141919);
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
    sendAddEntityPacket(getUniqueID() + 1145141919, "player", Vec3(getPos().x, (float)-70, getPos().z), Vec2{0, 0}, 0);
    if (type != BossEvent::Hide)
    {
        sendBossEventPacket(BossEvent::Hide, "", 0, BossEventColour::White);
    }
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
    return sendTextTalkPacket(msg, nullptr);
}
#include <Utils/DbgHelper.h>
bool Player::sendTextTalkPacket(const string& msg, Player* target)
{
    auto packet = TextPacket::createChat(getName(), msg, getXuid(), "");
    if (target == nullptr)
    {
        Global<ServerNetworkHandler>->handle(*getNetworkIdentifier(), packet);
        return true;
    }
    try
    {
        Event::PlayerChatEvent ev;
        ev.mMessage = msg;
        ev.mPlayer = this;
        if (!ev.call())
            return false;
    }
    catch (...)
    {
        logger.error("Event Callback Failed!");
        logger.error("Uncaught Exception Detected!");
        logger.error("In Event: PlayerChatEvent");
        PrintCurrentStackTraceback();
    }
    target->sendNetworkPacket(packet);
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

bool Player::sendSimpleForm(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(Player*, int)> callback) const
{
    nlohmann::json model = R"({"title": "","content":"","buttons":[],"type":"form"})"_json;
    model["title"] = title;
    model["content"] = content;
    for (int i = 0; i < buttons.size(); ++i)
    {
        nlohmann::json oneButton = "{}"_json;
        oneButton["text"] = buttons[i];
        if (!images[i].empty())
        {
            nlohmann::json image = "{}"_json;
            image["type"] = images[i].find("textures/") == 0 ? "path" : "url";
            image["data"] = images[i];
            oneButton["image"] = image;
        }
        model["buttons"].push_back(oneButton);
    }
    std::string data = model.dump();

    unsigned formId = NewFormId();
    if (!sendRawFormPacket(formId, data))
        return false;
    SetSimpleFormPacketCallback(formId, callback);
    return true;
}

bool Player::sendModalForm(const string& title, const string& content, const string& button1, const string& button2, std::function<void(Player*, bool)> callback) const
{
    nlohmann::json model = R"({"title":"","content":"","button1":"","button2":"","type":"modal"})"_json;
    model["title"] = title;
    model["content"] = content;
    model["button1"] = button1;
    model["button2"] = button2;
    std::string data = model.dump();
    unsigned formId = NewFormId();
    if (!sendRawFormPacket(formId, data))
        return false;
    SetModalFormPacketCallback(formId, callback);
    return true;
}

bool Player::sendCustomForm(const std::string& data, std::function<void(Player*, string)> callback) const
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

// For Compatibility
bool Player::sendSimpleFormPacket(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(int)> callback) const
{
    return sendSimpleForm(title, content, buttons, images, [callback](Player* pl, int id) {
        if (!callback || !Player::isValid(pl))
            return;
        try
        {
            callback(id);
        }
        catch (...)
        {
            logger.error("Exception occurred in custom-form packet callback!");
            logger.error("Player: {}", pl->getName());
        }
    });
}
bool Player::sendModalFormPacket(const string& title, const string& content, const string& button1, const string& button2, std::function<void(bool)> callback)
{
    return sendModalForm(title,content,button1,button2, [callback](Player* pl, bool res) {
        if (!callback || !Player::isValid(pl))
            return;
        try
        {
            callback(res);
        }
        catch (...)
        {
            logger.error("Exception occurred in modal-form packet callback!");
            logger.error("Player: {}", pl->getName());
        }
    });
}

bool Player::sendCustomFormPacket(const std::string& data, std::function<void(string)> callback)
{
    return sendCustomForm(data, [callback](Player* pl, string res) {
        if (!callback || !Player::isValid(pl))
            return;
        try
        {
            callback(res);
        }
        catch (...)
        {
            logger.error("Exception occurred in custom-form packet callback!");
            logger.error("Player: {}", pl->getName());
        }
    });
}

#ifdef DEBUG

bool testPlayerExperience(Player& player) {
    player.resetPlayerLevel();
    size_t totalExp = player.getTotalExperience();
    assert(totalExp == 0);
    player.setTotalExperience(123456);
    totalExp = player.getTotalExperience();
    assert(totalExp == 123456);

    assert(player.reduceExperience(12345));
    int level = player.getPlayerLevel();
    int exp = player.getCurrentExperience();
    totalExp = player.getTotalExperience();
    logger.warn("level: {} exp: {}, totalExp: {}", level, exp, totalExp);
    assert(totalExp == 123456 - 12345);
    player.resetPlayerLevel();
    player.addLevels(12345);
    level = player.getPlayerLevel();
    exp = player.getCurrentExperience();
    totalExp = player.getTotalExperience();
    logger.warn("level: {} exp: {}, totalExp: {}", level, exp, totalExp);
    player.resetPlayerLevel();
    player.addExperience(INT32_MAX);
    level = player.getPlayerLevel();
    exp = player.getCurrentExperience();
    totalExp = player.getTotalExperience();
    logger.warn("level: {} exp: {}, totalExp: {}", level, exp, totalExp);
    //for (int i = 0; i <= 1000; i++) {
    //    int level = i * i;
    //    int exp = Player::getXpNeededForLevel(level + 1);
    //    size_t total = Player::getTotalXpNeededForLevel(level);
    //    logger.warn("Level: {}, exp needed: {}, total exp: {}", level, exp, total);
    //}
    return true;
}

#endif // DEBUG
