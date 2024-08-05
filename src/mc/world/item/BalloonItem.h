#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BalloonItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    BalloonItem& operator=(BalloonItem const&);
    BalloonItem(BalloonItem const&);
    BalloonItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BalloonItem() = default;

    // vIndex: 14
    virtual bool isDyeable() const;

    // vIndex: 62
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const& instance) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor&, class BlockPos pos, uchar face, class Vec3 const& clickPos) const;

    MCAPI BalloonItem(std::string const& name, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class LeashFenceKnotActor*
    _createKnot(class BlockSource& region, class BlockPos pos, class ItemInstance const& item) const;

    // NOLINTEND
};
