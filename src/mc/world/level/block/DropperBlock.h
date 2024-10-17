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
#include "mc/world/level/block/DispenserBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DropperBlock : public ::DispenserBlock {
public:
    // prevent constructor by default
    DropperBlock& operator=(DropperBlock const&);
    DropperBlock(DropperBlock const&);
    DropperBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DropperBlock() = default;

    // vIndex: 164
    virtual void dispenseFrom(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI DropperBlock(std::string const& nameId, int id);

    MCAPI static int getAttachedFace(int facing);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void dispenseFrom$(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
