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
#include "mc/world/level/block/FaceDirectionalActorBlock.h"

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
    virtual bool
    use(class Player& player, class BlockPos const& pos, uchar face, std::optional<class Vec3> worldHit) const;

    MCAPI ChiseledBookshelfBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI int
    getComparatorSignal$(class BlockSource& region, class BlockPos const& pos, class Block const&, uchar) const;

    MCAPI bool hasComparatorSignal$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool
    use$(class Player& player, class BlockPos const& pos, uchar face, std::optional<class Vec3> worldHit) const;

    // NOLINTEND
};
