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
#include "mc/world/level/block/MultifaceBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SculkVeinBlock : public ::MultifaceBlock {
public:
    // prevent constructor by default
    SculkVeinBlock& operator=(SculkVeinBlock const&);
    SculkVeinBlock(SculkVeinBlock const&);
    SculkVeinBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkVeinBlock() = default;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 163
    virtual class Block const& getMultifaceBlock() const;

    // vIndex: 164
    virtual class MultifaceSpreader const& getMultifaceSpreader() const;

    MCAPI SculkVeinBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const&, class BlockPos const&) const;

    MCAPI class Block const& getMultifaceBlock$() const;

    MCAPI class MultifaceSpreader const& getMultifaceSpreader$() const;

    // NOLINTEND
};
