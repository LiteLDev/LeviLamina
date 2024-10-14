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
    virtual void onProjectileHit(class BlockSource& region, class BlockPos const& pos, class Actor const&) const;

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
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const&, uchar) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI DecoratedPotBlock(std::string const& name, int id);

    MCAPI static std::unique_ptr<class CompoundTag>
    getItemInstanceUserData(gsl::not_null<class DecoratedPotBlockActor const*> pot);

    MCAPI static std::vector<class ItemStack> getSherdItems(class DecoratedPotBlockActor const& decoratedPotBlockActor);

    MCAPI static bool isShatteringItem(class ItemStack const& item);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const* blockActor) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType type) const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const&, class BlockPos const&) const;

    MCAPI int
    getComparatorSignal$(class BlockSource& region, class BlockPos const& pos, class Block const&, uchar) const;

    MCAPI bool hasComparatorSignal$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void onProjectileHit$(class BlockSource& region, class BlockPos const& pos, class Actor const&) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class Block const*
    playerWillDestroy$(class Player& player, class BlockPos const& pos, class Block const& block) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
