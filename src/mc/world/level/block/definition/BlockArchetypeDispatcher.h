#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class BlockTypeRegistry;
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

#ifdef LL_PLAT_C
    MCAPI static ::BlockShape getBlockShape(::std::string const& blockName);
#endif

    MCAPI static void initializeFromNetwork(
        ::CompoundTag const&                                      tag,
        ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype& archetypeData,
        ::cereal::ReflectionCtx const&                            ctx
    );

    MCAPI static ::BlockType* tryRegisterBlock(
        ::BlockTypeRegistry&                                            registry,
        ::SharedTypes::v1_26_20::BlockDefinition::BlockArchetype const& archetypeData,
        ::std::string const&                                            blockName,
        int                                                             blockID,
        ::Material const&                                               material
    );
    // NOLINTEND
};
