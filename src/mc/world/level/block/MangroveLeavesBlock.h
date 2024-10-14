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

class MangroveLeavesBlock : public ::LeavesBlock {
public:
    // prevent constructor by default
    MangroveLeavesBlock& operator=(MangroveLeavesBlock const&);
    MangroveLeavesBlock(MangroveLeavesBlock const&);
    MangroveLeavesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MangroveLeavesBlock() = default;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    MCAPI MangroveLeavesBlock(std::string const& nameId, int id, class WeakPtr<class BlockLegacy const> sapling);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canBeFertilized$(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    MCAPI bool
    onFertilized$(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // NOLINTEND
};
