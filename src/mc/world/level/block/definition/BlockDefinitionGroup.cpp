#include "mc/world/level/block/definition/BlockDefinitionGroup.h"

#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/deps/shared_types/v1_26_20/block/VanillaBlockData.h"
#include "mc/world/actor/DefinitionEvent.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/BlockCustomComponentsComponent.h"
#include "mc/world/level/block/components/BlockDeprecatedR16EventListenerComponent.h"
#include "mc/world/level/block/components/BlockDestructibleByExplosionDescription.h"
#include "mc/world/level/block/components/BlockDestructibleByMiningDescription.h"
#include "mc/world/level/block/components/triggers/OnInteractTrigger.h"
#include "mc/world/level/block/components/triggers/OnPlayerPlacingTrigger.h"
#include "mc/world/level/block/definition/BlockArchetypeDispatcher.h"
#include "mc/world/level/block/definition/BlockDefinition.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/material/Material.h"


void BlockDefinitionGroup::initBlockTypeFromDefinition(::BlockType& blockType, ::BlockDefinition const& definition) {
    for (auto const& description : definition.mBaseComponents->mDescriptions.get()) {
        if (description) {
            description->initializeComponent(*blockType.mComponents);
        }
    }

    // The R16 listener is only installed when the storage still accepts new components.
    if (!definition.mEventHandlers->empty() && blockType.mComponents->mAllowModifyingComponents) {
        blockType.mComponents->_addStatefulComponent<::BlockDeprecatedR16EventListenerComponent>(
            ::Bedrock::type_id<void, ::BlockDeprecatedR16EventListenerComponent>(),
            definition.mEventHandlers.get()
        );
    }

    for (auto const& tag : definition.mBaseComponents->mTags.get()) {
        blockType.addTag(tag);
    }

    // The custom components object sits right after its ComponentBase header.
    auto* componentBase =
        blockType.mComponents->_findComponentBase(::Bedrock::type_id<void, ::BlockCustomComponentsComponent>());
    auto* customComponents =
        componentBase ? reinterpret_cast<::BlockCustomComponentsComponent*>(&componentBase[1]) : nullptr;

    bool const hasOnPlayerPlacing = blockType.mComponents->hasComponent<::OnPlayerPlacingTrigger>();

    if (blockType.mComponents->hasComponent<::OnInteractTrigger>()) {
        blockType.setClientPredictionOverride(::BlockClientPredictionOverrides::BlockPlayerInteract, true);
        if (hasOnPlayerPlacing || (customComponents && customComponents->mHasPlayerPlacingEvent)) {
            blockType.setClientPredictionOverride(::BlockClientPredictionOverrides::BlockPlayerPlacing, true);
        }
        return;
    }
    if (customComponents) {
        if (customComponents->mHasPlayerInteractEvent) {
            blockType.setClientPredictionOverride(::BlockClientPredictionOverrides::BlockPlayerInteract, true);
        }
        if (hasOnPlayerPlacing || customComponents->mHasPlayerPlacingEvent) {
            blockType.setClientPredictionOverride(::BlockClientPredictionOverrides::BlockPlayerPlacing, true);
        }
        return;
    }
    if (hasOnPlayerPlacing) {
        blockType.setClientPredictionOverride(::BlockClientPredictionOverrides::BlockPlayerPlacing, true);
    }
}

BlockType* BlockDefinitionGroup::registerDataDrivenBlock(::BlockDescription const& desc) {
    ::BlockType* blockType = ::BlockArchetypeDispatcher::tryRegisterBlock(
        *desc.mVanillaBlockData->mBlockArchetype,
        desc.mIdentifier,
        desc.mVanillaBlockData->mBlockID,
        ::Material::getMaterial(desc.mVanillaBlockData->mMaterial)
    );
    if (blockType == nullptr) {
        // No archetype claimed it, so fall back to registering a plain block.
        blockType = &::BlockTypeRegistry::get().registerBlock<::BlockType, int const&, ::Material const&>(
            ::HashedString{desc.mIdentifier},
            desc.mVanillaBlockData->mBlockID,
            ::Material::getMaterial(desc.mVanillaBlockData->mMaterial)
        );
    }

    blockType->setIsVanillaBlock(desc.mIsBaseGameBlock);
    blockType->addComponent(::BlockDestructibleByExplosionDescription{0.0f})
        .addComponent(::BlockDestructibleByMiningDescription{0.0f});
    return blockType;
}

void BlockDefinitionGroup::initializeBlocks(::Level& level) {
    for (auto const& entry : *mBlockDefinitions) {
        if (auto const& definition = entry.second) {
            initializeBlockFromDefinition(*definition, level);
        }
    }
}
