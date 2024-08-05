#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BrushItem : public ::Item {
public:
    // prevent constructor by default
    BrushItem& operator=(BrushItem const&);
    BrushItem(BrushItem const&);
    BrushItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrushItem() = default;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 74
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 100
    virtual bool useInterruptedByAttacking() const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& item, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI BrushItem(std::string const&, short);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static void _spawnDustParticles(
        class Level&          level,
        class Vec3            clickPos,
        class Block const&    block,
        class BlockPos const& pos,
        uchar                 face
    );

    // NOLINTEND
};
