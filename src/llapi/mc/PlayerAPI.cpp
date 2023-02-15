#include <bitset>
#include "magic_enum.hpp"

#include "llapi/mc/Minecraft.hpp"

#include "llapi/mc/Player.hpp"
#include "llapi/mc/ServerPlayer.hpp"

#include "llapi/mc/Certificate.hpp"
#include "llapi/mc/CompoundTag.hpp"

#include "llapi/mc/NetworkHandler.hpp"
#include "llapi/mc/ServerNetworkHandler.hpp"
#include "llapi/mc/NetworkIdentifier.hpp"
#include "llapi/mc/NetworkPeer.hpp"
#include "llapi/mc/ToastRequestPacket.hpp"

#include "llapi/mc/ExtendedCertificate.hpp"
#include "llapi/mc/ConnectionRequest.hpp"
#include "llapi/mc/MinecraftPackets.hpp"
#include "llapi/mc/CommandRequestPacket.hpp"
#include "llapi/mc/TextPacket.hpp"
#include "llapi/mc/ScorePacketInfo.hpp"
#include "llapi/mc/BinaryStream.hpp"
#include "llapi/mc/TransferPacket.hpp"

#include "llapi/mc/Level.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/Container.hpp"
#include "llapi/mc/SimpleContainer.hpp"
#include "llapi/mc/Scoreboard.hpp"
#include "llapi/mc/PlaySoundPacket.hpp"
#include "llapi/mc/SetDisplayObjectivePacket.hpp"
#include "llapi/mc/Block.hpp"
#include "llapi/mc/AttributeInstance.hpp"

#include "llapi/mc/ItemStackDescriptor.hpp"
#include "llapi/mc/NetworkItemStackDescriptor.hpp"

#include "llapi/impl/ObjectivePacketHelper.h"
#include "llapi/impl/FormPacketHelper.h"
#include "llapi/EventAPI.h"

#include "liteloader/LiteLoader.h"

#include "llapi/mc/CommandUtils.hpp"
#include "llapi/mc/ItemInstance.hpp"
#include "llapi/mc/Item.hpp"
#include "llapi/mc/LayeredAbilities.hpp"

#include "llapi/mc/UpdateAbilitiesPacket.hpp"
#include "llapi/mc/UpdateAdventureSettingsPacket.hpp"
#include "llapi/mc/AdventureSettings.hpp"

#include "llapi/mc/Biome.hpp"
#include "llapi/mc/BlockSource.hpp"
#include "llapi/mc/ChunkPos.hpp"

#include "llapi/Global.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/DBStorage.hpp"
#include "llapi/mc/StringTag.hpp"
#include "llapi/memory/MemoryUtils.h"
#include "liteloader/PlayerDeathPositions.h"

using ll::logger;
using ll::memory::dAccess;

NetworkIdentifier* Player::getNetworkIdentifier() { return (NetworkIdentifier*)(getUserEntityIdentifierComponent()); }


Certificate* Player::getCertificate() {
    UserEntityIdentifierComponent* ueic = getUserEntityIdentifierComponent();
    if (ueic) {
        return ueic->mCertificate.get();
    }
    return nullptr;
}

enum class AbilitiesLayer;
LayeredAbilities* Player::getAbilities() {
    return &dAccess<LayeredAbilities>(this, 2124); // AbilityCommand::execute
}

