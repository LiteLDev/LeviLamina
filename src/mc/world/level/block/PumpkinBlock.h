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

class PumpkinBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PumpkinBlock& operator=(PumpkinBlock const&);
    PumpkinBlock(PumpkinBlock const&);
    PumpkinBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PumpkinBlock() = default;

    // vIndex: 25
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

    // vIndex: 64
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI PumpkinBlock(std::string const& nameId, int id, bool lit, bool carved);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canDispense(class BlockSource& region, class Vec3 const& pos, uchar) const;

    MCAPI bool _canSpawnGolem(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, bool lit, bool carved);

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool canConnect$(class Block const&, uchar, class Block const&) const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI uchar getMappedFace$(uchar face, class Block const& block) const;

    MCAPI int getVariant$(class Block const&) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
