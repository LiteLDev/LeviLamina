#include "Global.h"
#include <LevelApi.h>
#include <BlockAPI.h>
#include <MCApi/Actor.hpp>
#include <MCApi/ItemStack.hpp>
#include <MCApi/Spawner.hpp>
#include <MCApi/Level.hpp>
#include <MCApi/ItemActor.hpp>
#include <MCApi/BlockSource.hpp>
#include <string>
#include <vector>


BlockSource* LevelObj::getBlockSource(int dimid) {
    LocateService<Level>()->getDimension(dimid);
    auto dim = LocateService<Level>()->getDimension(dimid);
    return dAccess<BlockSource*>(dim, 96);
}

BlockSource* LevelObj::getBlockSource(Actor* ac) {
    return const_cast<BlockSource*>(&ac->getRegionConst());
}

bool LevelObj::setBlock(IntVec4 pos, Block* block)
{
    BlockSource* bs = getBlockSource(pos.dim);
    BlockPos bp{ pos.x, pos.y, pos.z };
    return bs->setBlock(bp, *block, 3, nullptr);       // updateFlag = 3 from IDA SetBlockCommand::execute()
}

bool LevelObj::setBlock(IntVec4 pos, const string& name, unsigned short tileData)
{
    Block* newBlock = BlockObj::create(name, tileData);
    if (!newBlock)
        return false;
    return setBlock(pos, newBlock);
}

bool LevelObj::setBlock(IntVec4 pos, Tag* nbt)
{
    Block* newBlock = BlockObj::create(nbt);
    if (!newBlock)
        return false;
    return setBlock(pos, newBlock);
}

Actor* LevelObj::getDamageSourceEntity(ActorDamageSource* ads) {
    char v83;
    ActorUniqueID v6 = *(ActorUniqueID*)(*(__int64(__fastcall**)(void*, char*))(*(uintptr_t*)ads + 64))(ads, &v83);
    return LocateService<Level>()->fetchEntity(v6, 0);
}

bool LevelObj::spawnParticle(FloatVec4 pos, const string& type)
{
    string name = type;
    Level* level = LocateService<Level>();
    Dimension* dim = SymCall("?getDimension@Level@@UEBAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z",
        Dimension*, void*, AutomaticID<Dimension, int>)(level, AutomaticID<Dimension, int>(pos.dim));

    SymCall("?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@PEAVDimension@@@Z",
        void, Level*, string&, const Vec3&, void*)
        (level, name, { pos.x,pos.y,pos.z }, dim);

    return true;
}