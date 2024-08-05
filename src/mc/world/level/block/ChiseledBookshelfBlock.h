#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FaceDirectionalActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ChiseledBookshelfBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    ChiseledBookshelfBlock& operator=(ChiseledBookshelfBlock const&);
    ChiseledBookshelfBlock(ChiseledBookshelfBlock const&);
    ChiseledBookshelfBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChiseledBookshelfBlock() = default;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const&, uchar) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 151
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face, std::optional<class Vec3>) const;

    MCAPI ChiseledBookshelfBlock(std::string const& nameId, int id);

    // NOLINTEND
};
