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

class DecoratedPotBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    DecoratedPotBlock& operator=(DecoratedPotBlock const&);
    DecoratedPotBlock(DecoratedPotBlock const&);
    DecoratedPotBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DecoratedPotBlock() = default;

    // vIndex: 17
    virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource&, class BlockPos const&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    MCAPI DecoratedPotBlock(std::string const& name, int id);

    MCAPI static std::unique_ptr<class CompoundTag>
        getItemInstanceUserData(gsl::not_null<class DecoratedPotBlockActor const*>);

    MCAPI static std::vector<class ItemStack> getSherdItems(class DecoratedPotBlockActor const&);

    MCAPI static bool isShatteringItem(class ItemStack const&);

    // NOLINTEND
};
