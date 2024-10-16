#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RotatedPillarInfestedBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    RotatedPillarInfestedBlock& operator=(RotatedPillarInfestedBlock const&);
    RotatedPillarInfestedBlock(RotatedPillarInfestedBlock const&);
    RotatedPillarInfestedBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RotatedPillarInfestedBlock() = default;

    // vIndex: 97
    virtual void spawnAfterBreak(
        class BlockSource& region,
        class Block const&,
        class BlockPos const&              pos,
        struct ResourceDropsContext const& resourceDropsContext
    ) const;

    MCAPI RotatedPillarInfestedBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI void spawnAfterBreak$(
        class BlockSource& region,
        class Block const&,
        class BlockPos const&              pos,
        struct ResourceDropsContext const& resourceDropsContext
    ) const;

    // NOLINTEND
};
