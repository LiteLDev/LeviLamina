#pragma once
#include "../Global.h"
class BlockSource;
class Block;
class ItemStack;
class BlockActor;
class Container;

class BlockInstance
{
    Block* block;
    BlockPos pos;
    int dim;

public:
    LIAPI BlockInstance() = default;
    LIAPI BlockInstance(Block* block, BlockPos pos, int dimid);
    LIAPI BlockInstance(BlockPos pos, int dimid = 0);

    LIAPI Block* getBlock();
    LIAPI BlockPos getPosition();
    LIAPI BlockSource* getBlockSource();
    LIAPI int getDimensionId();

    LIAPI bool hasBlockEntity();
    LIAPI BlockActor* getBlockEntity();
    LIAPI bool hasContainer();
    LIAPI Container* getContainer();

    LIAPI bool breakNaturally();
    LIAPI bool breakNaturally(ItemStack* tool);
    LIAPI ItemStack& getBlockDrops();
    LIAPI bool isNull();

    LIAPI bool operator==(BlockInstance const& bli);
    LIAPI const static BlockInstance Null;
};