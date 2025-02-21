#include "mc/world/level/block/Block.h"

#include "mc/deps/core/string/HashedString.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/level/BlockPalette.h"
#include "mc/world/level/block/VanillaBlockConversion.h"
#include "mc/world/level/block/block_serialization_utils/BlockSerializationUtils.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/block/states/BlockState.h"

#include "ll/api/service/Bedrock.h"

optional_ref<Block const> Block::tryGetFromRegistry(uint runtimeID) {
    return ll::service::getLevel().transform([&](auto& level) -> decltype(auto) {
        return level.getBlockPalette().getBlock(runtimeID);
    });
}
optional_ref<Block const> Block::tryGetFromRegistry(std::string_view name) {
    return BlockLegacy::tryGetFromRegistry(name).transform([&](auto& block) -> decltype(auto) {
        return block.mDefaultState;
    });
}
optional_ref<Block const> Block::tryGetFromRegistry(std::string_view name, ushort legacyData) {
    return BlockLegacy::tryGetFromRegistry(name).transform([&](auto& block) -> decltype(auto) {
        return block.tryGetStateFromLegacyData(legacyData);
    });
}
optional_ref<Block const> Block::tryGetFromRegistry(uint legacyBlockID, ushort legacyData) {
    return BlockLegacy::tryGetFromRegistry(legacyBlockID).transform([&](auto& block) -> decltype(auto) {
        return block.tryGetStateFromLegacyData(legacyData);
    });
}
optional_ref<Block const> Block::tryGetFromRegistry(std::string_view name, Block::BlockStatesType const& states) {
    auto blockLegacyPtr = BlockLegacy::tryGetFromRegistry(name);
    if (!blockLegacyPtr) {
        return nullptr;
    }
    HashedString nameHash{name};
    if (!BlockTypeRegistry::isComplexAliasBlock(nameHash)) {
        return blockLegacyPtr->mDefaultState;
    }
    std::vector<BlockTypeRegistry::BlockComplexAliasBlockState> stateList;
    for (auto& [k, v] : states) {
        HashedString stateNameHash{k};
        auto*        stateBase = blockLegacyPtr->getBlockState(stateNameHash);
        if (stateBase == nullptr) {
            continue;
        }
        int         value{};
        CompoundTag state{};
        std::visit([&](auto& val) { state[k] = val; }, v);
        if (!stateBase->fromNBT(state, value)) {
            continue;
        }
        stateList.emplace_back(stateNameHash, value);
    }
    auto block =
        BlockTypeRegistry::_lookupByNameImpl(nameHash, 0, BlockTypeRegistry::LookupByNameImplResolve::Block).mBlock;
    if (block) {
        for (auto& state : stateList) {
            if (block) {
                auto legacyBlock = block->mLegacyBlock.get();
                if (!legacyBlock) {
                    return std::nullopt;
                }
                auto blockState = legacyBlock->getBlockState(state.stateName);
                if (!blockState) {
                    block = nullptr;
                    break;
                }
                block = legacyBlock->trySetState(*blockState, state.value, block->mData);
            }
        }
    }
    return block;
}
optional_ref<Block const> Block::tryGetFromRegistry(class CompoundTag const& nbt) {
    return BlockSerializationUtils::tryGetBlockFromNBT(nbt, nullptr).second;
}
