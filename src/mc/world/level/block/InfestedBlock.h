#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class InfestedBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    InfestedBlock& operator=(InfestedBlock const&);
    InfestedBlock(InfestedBlock const&);
    InfestedBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InfestedBlock() = default;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 97
    virtual void
    spawnAfterBreak(class BlockSource&, class Block const&, class BlockPos const&, struct ResourceDropsContext const&)
        const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 141
    virtual class Block const* tryGetUninfested(class Block const& block) const;

    MCAPI InfestedBlock(std::string const& nameId, int id);

    MCAPI static void spawnSilverfish(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
