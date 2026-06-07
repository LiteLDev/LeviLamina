#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class CompoundTag;
class Material;
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockArchetype; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockArchetypeDispatcher {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildNetworkTag(
        ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype const& archetypeData,
        ::CompoundTag&                                                  tag,
        ::cereal::ReflectionCtx const&                                  ctx
    );

    MCAPI static void initializeFromNetwork(
        ::CompoundTag const&                                      tag,
        ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype& archetypeData,
        ::cereal::ReflectionCtx const&                            ctx
    );

    MCAPI static ::BlockType* tryRegisterBlock(
        ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype const& archetypeData,
        ::std::string const&                                            blockName,
        int                                                             blockID,
        ::Material const&                                               material
    );
    // NOLINTEND
};
