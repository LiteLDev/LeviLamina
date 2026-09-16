#include "mc/world/level/block/definition/BlockDefinitionGroup.h"

#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/v1_26_20/block/VanillaBlockData.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/components/BlockDestructibleByExplosionDescription.h"
#include "mc/world/level/block/components/BlockDestructibleByMiningDescription.h"
#include "mc/world/level/block/definition/BlockArchetypeDispatcher.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/material/Material.h"

void BlockDefinitionGroup::initBlockTypeFromDefinition(::BlockType& blockType, ::BlockDefinition const& definition) {}

::WeakPtr<::BlockType> BlockDefinitionGroup::registerDataDrivenBlock(::BlockDescription const& desc) {
    ::BlockType* blockType = ::BlockArchetypeDispatcher::tryRegisterBlock(
        *desc.mVanillaBlockData->mBlockArchetype,
        desc.mIdentifier,
        desc.mVanillaBlockData->mBlockID,
        ::Material::getMaterial(desc.mVanillaBlockData->mMaterial)
    );
    if (blockType == nullptr) {
        // No archetype claimed it, so fall back to registering a plain block.
        blockType =
            &::BlockTypeRegistry::get().registerBlock<::BlockType, int const&, ::Material const&>(
                ::HashedString{desc.mIdentifier},
                desc.mVanillaBlockData->mBlockID,
                ::Material::getMaterial(desc.mVanillaBlockData->mMaterial)
            );
    }

    ::WeakPtr<::BlockType> weakPtr = blockType->createWeakPtr();
    weakPtr->setIsVanillaBlock(desc.mIsBaseGameBlock);
    weakPtr->addComponent(::BlockDestructibleByExplosionDescription{0.0f})
        .addComponent(::BlockDestructibleByMiningDescription{0.0f});
    return weakPtr;
}

void BlockDefinitionGroup::initializeBlocks(::Level& level) {
    for (auto const& entry : *mBlockDefinitions) {
        if (auto const& definition = entry.second) {
            initializeBlockFromDefinition(*definition, level);
        }
    }
}
