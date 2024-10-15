#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockColor.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/CarpetBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WoolCarpetBlock : public ::CarpetBlock {
public:
    // prevent constructor by default
    WoolCarpetBlock& operator=(WoolCarpetBlock const&);
    WoolCarpetBlock(WoolCarpetBlock const&);
    WoolCarpetBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WoolCarpetBlock() = default;

    // vIndex: 28
    virtual bool canDamperVibrations() const;

    // vIndex: 64
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    MCAPI WoolCarpetBlock(std::string const& nameId, int id, ::BlockColor color);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _tryEquipCarpet(class Actor* actor, class ItemStack const& carpet);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, ::BlockColor color);

    MCAPI bool canDamperVibrations$() const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    // NOLINTEND
};
