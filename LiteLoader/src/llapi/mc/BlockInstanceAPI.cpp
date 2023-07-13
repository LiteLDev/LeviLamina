#include "llapi/Global.h"
#include "llapi/mc/Block.hpp"
#include "llapi/mc/Material.hpp"
#include "llapi/mc/BlockActor.hpp"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/BlockLegacy.hpp"
#include "llapi/mc/BlockSource.hpp"
#include "llapi/mc/ChestBlockActor.hpp"
#include "llapi/mc/ItemInstance.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/ItemInstance.hpp"

BlockInstance::BlockInstance(Block const* block, BlockPos const pos, int dimid) : block(block), pos(pos), dim(dimid) {}

BlockInstance::BlockInstance(BlockPos pos, int dimID) : pos(pos), dim(dimID) {
    block = Level::getBlock(pos, dimID);
}

bool BlockInstance::operator==(BlockInstance const& bli) const {
    return block == bli.block && pos == bli.pos && dim == bli.dim;
};

Block const* BlockInstance::getBlock() const {
    return isNull() ? nullptr : block;
};

bool BlockInstance::hasBlockEntity() const {
    return block->hasBlockEntity();
}

BlockActor* BlockInstance::getBlockEntity() const {
    return Level::getBlockSource(dim)->getBlockEntity(pos);
}

bool BlockInstance::hasContainer() const {
    return getContainer() != nullptr;
}

class DropperBlockActor;

Container* BlockInstance::getContainer() const {
    return Level::getContainer(pos, dim);
}

bool BlockInstance::breakNaturally(bool isCreativeMode) {
    auto canDestroy = isCreativeMode || (block->getDestroySpeed() >= 0.0f);
    if (!canDestroy)
        return false;

    auto& material = block->getMaterial();
    bool shouldDrop = material.isAlwaysDestroyable();
    shouldDrop = shouldDrop && !isCreativeMode;

    auto out = Global<Level>->destroyBlock(*Level::getBlockSource(dim), pos, shouldDrop);
    return out;
}

bool BlockInstance::breakNaturally(ItemStack* tool, bool isCreativeMode) {
    auto canDestroy = isCreativeMode || (block->getDestroySpeed() >= 0.0f);
    if (!canDestroy)
        return false;

    auto& material = block->getMaterial();
    bool shouldDrop = material.isAlwaysDestroyable() || tool->canDestroySpecial(*block);
    shouldDrop = shouldDrop && !isCreativeMode;

    bool out = Global<Level>->destroyBlock(*Level::getBlockSource(dim), pos, shouldDrop);
    return out;
}

ItemStack BlockInstance::getBlockDrops() const {
    auto v17 = block->asItemInstance(*Level::getBlockSource(dim), pos);
    return ItemStack::fromItemInstance(v17);
}

BlockPos const& BlockInstance::getPosition() const {
    return pos;
}

BlockSource* BlockInstance::getBlockSource() const {
    return Level::getBlockSource(dim);
}

int BlockInstance::getDimensionId() const {
    return dim;
}

bool BlockInstance::isNull() const {
    return *this == BlockInstance::Null;
}

#include "llapi/mc/VanillaDimensions.hpp"
const BlockInstance BlockInstance::Null = BlockInstance(nullptr, BlockPos::MIN, VanillaDimensions::Undefined);
