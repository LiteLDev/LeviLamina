#include <mc/CompoundTag.hpp>
#include <mc/Block.hpp>
#include <mc/BlockActorDataPacket.hpp>
#include <mc/Dimension.hpp>
#include <mc/BlockSource.hpp>
#include <mc/StructureBlockActor.hpp>
#include <mc/StructureBlockPalette.hpp>
#include <mc/StructureEditorData.hpp>

unsigned int BlockActor::getBlockEntityType(Block* block) {
    return block->getBlockEntityType(); // IDA Block::getBlockEntityType
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

std::unique_ptr<CompoundTag> BlockActor::getNbt() {
    return CompoundTag::fromBlockActor(this);
}

bool BlockActor::setNbt(CompoundTag* nbt) {
    return nbt->setBlockActor(this);
}

bool BlockActor::setNbt(CompoundTag* nbt, BlockSource* bs) {
    auto res = setNbt(nbt);
    return res && (!bs || refreshData(bs));
}