#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SculkCatalystBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    SculkCatalystBlock& operator=(SculkCatalystBlock const&);
    SculkCatalystBlock(SculkCatalystBlock const&);
    SculkCatalystBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkCatalystBlock() = default;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI SculkCatalystBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI static void
    bloom(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Random&);

    // NOLINTEND
};