// From https://github.com/dreamguxiang/BETweaker
void Player::setAbility(AbilitiesIndex index, bool value) {
    ActorUniqueID uid       = getUniqueID();
    auto          abilities = getAbilities();
    auto          flying    = abilities->getAbility(AbilitiesIndex::Flying).getBool();
    if (index == AbilitiesIndex::Flying && value && isOnGround()) {
        abilities->setAbility(AbilitiesIndex::MayFly, value);
    }
    if (index == AbilitiesIndex::MayFly && value == false && flying) {
        abilities->setAbility(AbilitiesIndex::Flying, false);
    }
    abilities->setAbility(index, value);
    auto mayfly = abilities->getAbility(AbilitiesIndex::MayFly).getBool();
    auto noclip = abilities->getAbility(AbilitiesIndex::NoClip).getBool();
    setCanFly(mayfly || noclip);
    if (index == AbilitiesIndex::NoClip) {
        abilities->setAbility(AbilitiesIndex::Flying, value);
    }
    flying      = abilities->getAbility(AbilitiesIndex::Flying).getBool();
    Ability& ab = abilities->getAbility(AbilitiesLayer(1), AbilitiesIndex::Flying);
    ab.setBool(0);
    if (flying)
        ab.setBool(1);
    UpdateAbilitiesPacket pkt(uid, *abilities);
    auto                  pkt2 = UpdateAdventureSettingsPacket(AdventureSettings());
    abilities->setAbility(AbilitiesIndex::Flying, flying);
    sendNetworkPacket(pkt2);
    sendNetworkPacket(pkt);
}


std::string Player::getRealName() {
    if (isSimulatedPlayer())
        return getName();
    return ExtendedCertificate::getIdentityName(*getCertificate());
}


int Player::getAvgPing() {
    if (isSimulatedPlayer())
        return -1;
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().mAveragePing;
}

int Player::getLastPing() {
    if (isSimulatedPlayer())
        return -1;
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().mCurrentPing;
}

string Player::getIP() {
    if (isSimulatedPlayer())
        return "127.0.0.1";
    return getNetworkIdentifier()->getIP();
}

#include "llapi/mc/Localization.hpp"
string Player::getLanguageCode() {
    if (isSimulatedPlayer()) {
        return I18n::getCurrentLanguage()->getFullLanguageCode();
    }
    auto map =
        Global<ServerNetworkHandler>->fetchConnectionRequest(*getNetworkIdentifier()).mRawToken.get()->mDataInfo.value_.map_;
    for (auto& iter : *map) {
        string s(iter.first.c_str());
        if (s.find("LanguageCode") != std::string::npos) {
            auto langCode = iter.second.value_.string_;
            return langCode;
        }
    }
    return "unknown";
}

string Player::getServerAddress() {
    if (isSimulatedPlayer())
        return "unknown";
    auto map =
        Global<ServerNetworkHandler>->fetchConnectionRequest(*getNetworkIdentifier()).mRawToken.get()->mDataInfo.value_.map_;
    for (auto iter = map->begin(); iter != map->end(); ++iter) {
        string s(iter->first.c_str());
        if (s.find("ServerAddress") != s.npos) {
            auto ServerAddress = iter->second.value_.string_;
            return ServerAddress;
        }
    }
    return "unknown";
}

