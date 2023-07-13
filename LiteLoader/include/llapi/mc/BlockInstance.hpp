#pragma once
#include "../Global.h"
#include "BlockPos.hpp"
class BlockSource;
class Block;
class ItemStack;
class BlockActor;
class Container;

class BlockInstance {
public:
    friend class Level;
    friend class BlockSource;

    Block const* block;
    BlockPos pos;
    int dim;

    LIAPI BlockInstance(Block const* block, BlockPos const pos, int dimid);
    LIAPI BlockInstance(BlockPos const pos, int dimid);

    LIAPI BlockInstance() = default;

    LIAPI Block const* getBlock() const;
    LIAPI BlockPos const& getPosition() const;
    LIAPI BlockSource* getBlockSource() const;
    LIAPI int getDimensionId() const;

    LIAPI bool hasBlockEntity() const;
    LIAPI BlockActor* getBlockEntity() const;
    LIAPI bool hasContainer() const;
    LIAPI Container* getContainer() const;

    LIAPI bool breakNaturally(bool isCreativeMode = false);
    LIAPI bool breakNaturally(ItemStack* tool, bool isCreativeMode = false);
    LIAPI ItemStack getBlockDrops() const;
    LIAPI bool isNull() const;

    LIAPI bool operator==(BlockInstance const& bli) const;
    LIAPI const static BlockInstance Null;
};