#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/SlabBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class StoneSlabBlock : public ::SlabBlock {
public:
    // prevent constructor by default
    StoneSlabBlock& operator=(StoneSlabBlock const&);
    StoneSlabBlock(StoneSlabBlock const&);
    StoneSlabBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoneSlabBlock() = default;

    // vIndex: 50
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 160
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    MCAPI StoneSlabBlock(std::string const& nameId, int id, bool fullSize, class HashedString const& baseSlab);

    MCAPI static std::array<std::string, 8> const SLAB_NAMES;

    // NOLINTEND
};
