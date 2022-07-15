#pragma once
#include "APIHelp.h"
#include <MC/BlockInstance.hpp>
#include <Global.hpp>
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
    Local<Value> getRawPtr(const Arguments& args);

    Local<Value> getName();
    Local<Value> getType();
    Local<Value> getId();
    Local<Value> getPos();
    Local<Value> getTileData();

    Local<Value> getNbt(const Arguments& args);
    Local<Value> setNbt(const Arguments& args);
    Local<Value> getBlockState(const Arguments& args);
    Local<Value> hasContainer(const Arguments& args);
    Local<Value> getContainer(const Arguments& args);
    Local<Value> hasBlockEntity(const Arguments& args);
    Local<Value> getBlockEntity(const Arguments& args);
    Local<Value> removeBlockEntity(const Arguments& args);
};
extern ClassDefine<BlockClass> BlockClassBuilder;