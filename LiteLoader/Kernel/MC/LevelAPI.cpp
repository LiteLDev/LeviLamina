#include <Global.h>
#include <string>
#include <utility>
#include <vector>
#include <cctype>
#include <fstream>
#include <MC/Actor.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/Spawner.hpp>
#include <MC/ActorDamageSource.hpp>
#include <MC/Block.hpp>
#include <MC/BlockSource.hpp>
#include <MC/CommandContext.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/Dimension.hpp>
#include <MC/DropperBlockActor.hpp>
#include <MC/ItemActor.hpp>
#include <MC/ItemStack.hpp>
#include <MC/Level.hpp>
#include <MC/MinecraftCommands.hpp>
#include <MC/Tick.hpp>
#include <MC/Packet.hpp>
#include <MC/PropertiesSettings.hpp>
#include <MC/LoopbackPacketSender.hpp>
#include <MC/ServerCommandOrigin.hpp>
#include <MC/PlayerCommandOrigin.hpp>


Actor* Level::getEntity(ActorUniqueID uniqueId)
{
    try
    {
        return SymCall("?fetchEntity@Level@@UEBAPEAVActor@@UActorUniqueID@@_N@Z", Actor*, Level*, ActorUniqueID)(Global<Level>, uniqueId);
    }
    catch (...)
    {
        return nullptr;
    }
}

Dimension* Level::getDimension(class AutomaticID<class Dimension, int> a0) {
    class Dimension* (Level::*rv)(class AutomaticID<class Dimension, int>) const;
    *((void**)&rv) = dlsym("?getDimension@Level@@UEBAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z");
    return (Global<Level>->*rv)(std::forward<class AutomaticID<class Dimension, int>>(a0));
}
    
MCINLINE class MapItemSavedData* Level::getMapSavedData(struct ActorUniqueID a0) {
    class MapItemSavedData* (Level::*rv)(struct ActorUniqueID);
    *((void**)&rv) = dlsym("?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@UActorUniqueID@@@Z");
    return (Global<Level>->*rv)(a0);
}
MCINLINE class LevelStorage& getLevelStorage() {
    class LevelStorage& (Level::*rv)();
    *((void**)&rv) = dlsym("?getLevelStorage@Level@@UEAAAEAVLevelStorage@@XZ");
    return (Global<Level>->*rv)();
}

void Level::forEachPlayer(class std::function<bool(class Player&)> a0) {
    void (Level::*rv)(class std::function<bool(class Player&)>);
    *((void**)&rv) = dlsym("?forEachPlayer@Level@@UEAAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z");
    return (Global<Level>->*rv)(std::forward<class std::function<bool(class Player&)>>(a0));
}

void Level::forEachPlayer(class std::function<bool(class Player const&)> a0) {
    void (Level::*rv)(class std::function<bool(class Player const&)>) const;
    *((void**)&rv) = dlsym("?forEachPlayer@Level@@UEBAXV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z");
    return (Global<Level>->*rv)(std::forward<class std::function<bool(class Player const&)>>(a0));
}
bool Level::destroyBlock(class BlockSource& a0, class BlockPos const& a1, bool a2) {
    bool (Level::*rv)(class BlockSource&, class BlockPos const&, bool);
    *((void**)&rv) = dlsym("?destroyBlock@Level@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z");
    return (Global<Level>->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<bool>(a2));
}
void Level::spawnParticleEffect(std::string const& a0, class Actor const& a1, class Vec3 const& a2) {
    void (Level::*rv)(std::string const&, class Actor const&, class Vec3 const&);
    *((void**)&rv) = dlsym("?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@AEBVVec3@@@Z");
    return (Global<Level>->*rv)(std::forward<std::string const&>(a0), std::forward<class Actor const&>(a1), std::forward<class Vec3 const&>(a2));
}

void Level::spawnParticleEffect(std::string const& a0, class Vec3 const& a1, class Dimension* a2) {
    void (Level::*rv)(std::string const&, class Vec3 const&, class Dimension*);
    *((void**)&rv) = dlsym("?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@PEAVDimension@@@Z");
    return (Global<Level>->*rv)(std::forward<std::string const&>(a0), std::forward<class Vec3 const&>(a1), std::forward<class Dimension*>(a2));
}

