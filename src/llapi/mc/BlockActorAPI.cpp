#include "llapi/mc/CompoundTag.hpp"
#include "llapi/mc/Block.hpp"
#include "llapi/mc/BlockActorDataPacket.hpp"
#include "llapi/mc/Dimension.hpp"
#include "llapi/mc/BlockSource.hpp"
#include "llapi/mc/StructureBlockActor.hpp"

unsigned int BlockActor::getBlockEntityType(Block* block) {
    return static_cast<unsigned int>(block->getBlockEntityType()); // IDA Block::getBlockEntityType
}

bool BlockActor::refreshData() {
    setChanged();
    return true;
}

bool BlockActor::refreshData(BlockSource* bs) {
    refreshData();
    if (!bs)
        return false;
    auto pkt = getServerUpdatePacket(*bs);
    if (!pkt)
        return false;
    auto dimension = const_cast<Dimension*>(&bs->getDimensionConst());
    if (!dimension)
        return false;
    dimension->sendPacketForPosition(getPosition(), *pkt, nullptr);
    return true;
}

std::unique_ptr<CompoundTag> BlockActor::getNbt() { return CompoundTag::fromBlockActor(this); }

bool BlockActor::setNbt(CompoundTag* nbt) { return nbt->setBlockActor(this); }

bool BlockActor::setNbt(CompoundTag* nbt, BlockSource* bs) {
    auto res = setNbt(nbt);
    return res && (!bs || refreshData(bs));
}
