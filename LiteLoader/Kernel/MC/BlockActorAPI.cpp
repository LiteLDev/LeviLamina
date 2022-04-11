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
    auto pkt = getServerUpdatePacket(*bs);
    const_cast<Dimension&>(bs->getDimensionConst()).sendPacketForPosition(getPosition(), *pkt, nullptr);
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
    return res && refreshData(bs);
}