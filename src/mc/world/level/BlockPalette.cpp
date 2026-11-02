#include "mc/world/level/BlockPalette.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"

void BlockPalette::initFromBlockDefinitions() {
    for (auto& [name, blockType] : *BlockTypeRegistry::get().mBlockLookupMap) {
        blockType->forEachBlockPermutation([this](::Block const& block) {
            appendBlock(block);
            return true;
        });
    }
}
