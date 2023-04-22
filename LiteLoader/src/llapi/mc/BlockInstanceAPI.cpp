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

BlockInstance::BlockInstance(Block* block, BlockPos pos, int dimID) : block(block), pos(pos), dim(dimID) {}

BlockInstance::BlockInstance(BlockPos pos, int dimID) : pos(pos), dim(dimID) {
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

Container* BlockInstance::getContainer() {
    return Level::getContainer(pos.center(), dim);
    // auto be = getBlockEntity();
    // if (!be)
    //     return nullptr;
    // switch (be->getType()) { // From Hopper::_getContainerInBlock
    //     case BlockActorType::Furnace:
    //     case BlockActorType::BrewingStand:
    //     case BlockActorType::Hopper:
    //     case BlockActorType::BlastFurnace:
    //     case BlockActorType::Smoker:
    //         return SymCall("?getContainer@ChemistryTableBlockActor@@UEBAPEBVContainer@@XZ", Container*,
    //                        BlockActor*)(be);
    //         break;
    //     case BlockActorType::Chest:
    //     case BlockActorType::Dispenser:
    //     case BlockActorType::Dropper:
    //     case BlockActorType::ShulkerBox:
    //     case BlockActorType::Jukebox:
    //     case BlockActorType::BarrelBlock:
    //         return SymCall("?getContainer@ChestBlockActor@@UEBAPEBVContainer@@XZ", Container*, BlockActor*)(be);
    // }
    // return nullptr;
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

#include "llapi/mc/VanillaDimensions.hpp"
const BlockInstance BlockInstance::Null = BlockInstance(nullptr, BlockPos::MIN, VanillaDimensions::Undefined);
