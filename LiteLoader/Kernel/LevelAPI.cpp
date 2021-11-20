#include "Global.h"
#include <MC/Block.hpp>
#include <MC/Actor.hpp>
#include <MC/ItemStack.hpp>
#include <MC/Spawner.hpp>
#include <MC/Level.hpp>
#include <MC/ItemActor.hpp>
#include <MC/BlockSource.hpp>
#include <string>
#include <vector>


LIAPI BlockSource* Level::getBlockSource(int dimid) {
    Global<Level>()->getDimension(dimid);
    auto dim = Global<Level>()->getDimension(dimid);
    return dAccess<BlockSource*>(dim, 96);
}

BlockSource* Level::getBlockSource(Actor* ac) {
    return const_cast<BlockSource*>(&ac->getRegionConst());
}

bool Level::setBlock(IntVec4 pos, Block* block)
{
    BlockSource* bs = getBlockSource(pos.dim);
    BlockPos bp{ pos.x, pos.y, pos.z };
    return bs->setBlock(bp, *block, 3, nullptr);       // updateFlag = 3 from IDA SetBlockCommand::execute()
}

bool Level::setBlock(IntVec4 pos, const string& name, unsigned short tileData)
{
    Block* newBlock = Block::create(name, tileData);
    if (!newBlock)
        return false;
    return setBlock(pos, newBlock);
}

bool Level::setBlock(IntVec4 pos, Tag* nbt)
{
    Block* newBlock = Block::create(nbt);
    if (!newBlock)
        return false;
    return setBlock(pos, newBlock);
}

Actor* Level::getDamageSourceEntity(ActorDamageSource* ads) {
    char v83;
    ActorUniqueID v6 = *(ActorUniqueID*)(*(__int64(__fastcall**)(void*, char*))(*(uintptr_t*)ads + 64))(ads, &v83);
    return Global<Level>()->fetchEntity(v6, 0);
}

bool Level::spawnParticle(FloatVec4 pos, const string& type)
{
    string name = type;
    Level* level = Global<Level>();
    Dimension* dim = SymCall("?getDimension@Level@@UEBAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z",
        Dimension*, void*, AutomaticID<Dimension, int>)(level, AutomaticID<Dimension, int>(pos.dim));

    SymCall("?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@PEAVDimension@@@Z",
        void, Level*, string&, const Vec3&, void*)
        (level, name, { pos.x,pos.y,pos.z }, dim);

    return true;
}