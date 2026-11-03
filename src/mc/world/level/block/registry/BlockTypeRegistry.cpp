#include "mc/world/level/block/registry/BlockTypeRegistry.h"

void BlockTypeRegistry::finalizeBlockComponentStorage() {
    for (auto& entry : *mBlockLookupMap) {
        auto const& blockType = entry.second;
        if (blockType) {
            blockType->finalizeBlockComponentStorage();
        }
    }
}
