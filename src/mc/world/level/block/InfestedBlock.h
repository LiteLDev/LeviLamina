#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

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
    virtual void spawnAfterBreak(
        class BlockSource& region,
        class Block const&,
        class BlockPos const&              pos,
        struct ResourceDropsContext const& resourceDropsContext
    ) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

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