BlockSource* Level::getBlockSource(int dimID) {
    //auto dim = Global<Level>->createDimension(dimID);
    auto dim = Global<Level>->getDimension(dimID);
    return &dim->getBlockSourceFromMainChunkSource();
    //return dAccess<BlockSource*>(dim, 96);
}

BlockSource* Level::getBlockSource(Actor* ac) {
    return const_cast<BlockSource*>(&ac->getRegionConst());
}

BlockPalette* Level::getBlockPalette() {
    BlockPalette* (Level::*rv)();
    *((void**)&rv) = dlsym("?getBlockPalette@Level@@UEAAAEAVBlockPalette@@XZ");
    return (Global<Level>->*rv)();
}

Block* Level::getBlock(BlockPos* pos, int dimId) {
    return getBlock(*pos, Level::getBlockSource(dimId));
}

Block* Level::getBlock(BlockPos* pos, BlockSource* blockSource) {
    return (Block*)&(blockSource->getBlock(*pos));
}

Block* Level::getBlock(const BlockPos& pos, int dimId) {
    return getBlock(pos, Level::getBlockSource(dimId));
}

Block* Level::getBlock(const BlockPos& pos, BlockSource* blockSource) {
    return (Block*)&(blockSource->getBlock(pos));
}


// Return nullptr when failing to get block
Block* Level::getBlockEx(const BlockPos& pos, int dimId)
{
    auto dim = Global<Level>->getDimension(dimId);
    if (!dim)
        return nullptr;

    auto bs = &dim->getBlockSourceFromMainChunkSource();
    auto lc = bs->getChunkAt(pos);
    if (!lc)
        return nullptr;

    short minHeight = dim->getMinHeight();
    if (pos.y < minHeight || pos.y > dim->getHeight())
        return nullptr;

    ChunkBlockPos cbpos = ChunkBlockPos(pos, minHeight);
    return const_cast<Block*>(&lc->getBlock(cbpos));
}

BlockInstance Level::getBlockInstance(BlockPos* pos, int dimId) {
    return {*pos, dimId};
}

BlockInstance Level::getBlockInstance(BlockPos* pos, BlockSource* blockSource) {
    return {*pos, blockSource->getDimensionId()};
}

BlockInstance Level::getBlockInstance(const BlockPos& pos, int dim) {
    return {pos, dim};
}

BlockInstance Level::getBlockInstance(const BlockPos& pos, BlockSource* blockSource) {
    return {pos, blockSource->getDimensionId()};
}

BlockActor* Level::getBlockEntity(BlockPos* pos, int dimId) {
    return getBlockEntity(pos, Level::getBlockSource(dimId));
}

BlockActor* Level::getBlockEntity(BlockPos* pos, BlockSource* blockSource) {
    return blockSource->getBlockEntity(*pos);
}

BlockActor* Level::getBlockEntity(const BlockPos& pos, int dimId) {
    return getBlockEntity((BlockPos*) & pos, Level::getBlockSource(dimId));
}

BlockActor* Level::getBlockEntity(const BlockPos& pos, BlockSource* blockSource) {
    return getBlockEntity((BlockPos*)&pos, blockSource);
}


bool Level::setBlock(const BlockPos& pos, int dim, Block* block) {
    BlockSource* bs = getBlockSource(dim);
    return bs->setBlock(pos, *block, 3, nullptr); // updateFlag = 3 from IDA SetBlockCommand::execute()
}

bool Level::setBlock(const BlockPos& pos, int dim, const string& name, unsigned short tileData) {
    Block* newBlock = Block::create(name, tileData);
    if (!newBlock)
        return false;
    return setBlock(pos, dim, newBlock);
}

bool Level::setBlock(const BlockPos& pos, int dim, CompoundTag* nbt) {
    Block* newBlock = Block::create(nbt);
    if (!newBlock)
        return false;
    return setBlock(pos, dim, newBlock);
}

bool Level::breakBlockNaturally(BlockSource* bs, const BlockPos& pos) {
    return getBlockInstance(pos, bs).breakNaturally();
}

