#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DispenserBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    DispenserBlock& operator=(DispenserBlock const&);
    DispenserBlock(DispenserBlock const&);
    DispenserBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DispenserBlock();

    // vIndex: 31
    virtual bool isContainerBlock() const;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 153
    virtual bool allowStateMismatchOnPlacement(class Block const&, class Block const&) const;

    // vIndex: 163
    virtual int getTickDelay() const;

    // vIndex: 164
    virtual void dispenseFrom(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI DispenserBlock(std::string const& nameId, int id);

    MCAPI static void dropAllItemsFromContainer(class BlockSource&, class BlockPos const&);

    MCAPI static void
    ejectItem(class BlockSource& region, class Vec3 const& pos, uchar face, class ItemStack const& item, int);

    MCAPI static void openInventoryContainer(class Player&, class BlockPos const&);

    MCAPI static void setupConsumerRedstoneComponent(class BlockSource&, class BlockPos const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void ejectItem(
        class BlockSource&     region,
        class Vec3 const&      pos,
        uchar                  face,
        class ItemStack const& item,
        class Container&       container,
        int                    slot,
        int
    ) const;

    MCAPI class Vec3 getDispensePosition(class BlockSource& region, class Vec3 const& pos) const;

    MCAPI uchar getFacing(class Block const& block) const;

    // NOLINTEND
};
