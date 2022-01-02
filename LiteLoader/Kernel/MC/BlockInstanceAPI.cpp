#include <Global.h>
#include <MC/Block.hpp>
#include <MC/BlockActor.hpp>
#include <MC/BlockInstance.hpp>
#include <MC/BlockLegacy.hpp>
#include <MC/BlockSource.hpp>
#include <MC/ChestBlockActor.hpp>
#include <MC/ItemInstance.hpp>
#include <MC/ItemStack.hpp>
#include <MC/Level.hpp>
#include <MC/LootComponent.hpp>
#include <MC/ItemInstance.hpp>

BlockInstance::BlockInstance(Block* block, BlockPos pos, int dimID)
    : block(block)
    , pos(pos)
    , dim(dimID) {
}

BlockInstance::BlockInstance(BlockPos pos, int dimID)
    : pos(pos)
    , dim(dimID) {
    block = Level::getBlock(pos, dimID);
}

BlockInstance BlockInstance::createBlockInstance(Block* block, BlockPos pos, int dimID) {
    return BlockInstance(block, pos, dimID);
}

bool BlockInstance::operator==(BlockInstance const& bli) {
    return block == bli.block && pos == bli.pos && dim == bli.dim;
};

Block* BlockInstance::getBlock() {
    return isNull() ? nullptr : block;
};

bool BlockInstance::hasBlockEntity() {
    return block->hasBlockEntity();
}

BlockActor* BlockInstance::getBlockEntity() {
    return Level::getBlockSource(dim)->getBlockEntity(pos);
}

bool BlockInstance::hasContainer() {
    return getContainer() != nullptr;
}

class DropperBlockActor;
Container* BlockInstance::getContainer()
{
    auto be = getBlockEntity();
    if (!be)
        return nullptr;
    return VirtualCall<Container*>(be, 224); // IDA ChestBlockActor::`vftable'{for `RandomizableBlockActorContainerBase'}
}

//bad
bool BlockInstance::breakNaturally() {
    auto out = Global<Level>->destroyBlock(*Level::getBlockSource(dim), pos, 1);
    return out;
}

bool BlockInstance::breakNaturally(ItemStack* tool) {
    bool canDestroy = tool->canDestroy(block);
    bool out;
    if (canDestroy) {
        out = Global<Level>->destroyBlock(*Level::getBlockSource(dim), pos, 1);
    }
    out = Global<Level>->destroyBlock(*Level::getBlockSource(dim), pos, 0);
    return out;
}

ItemStack BlockInstance::getBlockDrops() {
    auto v17 = block->asItemInstance(*Level::getBlockSource(dim), pos);
    return ItemStack::fromItemInstance(v17);
}

BlockPos BlockInstance::getPosition() {
    return pos;
}

BlockSource* BlockInstance::getBlockSource() {
    return Level::getBlockSource(dim);
}

int BlockInstance::getDimensionId() {
    return dim;
}


bool BlockInstance::isNull() {
    return *this == BlockInstance::Null;
}

const BlockInstance BlockInstance::Null = BlockInstance(nullptr, {INT_MIN, INT_MIN, INT_MIN}, -1);
