#include "llapi/LoggerAPI.h"
#include "liteloader/LiteLoader.h"
#include "llapi/mc/Block.hpp"
#include "llapi/mc/BlockLegacy.hpp"
#include "llapi/mc/BlockPalette.hpp"
#include "llapi/mc/BlockSerializationUtils.hpp"
#include "llapi/mc/BlockTypeRegistry.hpp"
#include "llapi/mc/CompoundTag.hpp"
#include "llapi/mc/HashedString.hpp"
#include "llapi/mc/Level.hpp"

Block const* Block::create(const string& name, unsigned short tileData) {
    auto blk = Global<Level>->getBlockPalette().getBlockLegacy(name);
    if (!blk)
        return nullptr;
    return const_cast<BlockLegacy*>(blk)->toBlock(tileData);
}

Block const* Block::create(unsigned int runtimeid) {
    return &(Global<Level>->getBlockPalette().getBlock(runtimeid));
}

Block const* Block::create(const string& name) {
    return &BlockTypeRegistry::getDefaultBlockState(HashedString{name}, true);
}

Block const* Block::create(const string& name, std::vector<BlockStateType> const& states) {
    HashedString blockNameHash{name};
    if (BlockTypeRegistry::isComplexAliasBlock(blockNameHash)) {
        std::vector<BlockTypeRegistry::BlockComplexAliasBlockState> blockStates;
        for (auto& state : states) {
            int value = 0;
        
        // TODO: get real state value

            blockStates.push_back({HashedString{state.first}, value});
        }
        return BlockTypeRegistry::lookupByName(blockNameHash, blockStates, true);
    }
    auto blockLegacyPtr = BlockTypeRegistry::lookupByName(blockNameHash, true);
    if (blockLegacyPtr) {
        auto* defaultState = &(blockLegacyPtr->getDefaultState());
        if (defaultState != nullptr) {
            return defaultState;
        }
    }
    return nullptr;
}

Block const* Block::create(CompoundTag* nbt) {
    // pair<enum BlockSerializationUtils::NBTState, Block*>
    auto result = BlockSerializationUtils::tryGetBlockFromNBT(*nbt, nullptr);
    return const_cast<Block*>(result.second);
}

string Block::getTypeName() const {
    return this->getName().getString();
}

int Block::getId() const {
    return getLegacyBlock().getBlockItemId();
}

std::unique_ptr<CompoundTag> Block::getNbt() const {
    return getSerializationId().clone();
}

bool Block::setNbt(CompoundTag* nbt) {
    nbt->setBlock(this);
    return true;
}