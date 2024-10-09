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

class PrismarineBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PrismarineBlock& operator=(PrismarineBlock const&);
    PrismarineBlock(PrismarineBlock const&);
    PrismarineBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PrismarineBlock() = default;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 160
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    MCAPI PrismarineBlock(std::string const& nameId, int id);

    // NOLINTEND
};
