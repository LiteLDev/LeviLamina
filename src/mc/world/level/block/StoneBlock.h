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

class StoneBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    StoneBlock& operator=(StoneBlock const&);
    StoneBlock(StoneBlock const&);
    StoneBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoneBlock() = default;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 140
    virtual class Block const* tryGetInfested(class Block const& block) const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const& experiments);

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI StoneBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void _addHardCodedBlockComponents$(class Experiments const& experiments);

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI bool canBeOriginalSurface$() const;

    MCAPI class mce::Color
    getMapColor$(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI class Block const* tryGetInfested$(class Block const& block) const;

    // NOLINTEND
};