string Player::getDeviceTypeName() {
    switch ((int)getPlatform()) {
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

bool Player::kick(const std::string& msg) {
    NetworkIdentifier* pNetworkIdentifier = getNetworkIdentifier();
    Global<ServerNetworkHandler>->disconnectClient(*pNetworkIdentifier, msg, 0);
    return true;
}

bool Player::sendText(const std::string& text, TextType type) { return sendTextPacket(text, type); }

bool Player::talkAs(const std::string& msg) { return sendTextTalkPacket(msg); }


bool Player::giveItem(ItemStack* item) {
    this->add(*item);
    refreshInventory();
    return true;
}

bool Player::giveItem(ItemStack* item, int amount) {
    auto single = item->clone_s();
    single->set(1);
    for (int i = 0; i < amount; i++) {
        auto it = *single->clone_s();
        if (!this->add(it) && !this->isCreative()) {
            this->drop(it, false);
        }
    }
    refreshInventory();
    return true;
}

bool Player::giveItem(string typeName, int amount) {
    int  temp;
    auto itemlist = CommandUtils::createItemStacks(ItemInstance(*ItemStack::create(typeName)), amount, temp);
    for (auto& itemstack : itemlist) {
        if (!itemstack.isNull()) {
            if (!this->add(itemstack) && !this->isCreative()) {
                this->drop(itemstack, false);
            }
        }
    }
    refreshInventory();
    return true;
}

int Player::clearItem(string typeName) {
    int res = 0;

    // Hand
    ItemStack* item = getHandSlot();
    if (item->getTypeName() == typeName) {
        auto out = item->getCount();
        item->setNull({});
        res += out;
    }

    // OffHand
    item = (ItemStack*)&getOffhandSlot();
    if (item->getTypeName() == typeName) {
        auto out = item->getCount();
        item->setNull({});
        res += out;
    }

    // Inventory
    Container* container = &getInventory();
    auto       items     = container->getAllSlots();
    int        size      = container->getSize();
    for (int i = 0; i < size; ++i) {
        if (items[i]->getTypeName() == typeName) {
            int cnt = items[i]->getCount();
            container->removeItem(i, cnt);
            res += cnt;
        }
    }

    // Armor
    auto& armor = getArmorContainer();
    items       = armor.getAllSlots();
    size        = armor.getSize();
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

string Player::getName() { return getNameTag(); }

bool Player::runcmd(const string& cmd) { return sendCommandRequestPacket(cmd); }

Container* Player::getEnderChestContainer() {
    return dAccess<Container*>(this, 5232); // IDA Player::Player() 782
}

bool Player::transferServer(const string& address, unsigned short port) { return sendTransferPacket(address, port); }

std::pair<BlockPos, int> Player::getRespawnPosition() {
    BlockPos bp    = getSpawnPosition();
    int      dimId = getSpawnDimension();
    if (dimId == 3) // has no bed.
    {
        bp    = getExpectedSpawnPosition();
        dimId = getExpectedSpawnDimensionId();
    }

    return {bp, dimId};
}

std::unique_ptr<CompoundTag> Player::getNbt() { return CompoundTag::fromPlayer(this); }

bool Player::setNbt(CompoundTag* nbt) {
    nbt->setPlayer(this);
    return true;
}
#include "llapi/mc/Attribute.hpp"
#include "llapi/mc/HashedString.hpp"
#include "llapi/SendPacketAPI.h"
bool Player::refreshAttribute(class Attribute const& attribute) { return refreshAttributes({&attribute}); }
bool Player::refreshAttributes(std::vector<Attribute const*> const& attributes) {
    BinaryStream wp;
    wp.writeUnsignedVarInt64(getRuntimeID()); // EntityId
    wp.writeUnsignedVarInt((unsigned)attributes.size());
    for (auto attribute : attributes) {
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

string Player::getUuid() {
    auto ueic = getUserEntityIdentifierComponent();
    if (!ueic)
        return "";
    return ueic->mUUID.asString();
}

unsigned char Player::getClientSubId() {
    auto ueic = getUserEntityIdentifierComponent();
    if (!ueic)
        return -1;
    return ueic->mClientSubId;
}

float Player::getAvgPacketLoss() {
    if (isSimulatedPlayer())
        return 0.f;
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().mAveragePacketLoss;
}

float Player::getLastPacketLoss() {
    if (isSimulatedPlayer()) {
        return 0.f;
    }
    return Global<Minecraft>->getNetworkHandler().getPeerForUser(*getNetworkIdentifier())->getNetworkStatus().mCurrentPacketLoss;
}

string Player::getClientId() {
    if (isSimulatedPlayer())
        return "";
    return Global<ServerNetworkHandler>->fetchConnectionRequest(*getNetworkIdentifier()).getDeviceId();
}

int Player::getDeviceType() { return magic_enum::enum_integer(getPlatform()); }

bool Player::isOperator() { return (int)getPlayerPermissionLevel() >= 2; }

bool Player::isOP() { return isOperator(); }

int Player::getCurrentExperience() {
    auto& attr       = getAttribute(Player::EXPERIENCE);
    float currentExp = getXpNeededForNextLevel() * attr.getCurrentValue();
    return static_cast<int>(currentExp);
}

bool Player::setCurrentExperience(int exp) {
    auto attr = getMutableAttribute(Player::EXPERIENCE);
    if (!attr)
        return false;
    int levelExp = getXpNeededForNextLevel();
    attr->setCurrentValue(static_cast<float>(exp) / levelExp);
    return true;
}

size_t Player::getTotalExperience() {
    int    level = getPlayerLevel();
    size_t exp   = getTotalXpNeededForLevel(level);
    exp          += getCurrentExperience();
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
    if (!attr)
        return false;
    int neededExp = getXpNeededForNextLevel();
    int currExp   = static_cast<int>(attr->getCurrentValue() * neededExp);
    if (exp <= currExp) {
        attr->setCurrentValue(static_cast<float>(currExp - exp) / neededExp);
        return true;
    }
    attr->setCurrentValue(0);
    size_t needExp = exp - currExp;
    int    level   = getPlayerLevel();
    while (level > 0) {
        addLevels(-1);
        int levelXp = getXpNeededForNextLevel();
        if (needExp < levelXp) {
            attr->setCurrentValue(static_cast<float>(levelXp - needExp) / getXpNeededForNextLevel());
            return true;
        }
        needExp -= levelXp;
        level   = getPlayerLevel();
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
    for (int i = 1; i <= level; ++i) {
        result += getXpNeededForLevel(i);
    }
    return result;
}

bool Player::crashClient() {
    if (isSimulatedPlayer())
        return false;
    auto pkt                     = MinecraftPackets::createPacket(MinecraftPacketIds::LevelChunk);
    dAccess<bool, 56>(pkt.get()) = 1;
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::setSidebar(
    const std::string&                              title,
    const std::vector<std::pair<std::string, int>>& data,
    ObjectiveSortOrder                              sortOrder
) {
    sendSetDisplayObjectivePacket(title, "FakeScoreObj", (char)sortOrder);

    vector<ScorePacketInfo> info;
    for (auto& x : data) {
        const ScoreboardId& id = ScoreboardId(NewScoreId());
        ScorePacketInfo     i((ScoreboardId*)&id, "FakeScoreObj", IdentityDefinition::Type::Fake, x.second, x.first);
        info.emplace_back(i);
    }
    sendSetScorePacket(0, info);
    return sendSetDisplayObjectivePacket(title, "FakeScoreObj", (char)sortOrder);
}

bool Player::removeSidebar() { return sendSetDisplayObjectivePacket("", "", (char)0); }

int Player::getScore(const string& key) { return Scoreboard::getScore(this, key); }

bool Player::setScore(const string& key, int value) { return Scoreboard::setScore(this, key, value); }

bool Player::addScore(const string& key, int value) { return Scoreboard::addScore(this, key, value); }

bool Player::reduceScore(const string& key, int value) { return Scoreboard::reduceScore(this, key, value); }

bool Player::deleteScore(const string& key) { return Scoreboard::deleteScore(this, key); }

void Player::addBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay) {
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

void Player::removeBossEvent(int64_t uid) {
    BinaryStream wp;
    wp.writeVarInt64(uid);
    wp.writeUnsignedVarInt((int)2);
    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::BossEvent);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
}

void Player::updateBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay) {
    removeBossEvent(uid);
    addBossEvent(uid, name, percent, colour, overlay);
}


////////////////////////// Packet //////////////////////////

static_assert(sizeof(TextPacket) == 216);
static_assert(sizeof(TransferPacket) == 88);

bool Player::sendTextPacket(string text, TextType Type) const {
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
    ToastRequestPacket pkt = ToastRequestPacket(title, msg);
    sendNetworkPacket(pkt);
    return true;
}

bool Player::sendTitlePacket(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration)
    const {
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

bool Player::sendNotePacket(unsigned int tone) {
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

bool Player::sendSpawnParticleEffectPacket(Vec3 spawnPos, int dimID, string ParticleName, int64_t EntityUniqueID)
    const {
    BinaryStream wp;
    wp.writeUnsignedChar(dimID);
    // If EntityUniqueID is not -1, the Position below will be interpreted as relative to the position of the entity
    // associated with this unique ID.
    wp.writeVarInt64(EntityUniqueID);
    wp.writeFloat(spawnPos.x);
    wp.writeFloat(spawnPos.y);
    wp.writeFloat(spawnPos.z);
    // ParticleName is the name of the particle that should be shown. This name may point to a particle effect that is
    // built-in, or to one implemented by behaviour packs.
    wp.writeString(ParticleName);

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::SpawnParticleEffect);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendPlaySoundPacket(string SoundName, Vec3 Position, float Volume, float Pitch) const {
    PlaySoundPacket playSoundPkt(std::move(SoundName), Position, Volume, Pitch);
    sendNetworkPacket(playSoundPkt);
    return true;
}

bool Player::sendAddItemEntityPacket(
    unsigned long long                runtimeID,
    Item const&                       item,
    int                               stackSize,
    short                             aux,
    Vec3                              pos,
    vector<std::unique_ptr<DataItem>> dataItems
) const {
    BinaryStream wp;
    wp.writeVarInt64(runtimeID);         // RuntimeId
    wp.writeUnsignedVarInt64(runtimeID); // EntityId
    ItemStackDescriptor        desc(item, aux, stackSize, nullptr);
    NetworkItemStackDescriptor netDesc(desc);
    wp.writeType(netDesc);
    wp.writeType(pos);
    wp.writeType(Vec3::ZERO);

    wp.writeType(dataItems);

    wp.writeBool(false);

    NetworkPacket<15> pkt(wp.getRaw());
    sendNetworkPacket(pkt);
    return true;
}

bool Player::sendAddEntityPacket(
    unsigned long long                runtimeID,
    string                            entityType,
    Vec3                              pos,
    Vec2                              rotation,
    float                             headYaw,
    vector<std::unique_ptr<DataItem>> dataItems
) {
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
    // PropertySyncIntEntry
    bs.writeUnsignedVarInt(0);
    // PropertySyncFloatEntry
    bs.writeUnsignedVarInt(0);

    // Links
    bs.writeUnsignedVarInt(0);

    NetworkPacket<13> pkt(bs.getAndReleaseData());
    sendNetworkPacket(pkt);
    return true;
}

bool Player::sendUpdateBlockPacket(
    BlockPos const&  bpos,
    unsigned int     runtimeId,
    UpdateBlockFlags flag,
    UpdateBlockLayer layer
) {
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
bool Player::sendUpdateBlockPacket(
    BlockPos const&  bpos,
    const Block&     block,
    UpdateBlockFlags flag,
    UpdateBlockLayer layer
) {
    return sendUpdateBlockPacket(bpos, block.getRuntimeId(), flag, layer);
}

bool Player::sendTransferPacket(const string& address, short port) const {
    TransferPacket transferPkt(address, port);
    sendNetworkPacket(transferPkt);
    return true;
}

bool Player::sendSetDisplayObjectivePacket(const string& title, const string& name, char sortOrder) const {
    SetDisplayObjectivePacket pkt =
        SetDisplayObjectivePacket("sidebar", name, title, "dummy", ObjectiveSortOrder(sortOrder));
    sendNetworkPacket(pkt);
    return true;
}

bool Player::sendSetScorePacket(char type, const vector<ScorePacketInfo>& data) {
    auto packet                                        = MinecraftPackets::createPacket(0x6c);
    dAccess<char>(packet.get(), 48)                    = type;
    dAccess<vector<ScorePacketInfo>>(packet.get(), 56) = data;
    sendNetworkPacket(*packet);
    return true;
}

bool Player::sendBossEventPacket(BossEvent type, string name, float percent, BossEventColour colour, int overlay) {
    BinaryStream wp;
    wp.writeVarInt64(getUniqueID() + 1145141919);
    wp.writeUnsignedVarInt((int)type);
    switch (type) {
    case BossEvent::Show:
        wp.writeString(name);
        wp.writeFloat(percent);
        goto LABEL_3;
    case BossEvent::RegisterPlayer:
    case BossEvent::UnregisterPlayer:
    case BossEvent::ResendRaidBossEventData: {
        wp.writeVarInt64(getUniqueID() + 1145141919);
        break;
    }
    case BossEvent::HealthPercentage: {
        wp.writeFloat(percent);
        break;
    }
    case BossEvent::Title: {
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
    if (type != BossEvent::Hide) {
        sendBossEventPacket(BossEvent::Hide, "", 0, BossEventColour::White);
    }
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendCommandRequestPacket(const string& cmd) {
    auto packet                       = MinecraftPackets::createPacket(0x4d);
    dAccess<string, 48>(packet.get()) = cmd;
    ServerNetworkHandler* handler     = Global<ServerNetworkHandler> + 16;
    handler->handle(*getNetworkIdentifier(), *((CommandRequestPacket*)packet.get()));
    return true;
}

bool Player::sendTextTalkPacket(const string& msg) { return sendTextTalkPacket(msg, nullptr); }
#include "llapi/utils/DbgHelper.h"
bool Player::sendTextTalkPacket(const string& msg, Player* target) {
    auto packet = TextPacket::createChat(getName(), msg, getXuid(), "");
    if (target == nullptr) {
        ServerNetworkHandler* handler = Global<ServerNetworkHandler> + 16;
        handler->handle(*getNetworkIdentifier(), packet);
        return true;
    }
    try {
        Event::PlayerChatEvent ev;
        ev.mMessage = msg;
        ev.mPlayer  = this;
        if (!ev.call())
            return false;
    } catch (...) {
        logger.error("Event Callback Failed!");
        logger.error("Uncaught Exception Detected!");
        logger.error("In Event: PlayerChatEvent");
        PrintCurrentStackTraceback();
    }
    target->sendNetworkPacket(packet);
    return true;
}

bool Player::sendRawFormPacket(unsigned formId, const string& data) const {
    BinaryStream wp;
    wp.reserve(32 + data.size());
    wp.writeUnsignedVarInt(formId);
    wp.writeString(data);

    auto pkt = MinecraftPackets::createPacket(MinecraftPacketIds::ModalFormRequest);
    pkt->read(wp);
    sendNetworkPacket(*pkt);
    return true;
}

bool Player::sendSimpleForm(
    const string&                     title,
    const string&                     content,
    const vector<string>&             buttons,
    const std::vector<std::string>&   images,
    std::function<void(Player*, int)> callback
) const {
    nlohmann::json model = R"({"title": "","content":"","buttons":[],"type":"form"})"_json;
    model["title"]       = title;
    model["content"]     = content;
    for (int i = 0; i < buttons.size(); ++i) {
        nlohmann::json oneButton = "{}"_json;
        oneButton["text"]        = buttons[i];
        if (!images[i].empty()) {
            nlohmann::json image = "{}"_json;
            image["type"]        = images[i].find("textures/") == 0 ? "path" : "url";
            image["data"]        = images[i];
            oneButton["image"]   = image;
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

bool Player::sendModalForm(
    const string&                      title,
    const string&                      content,
    const string&                      confirmButton,
    const string&                      cancelButton,
    std::function<void(Player*, bool)> callback
) const {
    nlohmann::json model = R"({"title":"","content":"","button1":"","button2":"","type":"modal"})"_json;
    model["title"]       = title;
    model["content"]     = content;
    model["button1"]     = confirmButton;
    model["button2"]     = cancelButton;
    std::string data     = model.dump();
    unsigned    formId   = NewFormId();
    if (!sendRawFormPacket(formId, data))
        return false;
    SetModalFormPacketCallback(formId, callback);
    return true;
}

bool Player::sendCustomForm(const std::string& data, std::function<void(Player*, string)> callback) const {
    unsigned formId = NewFormId();
    if (!sendRawFormPacket(formId, data))
        return false;
    SetCustomFormPacketCallback(formId, callback);
    return true;
}

bool Player::isValid(Player* player) {
    auto pls = Level::getAllPlayers();
    for (auto& pl : pls)
        if (pl == player)
            return true;
    return false;
}

// For Compatibility
bool Player::sendSimpleFormPacket(
    const string&                   title,
    const string&                   content,
    const vector<string>&           buttons,
    const std::vector<std::string>& images,
    std::function<void(int)>        callback
) const {
    return sendSimpleForm(title, content, buttons, images, [callback](Player* pl, int id) {
        if (!callback || !Player::isValid(pl))
            return;
        try {
            callback(id);
        } catch (...) {
            logger.error("Exception occurred in custom-form packet callback!");
            logger.error("Player: {}", pl->getName());
        }
    });
}
bool Player::sendModalFormPacket(
    const string&             title,
    const string&             content,
    const string&             button1,
    const string&             button2,
    std::function<void(bool)> callback
) {
    return sendModalForm(title, content, button1, button2, [callback](Player* pl, bool res) {
        if (!callback || !Player::isValid(pl))
            return;
        try {
            callback(res);
        } catch (...) {
            logger.error("Exception occurred in modal-form packet callback!");
            logger.error("Player: {}", pl->getName());
        }
    });
}

bool Player::sendCustomFormPacket(const std::string& data, std::function<void(string)> callback) {
    return sendCustomForm(data, [callback](Player* pl, string res) {
        if (!callback || !Player::isValid(pl))
            return;
        try {
            callback(res);
        } catch (...) {
            logger.error("Exception occurred in custom-form packet callback!");
            logger.error("Player: {}", pl->getName());
        }
    });
}

DBHelpers::Category const playerCategory            = (DBHelpers::Category)7;
std::string const         PLAYER_KEY_SERVER_ID      = "ServerId";
std::string const         PLAYER_KEY_MSA_ID         = "MsaId";
std::string const         PLAYER_KEY_SELF_SIGNED_ID = "SelfSignedId";

void forEachUuid(bool includeSelfSignedId, std::function<void(std::string_view const& uuid)> callback) {
    static size_t count;
    count = 0;
    Global<DBStorage>->forEachKeyWithPrefix(
        "player_",
        playerCategory,
        [&callback, includeSelfSignedId](gsl::cstring_span<-1> key_left, gsl::cstring_span<-1> data) {
            if (key_left.size() == 36) {
                auto  tag   = CompoundTag::fromBinaryNBT((void*)data.data(), data.size());
                auto& msaId = tag->getString(PLAYER_KEY_MSA_ID);
                if (!msaId.empty()) {
                    if (msaId == key_left) {
                        count++;
                        callback(msaId);
                    }
                    return;
                }
                if (!includeSelfSignedId) {
                    return;
                }
                auto& selfSignedId = tag->getString(PLAYER_KEY_SELF_SIGNED_ID);
                if (!selfSignedId.empty()) {
                    if (selfSignedId == key_left) {
                        count++;
                        callback(selfSignedId);
                    }
                    return;
                }
            }
        }
    );
}

std::vector<string> Player::getAllUuid(bool includeSelfSignedId) {
    std::vector<std::string> uuids;
    forEachUuid(includeSelfSignedId, [&uuids](std::string_view uuid) { uuids.push_back(std::string(uuid)); });
    return uuids;
}

std::unique_ptr<CompoundTag> getPlayerIdsTag(mce::UUID const& uuid) {
    auto& dbStorage = *Global<DBStorage>;
    auto  playerKey = "player_" + uuid.asString();
    if (dbStorage.hasKey(playerKey, playerCategory)) {
        return dbStorage.getCompoundTag(playerKey, playerCategory);
    }
    return {};
}

std::string getServerId(mce::UUID const& uuid) {
    auto tag = getPlayerIdsTag(uuid);
    if (!tag) {
        return "";
    }
    return tag->getString(PLAYER_KEY_SERVER_ID);
}

bool Player::deletePlayerNbt(mce::UUID const& uuid) {
    try {
        auto& dbStorage = *Global<DBStorage>;
        auto  serverId  = getServerId(uuid);
        if (serverId.empty())
            return false;
        if (!dbStorage.hasKey(serverId, playerCategory)) {
            logger.warn("Fail to find key {} while trying to delete player {}`s nbt", serverId, uuid.asString());
            return false;
        }
        auto res = dbStorage.deleteData(serverId, playerCategory);
        return true;
    } catch (const std::exception& exc) {
        logger.error("Fail to delete player nbt!\n{}", exc.what());
    }
    return false;
}

std::unique_ptr<CompoundTag> getOfflineNbt(mce::UUID const& uuid) {
    auto serverId = getServerId(uuid);
    if (serverId.empty()) {
        return nullptr;
    }
    if (!Global<DBStorage>->hasKey(serverId, playerCategory)) {
        return nullptr;
    }
    return Global<DBStorage>->getCompoundTag(serverId, playerCategory);
}


std::unique_ptr<CompoundTag> Player::getPlayerNbt(mce::UUID const& uuid) {
    if (auto player = Global<Level>->getPlayer(uuid)) {
        return player->getNbt();
    }
    return getOfflineNbt(uuid);
}

bool setOfflineNbt(mce::UUID const& uuid, CompoundTag* nbt) {
    try {
        auto& data     = *nbt;
        auto  serverId = getServerId(uuid);
        if (serverId.empty()) {
            return false;
        }
        Global<DBStorage>->saveData(serverId, data.toBinaryNBT(), playerCategory);
        return true;
    } catch (const std::exception& exc) {
        logger.error("Fail to set offline player nbt!\n{}", exc.what());
    }
    return false;
}

bool Player::setPlayerNbt(mce::UUID const& uuid, CompoundTag* nbt) {
    try {
        auto serverId = getServerId(uuid);
        if (serverId.empty()) {
            return false;
        }
        bool res = true;
        if (auto pl = Global<Level>->getPlayer(uuid)) {
            return pl->setNbt(nbt);
        } else {
            return setOfflineNbt(uuid, nbt);
        }
    } catch (const std::exception& exc) {
        logger.error("Fail to set player nbt!\n{}", exc.what());
    }
    return false;
}

bool Player::setPlayerNbtTags(mce::UUID const& uuid, CompoundTag* nbt, const vector<string>& tags) {
    try {
        auto& data     = *nbt;
        auto  serverId = getServerId(uuid);
        if (serverId.empty()) {
            return false;
        }
        bool res = true;
        if (auto pl = Global<Level>->getPlayer(uuid)) {
            auto playerTag = pl->getNbt();
            for (int i = 0; i <= tags.size() - 1; i++) {
                if (data.get(tags[i]) == nullptr) {
                    continue;
                } else {
                    res = res && (*playerTag).put(tags[i], data.get(tags[i])->copy());
                }
            }
            res = res && pl->setNbt(playerTag.get());
            pl->refreshInventory();
            data.destroy();
            return res;
        } else {
            auto         oridata = getOfflineNbt(uuid);
            CompoundTag& olddata = *oridata;
            for (int i = 0; i <= tags.size() - 1; i++) {
                if (data.get(tags[i]) == nullptr) {
                    continue;
                } else {
                    res = res && olddata.put(tags[i], data.get(tags[i])->copy());
                }
            }
            res = res && setOfflineNbt(uuid, oridata.get());
            data.destroy();
            olddata.destroy();
            return res;
        }
    } catch (const std::exception& exc) {
        logger.error("Fail to set player nbt tag!\n{}", exc.what());
    }
    return false;
}

std::pair<Vec3, int> Player::getLastDeathPosition() {
    for (auto pos : PlayerDeathPositions::getDeathPositions()) {
        if (pos.first == getUuid()) {
            return pos.second;
        }
    }
    return std::pair<Vec3, int>{Vec3(0, 0, 0), -1};
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
    int exp   = player.getCurrentExperience();
    totalExp  = player.getTotalExperience();
    logger.warn("level: {} exp: {}, totalExp: {}", level, exp, totalExp);
    assert(totalExp == 123456 - 12345);
    player.resetPlayerLevel();
    player.addLevels(12345);
    level    = player.getPlayerLevel();
    exp      = player.getCurrentExperience();
    totalExp = player.getTotalExperience();
    logger.warn("level: {} exp: {}, totalExp: {}", level, exp, totalExp);
    player.resetPlayerLevel();
    player.addExperience(INT32_MAX);
    level    = player.getPlayerLevel();
    exp      = player.getCurrentExperience();
    totalExp = player.getTotalExperience();
    logger.warn("level: {} exp: {}, totalExp: {}", level, exp, totalExp);
    // for (int i = 0; i <= 1000; i++) {
    //     int level = i * i;
    //     int exp = Player::getXpNeededForLevel(level + 1);
    //     size_t total = Player::getTotalXpNeededForLevel(level);
    //     logger.warn("Level: {}, exp needed: {}, total exp: {}", level, exp, total);
    // }
    return true;
}

#endif // DEBUG
