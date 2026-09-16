#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockShape.h"

// clang-format off
class BlockType;
class Material;
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockArchetype; }
// clang-format on

struct BlockArchetypeDispatcher {
public:
    /// @return The newly registered block, or nullptr when no factory claims the archetype.
    [[nodiscard]] LLNDAPI static ::BlockType* tryRegisterBlock(
        ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype const& archetypeData,
        ::std::string const&                                            blockName,
        int                                                             blockID,
        ::Material const&                                               material
    );

    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::BlockShape getBlockShape(::std::string const& blockName);
#endif
    // NOLINTEND
};
