#pragma once
#include "liteloader/api/Global.h"
#include "BlockPos.hpp"
class BlockSource;
class Block;
class ItemStack;
class BlockActor;
class Container;

class BlockInstance
{
    friend class Level;
    friend class BlockSource;

    Block* block;
    BlockPos pos;
    int dim;
    LLAPI BlockInstance(Block* block, BlockPos pos, int dimID);
    LLAPI BlockInstance(BlockPos pos, int dimID = 0);

public:
    LLAPI BlockInstance() = default;
    LLAPI static BlockInstance createBlockInstance(Block* block, BlockPos pos, int dimID);

    LLAPI Block* getBlock();
    LLAPI BlockPos getPosition();
    LLAPI BlockSource* getBlockSource();
    LLAPI int getDimensionId();

    LLAPI bool hasBlockEntity();
    LLAPI BlockActor* getBlockEntity();
    LLAPI bool hasContainer();
    LLAPI Container* getContainer();

    LLAPI bool breakNaturally(bool isCreativeMode = false);
    LLAPI bool breakNaturally(ItemStack* tool, bool isCreativeMode = false);
    LLAPI ItemStack getBlockDrops();
    LLAPI bool isNull();

    LLAPI bool operator==(BlockInstance const& bli);
    LLAPI const static BlockInstance Null;
};