bool Level::breakBlockNaturally(BlockSource* bs, const BlockPos& pos, ItemStack* item) {
    return getBlockInstance(pos, bs).breakNaturally(item);
}

bool Level::hasContainer(Vec3 pos, int dim)
{
    return getContainer(pos,dim) != nullptr;
}

Container* Level::getContainer(Vec3 pos, int dim)
{
    // VirtualCall<Container*>(getBlockEntity(), 224); // IDA ChestBlockActor::`vftable'{for `RandomizableBlockActorContainerBase'}
    
    // This function didn't use 'this' pointer
    return ((DropperBlockActor*)nullptr)->_getContainerAt(*Level::getBlockSource(dim), pos);
}

Actor* Level::getDamageSourceEntity(ActorDamageSource* ads) {
    ActorUniqueID v6 = ads->getDamagingEntityUniqueID();
    return Global<Level>->getEntity(v6);
}

void* Level::ServerCommandOrigin::fake_vtbl[26];

CompoundTag& getServerOriginTag()
{
    static auto cached = CompoundTag::fromSNBT(R"({"CommandPermissionLevel":4b,"DimensionId":"Overworld","OriginType":7b,"RequestId":"00000000-0000-0000-0000-000000000000"})");
    return *cached;
}

std::unique_ptr<CompoundTag> getPlayerOriginTag(Player& player)
{
    static auto cached = CompoundTag::fromSNBT(R"({"OriginType":0b,"PlayerId":0l})");
    auto tag = cached->clone();
    tag->putInt64("PlayerId", player.getUniqueID());
    return std::move(tag);
}

bool Level::executeCommand(const string& cmd) {
    auto origin = ::ServerCommandOrigin::load(getServerOriginTag(), *Global<ServerLevel>);
    return MinecraftCommands::_runcmd(std::move(origin), cmd);
}

std::unordered_map<CommandOrigin const*, string*> resultOfOrigin;

std::pair<bool, string> Level::executeCommandEx(const string& cmd)
{
    auto origin = ::ServerCommandOrigin::load(getServerOriginTag(), *Global<ServerLevel>);
    string val;
    resultOfOrigin[origin.get()] = &val;
    bool rv = MinecraftCommands::_runcmd(std::move(origin), cmd);
    return {rv, std::move(val)};
}


static void* FAKE_PORGVTBL[26];
bool Level::executeCommandAs(Player* pl, const string& cmd) {
    auto tag = getPlayerOriginTag(*pl);
    auto origin = PlayerCommandOrigin::load(*tag, *Global<Level>);
    return MinecraftCommands::_runcmd(std::move(origin), cmd);
}


std::vector<Player*> Level::getAllPlayers() {
    try
    {
        std::vector<Player*> player_list;
        Global<Level>->forEachPlayer([&](Player& sp) -> bool {
            Player* player = &sp;
            player_list.push_back(player);
            return true;
            });
        return player_list;
    }
    catch (...)
    {
        return {};
    }
}

std::vector<Actor*> Level::getAllEntities(int dimId) {
    try
    {
        Level* lv = Global<Level>;
        Dimension* dim = lv->getDimension(dimId);
        if (!dim)
            return {};
        auto& list = *(std::unordered_map<ActorUniqueID, void*>*)((uintptr_t)dim + 320); //IDA Dimension::registerEntity

        //Check Valid
        std::vector<Actor*> result;
        auto currTick = SymCall("?getCurrentTick@Level@@UEBAAEBUTick@@XZ", Tick*, Level*)(lv)->t;
        for (auto& i : list) {
            //auto entity = SymCall("??$tryUnwrap@VActor@@$$V@WeakEntityRef@@QEBAPEAVActor@@XZ",
            //    Actor*, void*)(&i.second);
            auto entity = getEntity(i.first);
            if (!entity)
                continue;
            auto lastTick = entity->getLastTick();
            if (!lastTick)
                continue;
            if (currTick - lastTick->t == 0 || currTick - lastTick->t == 1)
                result.push_back(entity);
        }
        return result;
    }
    catch (...)
    {
        return {};
    }
}

