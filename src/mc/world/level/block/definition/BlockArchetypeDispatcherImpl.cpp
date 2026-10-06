#include "mc/world/level/block/definition/BlockArchetypeDispatcherImpl.h"

#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/v1_26_20/block/BlockArchetype.h"
#include "mc/deps/shared_types/v1_26_20/block/BushArchetype.h"
#include "mc/deps/shared_types/v1_26_20/block/FlowerBedArchetype.h"
#include "mc/deps/shared_types/v1_26_20/block/PumpkinArchetype.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/FlowerBedBlock.h"
#include "mc/world/level/block/PumpkinBlock.h"
#include "mc/world/level/block/VanillaStates.h"

namespace BlockArchetypeDispatcherImpl {

using ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype;
using ::SharedTypes::v1_26_20::BlockDefinition::BushArchetype;
using ::SharedTypes::v1_26_20::BlockDefinition::FlowerBedArchetype;
using ::SharedTypes::v1_26_20::BlockDefinition::PumpkinArchetype;

template <>
::BlockType* registerArchetypeBlock<BushArchetype>(
    BlockArchetype const&,
    ::std::string const& blockName,
    int                  blockID,
    ::Material const&
) {
    return &::BlockTypeRegistry::get().registerBlock<::BushBlock, int&>(::HashedString{blockName}, blockID);
}

template <>
::BlockType* registerArchetypeBlock<FlowerBedArchetype>(
    BlockArchetype const& archetypeData,
    ::std::string const&  blockName,
    int                   blockID,
    ::Material const&
) {
    auto const& bed = archetypeData.getComponent<FlowerBedArchetype>("flower_bed_block");

    // With no explicit height, a bed with stems is 3 tall and one without is 1.
    int visualHeight = bed.mVisualHeight.get().value_or(2 * static_cast<int>(bed.mHasStems) + 1);

    auto& block = ::BlockTypeRegistry::get().registerBlock<::FlowerBedBlock, int&, bool const&, int>(
        ::HashedString{blockName},
        blockID,
        bed.mHasStems,
        ::std::move(visualHeight)
    );
    return &block.addState(::VanillaStates::Growth(), 4);
}

template <>
::BlockType* registerArchetypeBlock<PumpkinArchetype>(
    BlockArchetype const& archetypeData,
    ::std::string const&  blockName,
    int                   blockID,
    ::Material const&
) {
    auto const& pumpkin = archetypeData.getComponent<PumpkinArchetype>("pumpkin_block");

    return &::BlockTypeRegistry::get().registerBlock<::PumpkinBlock, int&, bool const&, bool const&>(
        ::HashedString{blockName},
        blockID,
        pumpkin.mLit,
        pumpkin.mCarved
    );
}

::std::unordered_map<::std::string_view, BlockFactory> const& getBlockFactories() {
    static ::std::unordered_map<::std::string_view, BlockFactory> const blockFactories = {
        {      "bush_block",      &registerArchetypeBlock<BushArchetype>},
        {"flower_bed_block", &registerArchetypeBlock<FlowerBedArchetype>},
        {   "pumpkin_block",   &registerArchetypeBlock<PumpkinArchetype>},
    };
    return blockFactories;
}

} // namespace BlockArchetypeDispatcherImpl
