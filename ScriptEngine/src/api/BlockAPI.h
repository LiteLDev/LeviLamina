#pragma once
#include "api/APIHelp.h"
#include <llapi/mc/BlockInstance.hpp>
#include "main/Global.hpp"
#include <string>


//////////////////// Classes ////////////////////
class Block;
class BlockClass : public ScriptClass {
private:
    Block* block;

    // Pre data
    std::string name, type;
    int id;
    IntVec4 pos;

public:
    explicit BlockClass(Block const* p);
    BlockClass(Block const* p, BlockPos bp, int dim);

    void preloadData(BlockPos bp, int dim);
    Block* get() {
        return block;
    }
    BlockInstance toBlockInstance() {
        return BlockInstance::createBlockInstance(block, pos.getBlockPos(), pos.getDimensionId());
    }


    static Local<Object> newBlock(Block const* p, BlockPos const* pos, int dim);
    static Local<Object> newBlock(BlockPos const* pos, int dim);
    static Local<Object> newBlock(const BlockPos& pos, int dim);
    static Local<Object> newBlock(Block const* p, BlockPos const* pos, BlockSource const* bs);
    static Local<Object> newBlock(IntVec4 pos);
    static Local<Object> newBlock(BlockInstance block);
    static Block* extract(Local<Value> v);
    Local<Value> asPointer(const Arguments& args);

    Local<Value> getName();
    Local<Value> getType();
    Local<Value> getId();
    Local<Value> getPos();
    Local<Value> getTileData();
    Local<Value> getVariant();
    Local<Value> getTranslucency();
    Local<Value> getThickness();

    Local<Value> isAir();
    Local<Value> isBounceBlock();
    Local<Value> isButtonBlock();
    Local<Value> isCropBlock();
    Local<Value> isDoorBlock();
    Local<Value> isFenceBlock();
    Local<Value> isFenceGateBlock();
    Local<Value> isThinFenceBlock();
    Local<Value> isHeavyBlock();
    Local<Value> isStemBlock();
    Local<Value> isSlabBlock();
    Local<Value> isUnbreakable();
    Local<Value> isWaterBlockingBlock();

    Local<Value> getNbt(const Arguments& args);
    Local<Value> setNbt(const Arguments& args);
    Local<Value> getBlockState(const Arguments& args);
    Local<Value> hasContainer(const Arguments& args);
    Local<Value> getContainer(const Arguments& args);
    Local<Value> hasBlockEntity(const Arguments& args);
    Local<Value> getBlockEntity(const Arguments& args);
    Local<Value> removeBlockEntity(const Arguments& args);
    Local<Value> destroyBlock(const Arguments& args);
};
extern ClassDefine<BlockClass> BlockClassBuilder;