#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/LeavesBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class AcaciaLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    AcaciaLeavesBlock& operator=(AcaciaLeavesBlock const&);
    AcaciaLeavesBlock(AcaciaLeavesBlock const&);
    AcaciaLeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AcaciaLeavesBlock() = default;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    MCAPI AcaciaLeavesBlock(std::string const& nameId, int id, class WeakPtr<class BlockLegacy const> sapling);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class WeakPtr<class BlockLegacy const> sapling);

    MCAPI int getVariant$(class Block const&) const;

    // NOLINTEND
};
