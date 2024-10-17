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

class HeavyCoreBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    HeavyCoreBlock& operator=(HeavyCoreBlock const&);
    HeavyCoreBlock(HeavyCoreBlock const&);
    HeavyCoreBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HeavyCoreBlock() = default;

    // vIndex: 19
    virtual bool
    liquidCanFlowIntoFromDirection(uchar flowIntoFacing, std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&)
        const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    MCAPI HeavyCoreBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType type) const;

    MCAPI bool
    liquidCanFlowIntoFromDirection$(uchar flowIntoFacing, std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&)
        const;

    // NOLINTEND
};
