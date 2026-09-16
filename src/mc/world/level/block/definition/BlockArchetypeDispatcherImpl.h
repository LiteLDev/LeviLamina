#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"

// clang-format off
class BlockType;
class BushBlock;
class FlowerBedBlock;
class Material;
class PumpkinBlock;
class HashedString;
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockArchetype; }
namespace SharedTypes::v1_26_20::BlockDefinition { struct BushArchetype; }
namespace SharedTypes::v1_26_20::BlockDefinition { struct FlowerBedArchetype; }
namespace SharedTypes::v1_26_20::BlockDefinition { struct PumpkinArchetype; }
// clang-format on

namespace BlockArchetypeDispatcherImpl {

/// @brief The signature every archetype factory has.
using BlockFactory = ::std::function<::BlockType*(
    ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype const& archetypeData,
    ::std::string const&                                            blockName,
    int                                                             blockID,
    ::Material const&                                               material
)>;

/// @brief Restored: inlined in the game, so it is reimplemented here.
/// @return The archetype name -> factory table (`bush_block`, `flower_bed_block`, `pumpkin_block`).
[[nodiscard]] LLNDAPI ::std::unordered_map<::std::string_view, BlockFactory> const& getBlockFactories();

/// @brief Registers the block class backing `TArchetype` under `blockName`.
///        Every archetype has its own body, so this is specialized per archetype in the source file
///        rather than being a single generic implementation.
template <class TArchetype>
::BlockType* registerArchetypeBlock(
    ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype const& archetypeData,
    ::std::string const&                                            blockName,
    int                                                             blockID,
    ::Material const&                                               material
);

template <>
LLNDAPI ::BlockType* registerArchetypeBlock<::SharedTypes::v1_26_20::BlockDefinition::BushArchetype>(
    ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype const& archetypeData,
    ::std::string const&                                            blockName,
    int                                                             blockID,
    ::Material const&                                               material
);

template <>
LLNDAPI ::BlockType* registerArchetypeBlock<::SharedTypes::v1_26_20::BlockDefinition::FlowerBedArchetype>(
    ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype const& archetypeData,
    ::std::string const&                                            blockName,
    int                                                             blockID,
    ::Material const&                                               material
);

template <>
LLNDAPI ::BlockType* registerArchetypeBlock<::SharedTypes::v1_26_20::BlockDefinition::PumpkinArchetype>(
    ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype const& archetypeData,
    ::std::string const&                                            blockName,
    int                                                             blockID,
    ::Material const&                                               material
);

} // namespace BlockArchetypeDispatcherImpl
