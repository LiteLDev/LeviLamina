#include "liteloader/api/Global.h"
#include "liteloader/api/memory/MemoryUtils.h"
#include "mc/Block.hpp"
#include "mc/Material.hpp"
#include "mc/BlockActor.hpp"
#include "mc/BlockInstance.hpp"
#include "mc/BlockLegacy.hpp"
#include "mc/BlockSource.hpp"
#include "mc/ItemInstance.hpp"
#include "mc/ItemStack.hpp"
#include "mc/Level.hpp"

BlockInstance::BlockInstance(Block* block, BlockPos pos, int dimID) : block(block), pos(pos), dim(dimID) {}

BlockInstance::BlockInstance(BlockPos pos, int dimID) : pos(pos), dim(dimID) { block = Level::getBlock(pos, dimID); }

BlockInstance BlockInstance::createBlockInstance(Block* block, BlockPos pos, int dimID) {
    return BlockInstance(block, pos, dimID);
}

bool BlockInstance::operator==(BlockInstance const& bli) {
    return block == bli.block && pos == bli.pos && dim == bli.dim;
};

Block* BlockInstance::getBlock() { return isNull() ? nullptr : block; };

bool BlockInstance::hasBlockEntity() { return block->hasBlockEntity(); }

BlockActor* BlockInstance::getBlockEntity() { return Level::getBlockSource(dim)->getBlockEntity(pos); }

bool BlockInstance::hasContainer() { return getContainer() != nullptr; }

class DropperBlockActor;
Container* BlockInstance::getContainer() {
    auto be = getBlockEntity();
    if (!be)
        return nullptr;
    switch ((int)be->getType()) { // From Hopper::_getContainerInBlock
    case 1:
    case 8:
    case 15:
    case 38:
    case 39:
        return LL_SYMBOL_CALL("?getContainer@ChemistryTableBlockActor@@UEBAPEBVContainer@@XZ", Container*, BlockActor*)(be);
        break;
    case 2:
    case 13:
    case 14:
    case 25:
    case 33:
    case 42:
        return LL_SYMBOL_CALL("?getContainer@ChestBlockActor@@UEBAPEBVContainer@@XZ", Container*, BlockActor*)(be);
    }
    return nullptr;
}

bool BlockInstance::breakNaturally(bool isCreativeMode) {
    auto canDestroy = isCreativeMode || (block->getDestroySpeed() >= 0.0f);
    if (!canDestroy)
        return false;

    auto& material   = block->getMaterial();
    bool  shouldDrop = material.isAlwaysDestroyable();
    shouldDrop       = shouldDrop && !isCreativeMode;

    auto out = Global<Level>->destroyBlock(*Level::getBlockSource(dim), pos, shouldDrop);
    return out;
}

bool BlockInstance::breakNaturally(ItemStack* tool, bool isCreativeMode) {
    auto canDestroy = isCreativeMode || (block->getDestroySpeed() >= 0.0f);
    if (!canDestroy)
        return false;

    auto& material   = block->getMaterial();
    bool  shouldDrop = material.isAlwaysDestroyable() || tool->canDestroySpecial(*block);
    shouldDrop       = shouldDrop && !isCreativeMode;

    bool out = Global<Level>->destroyBlock(*Level::getBlockSource(dim), pos, shouldDrop);
    return out;
}

ItemStack BlockInstance::getBlockDrops() {
    auto v17 = block->asItemInstance(*Level::getBlockSource(dim), pos);
    return ItemStack::fromItemInstance(v17);
}

BlockPos BlockInstance::getPosition() { return pos; }

BlockSource* BlockInstance::getBlockSource() { return Level::getBlockSource(dim); }

int BlockInstance::getDimensionId() { return dim; }


bool BlockInstance::isNull() { return *this == BlockInstance::Null; }

#include "mc/VanillaDimensions.hpp"
const BlockInstance BlockInstance::Null = BlockInstance(nullptr, BlockPos::MIN, VanillaDimensions::Undefined);
