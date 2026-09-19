#include "mc/world/level/BlockPalette.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"

void BlockPalette::initFromBlockDefinitions() {
    ::BlockTypeRegistry::get().forEachBlockType([this](::BlockType const& blockType) {
        blockType.forEachBlockPermutation([this](::Block const& block) {
            appendBlock(block);
            return true;
        });
        return true;
    });
}
