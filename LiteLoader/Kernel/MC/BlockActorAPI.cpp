#include <MC/CompoundTag.hpp>
#include <MC/Block.hpp>
#include <MC/BlockActorDataPacket.hpp>
#include <MC/Dimension.hpp>
#include <MC/BlockSource.hpp>
#include <MC/StructureBlockActor.hpp>
#include <MC/StructureBlockPalette.hpp>
#include <MC/StructureEditorData.hpp>

unsigned int BlockActor::getBlockEntityType(Block* block) {
    return block->getBlockEntityType(); //IDA Block::getBlockEntityType
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