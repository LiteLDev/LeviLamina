#include "mc/world/level/block/Block.h"
#include "liteloader/api/GlobalServiceAPI.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/BlockPalette.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/block/states/BlockState.h"
#include "mc/world/level/block/utils/BlockSerializationUtils.h"

std::string const& Block::getTypeName() const { return getName().getString(); }

short Block::getBlockItemId() const { return getLegacyBlock().getBlockItemId(); }

optional_ref<Block const> tryGetFromRegistry(unsigned int runtimeID) {

    auto& res = Global<Level>->getBlockPalette().getBlock(runtimeID);

    if (res.getRuntimeId() != runtimeID) {
        return nullptr;
    }

    return res;
}
optional_ref<Block const> tryGetFromRegistry(std::string const& name) {
    auto blockLegacyPtr = BlockTypeRegistry::lookupByName(HashedString{name});
    if (!blockLegacyPtr) {
        return nullptr;
    }
    return blockLegacyPtr->getDefaultState();
}
optional_ref<Block const> tryGetFromRegistry(std::string const& name, unsigned short legacyData) {
    auto blockLegacyPtr = BlockTypeRegistry::lookupByName(HashedString{name});
    if (!blockLegacyPtr) {
        return nullptr;
    }
    return blockLegacyPtr->getStateFromLegacyData(legacyData);
}
optional_ref<Block const> tryGetFromRegistry(std::string const& name, Block::BlockStatesType const& states) {
    HashedString nameHash{name};
    auto         blockLegacyPtr = BlockTypeRegistry::lookupByName(nameHash);
    if (!blockLegacyPtr) {
        return nullptr;
    }
    auto* rawPtr = blockLegacyPtr.get();
    if (!BlockTypeRegistry::isComplexAliasBlock(nameHash)) {
        return rawPtr->getDefaultState();
    }
    std::vector<BlockTypeRegistry::BlockComplexAliasBlockState> stateList;
    for (auto& state : states) {
        HashedString stateNameHash{state.first};
        auto*        stateBase = rawPtr->getBlockState(stateNameHash);
        if (stateBase == nullptr) {
            continue;
        }
        int         value = 0;
        CompoundTag stateNBT{};
        switch (state.second.index()) {
        case 0:
            stateNBT.putInt(state.first, std::get<0>(state.second));
            break;
        case 1:
            stateNBT.putFloat(state.first, std::get<1>(state.second));
            break;
        case 2:
            stateNBT.putBoolean(state.first, std::get<2>(state.second));
            break;
        case 3:
            stateNBT.putString(state.first, std::get<3>(state.second));
            break;
        default:
            break;
        }
        if (!stateBase->fromNBT(stateNBT, value)) {
            continue;
        }
        stateList.emplace_back(stateNameHash, value);
    }
    return BlockTypeRegistry::lookupByName(nameHash, stateList);
}
optional_ref<Block const> tryGetFromRegistry(class CompoundTag const& nbt) {
    return BlockSerializationUtils::tryGetBlockFromNBT(nbt, nullptr).second;
}