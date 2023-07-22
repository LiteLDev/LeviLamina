#include "mc/Block.hpp"
#include "mc/BlockActorDataPacket.hpp"
#include "mc/BlockSource.hpp"
#include "mc/CompoundTag.hpp"
#include "mc/Dimension.hpp"
#include "mc/StructureBlockActor.hpp"

unsigned int BlockActor::getBlockEntityType(Block* block) {
    return static_cast<unsigned int>(block->getBlockEntityType()); // IDA Block::getBlockEntityType
}

std::shared_ptr<BlockActor> BlockActor::create(CompoundTag* nbt) {
    void* vtbl = LL_RESOLVE_SYMBOL("??_7DefaultDataLoadHelper@@6B@");
    return loadStatic(*Global<Level>, *nbt, (class DataLoadHelper&)vtbl);
}

std::shared_ptr<BlockActor> BlockActor::create(CompoundTag* nbt, class BlockPos const& pos) {
    auto b = create(nbt);
    if (b != nullptr) {
        b->moveTo(pos);
    }
    return b;
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
