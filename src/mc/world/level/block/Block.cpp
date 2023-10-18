#include "mc/world/level/block/Block.h"

#include "mc/deps/core/string/HashedString.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/level/BlockPalette.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/block/states/BlockState.h"
#include "mc/world/level/block/utils/BlockSerializationUtils.h"
#include "mc/world/level/block/utils/VanillaBlockConversion.h"

#include "ll/api/service/GlobalService.h"

using ll::Global;

optional_ref<Block const> Block::tryGetFromRegistry(uint runtimeID) {
    auto& res = Global<Level>->getBlockPalette().getBlock(runtimeID);
    if (res.getRuntimeId() != runtimeID) { return nullptr; }
    return res;
}
optional_ref<Block const> Block::tryGetFromRegistry(std::string const& name) {
    auto blockLegacyPtr = BlockTypeRegistry::lookupByName(HashedString{name});
    if (!blockLegacyPtr) { return nullptr; }
    return blockLegacyPtr->getDefaultState();
}
optional_ref<Block const> Block::tryGetFromRegistry(std::string const& name, ushort legacyData) {
    auto blockLegacyPtr = BlockTypeRegistry::lookupByName(HashedString{name});
    if (!blockLegacyPtr) { return nullptr; }
    return blockLegacyPtr->tryGetStateFromLegacyData(legacyData);
}
optional_ref<Block const> Block::tryGetFromRegistry(uint legacyBlockID, ushort legacyData) {
    auto blockLegacyPtr = VanillaBlockConversion::getBlockTypeFromLegacyId(legacyBlockID);
    if (!blockLegacyPtr) { return nullptr; }
    return blockLegacyPtr->tryGetStateFromLegacyData(legacyData);
}
optional_ref<Block const> Block::tryGetFromRegistry(std::string const& name, Block::BlockStatesType const& states) {
    HashedString nameHash{name};
    auto         blockLegacyPtr = BlockTypeRegistry::lookupByName(nameHash);
    if (!blockLegacyPtr) { return nullptr; }
    auto* rawPtr = blockLegacyPtr.get();
    if (!BlockTypeRegistry::isComplexAliasBlock(nameHash)) { return rawPtr->getDefaultState(); }
    std::vector<BlockTypeRegistry::BlockComplexAliasBlockState> stateList;
    for (auto& [k, v] : states) {
        HashedString stateNameHash{k};
        auto*        stateBase = rawPtr->getBlockState(stateNameHash);
        if (stateBase == nullptr) { continue; }
        int         value = 0;
        CompoundTag stateNBT{};
        switch (v.index()) {
        case 0:
            stateNBT.putInt(k, std::get<int>(v));
            break;
        case 1:
            stateNBT.putFloat(k, std::get<float>(v));
            break;
        case 2:
            stateNBT.putBoolean(k, std::get<bool>(v));
            break;
        case 3:
            stateNBT.putString(k, std::get<std::string>(v));
            break;
        default:
            break;
        }
        if (!stateBase->fromNBT(stateNBT, value)) { continue; }
        stateList.emplace_back(stateNameHash, value);
    }
    return BlockTypeRegistry::lookupByName(nameHash, stateList);
}
optional_ref<Block const> Block::tryGetFromRegistry(class CompoundTag const& nbt) {
    return BlockSerializationUtils::tryGetBlockFromNBT(nbt, nullptr).second;
}