#include "mc/world/level/block/components/BlockComponentStorageFinalizer.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/components/BlockRedstoneProducerComponent.h"

void BlockComponentStorageFinalizer::finalizeComponentData(::Block& block) {
    _finalizeCollisionBoxComponent(block);
    _finalizeSelectionBoxComponent(block);

    auto* redstoneProducer = block.mComponents->_findComponentTyped<::BlockRedstoneProducerComponent>();
    if (redstoneProducer == nullptr) {
        return;
    }
    // The permutation's own storage wins; the block type's is only a fallback.
    auto* transformation = block.mComponents->_findComponentTyped<::BlockTransformationComponent>();
    if (transformation == nullptr) {
        transformation = block.mBlockType->mComponents->_findComponentTyped<::BlockTransformationComponent>();
    }
    redstoneProducer->finalize(transformation);
}
