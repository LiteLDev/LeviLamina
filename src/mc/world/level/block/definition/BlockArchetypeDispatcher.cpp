#include "mc/world/level/block/definition/BlockArchetypeDispatcher.h"

#include "mc/deps/shared_types/v1_26_20/block/BlockArchetype.h"
#include "mc/world/level/block/definition/BlockArchetypeDispatcherImpl.h"
#include "mc/world/level/material/Material.h"

::BlockType* BlockArchetypeDispatcher::tryRegisterBlock(
    ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype const& archetypeData,
    ::std::string const&                                            blockName,
    int                                                             blockID,
    ::Material const&                                               material
) {
    // The archetype is identified by whichever of its components has a registered factory.
    auto const& factories = ::BlockArchetypeDispatcherImpl::getBlockFactories();
    for (auto const& key : archetypeData.keys()) {
        auto it = factories.find(::std::string_view{key});
        if (it != factories.end()) {
            return it->second(archetypeData, blockName, blockID, material);
        }
    }
    return nullptr;
}