std::vector<Actor*> Level::getAllEntities()
{

    //std::vector<Actor*> entityList;
    //auto entities = getAllEntities(0);
    //entityList.insert(entityList.end(), entities.begin(), entities.end());
    //entities = getAllEntities(1);
    //entityList.insert(entityList.end(), entities.begin(), entities.end());
    //entities = getAllEntities(2);
    //entityList.insert(entityList.end(), entities.begin(), entities.end());
    //return entityList;
    return Global<Level>->getRuntimeActorList();
}

Player* Level::getPlayer(const string& info) {
    string target{info};
    std::transform(target.begin(), target.end(), target.begin(), ::tolower); //lower case the string
    size_t delta = UINT64_MAX;                                                  //c++ int max
    Player* found = nullptr;
    Global<Level>->forEachPlayer([&](Player& sp) -> bool {
        Player* p = &sp;
        if (p->getXuid() == target || p->getRealName() == info)
        {
            found = p;
            return false;
        }

        string pName = p->getRealName();
        std::transform(pName.begin(), pName.end(), pName.begin(), ::tolower);

        //模糊匹配
        if (pName.find(target) == 0) {
            //0 ís the index where the "target" appear in "pName"
            size_t curDelta = pName.length() - target.length();
            if (curDelta == 0) {
                found = p;
            }

            if (curDelta < delta) {
                found = p;
                delta = curDelta;
            }
        }
        return true;
    });
    return found;
}

Player* Level::getPlayer(ActorUniqueID id)
{
    return SymCall("?getPlayer@Level@@UEBAPEAVPlayer@@UActorUniqueID@@@Z", Player*, Level*, ActorUniqueID)(Global<Level>, id);
}

Actor* Level::spawnMob(Vec3 pos, int dimId, std::string name) {

    Spawner* sp = &Global<Level>->getSpawner();
    return sp->spawnMob(pos, dimId, std::move(name));
}

Actor* Level::spawnItem(Vec3 pos, int dimId, ItemStack* item) {
    Spawner* sp = &Global<Level>->getSpawner();
    return sp->spawnItem(pos, dimId, item);
}

bool Level::createExplosion(Vec3 pos, int dimId, Actor* source, float radius, bool createFire, bool canBreak, float maxResistance) {
    Global<Level>->explode(*Level::getBlockSource(dimId), source, pos, radius, createFire, canBreak, maxResistance, false);
    return true;
}

#include <MC/ItemRegistry.hpp>
ItemStack* Level::getItemStackFromId(short itemId, int aux) {
    auto item = ItemRegistry::getItem(itemId);
    if (item)
        return new ItemStack(*item, 1, aux);
    return nullptr;
}

void Level::broadcastText(const string& a1, TextType ty) 
{
    if (!Global<Level>)
        return;
    Global<Level>->forEachPlayer([&](Player& sp) -> bool {
        sp.sendTextPacket(a1, ty);
        return true;
    });
}

void Level::broadcastTitle(const string& text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration)
{
    if (!Global<Level>)
        return;
    Global<Level>->forEachPlayer([&](Player& sp) -> bool {
        sp.sendTitlePacket(text, Type, FadeInDuration, RemainDuration, FadeOutDuration);
        return true;
    });
}

void Level::sendPacketForAllPlayer(Packet& pkt)
{
    if (!Global<Level>)
        return;
    auto sender = (LoopbackPacketSender*)Global<Level>->getPacketSender();
    if (sender)
        return sender->sendBroadcast(pkt);
}

std::string Level::getCurrentLevelName()
{
    if (Global<PropertiesSettings>)
        return Global<PropertiesSettings>->getLevelName();
    std::ifstream fin("server.properties");
    string buf;
    while (getline(fin, buf))
    {
        if (buf.find("level-name=") != string::npos)
        {
            if (buf.back() == '\n') buf.pop_back();
            if (buf.back() == '\r') buf.pop_back();
            return buf.substr(11);
        }
    }
    return "";
}

std::string Level::getCurrentLevelPath()
{
    return "./worlds/" + getCurrentLevelName();
}
