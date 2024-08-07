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

class BedItem : public ::Item {
public:
    // prevent constructor by default
    BedItem& operator=(BedItem const&);
    BedItem(BedItem const&);
    BedItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BedItem() = default;

    // vIndex: 56
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    // vIndex: 115
    virtual bool
    _checkUseOnPermissions(class Actor& entity, class ItemStackBase& item, uchar const& face, class BlockPos const& pos)
        const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class InteractionResult _tryUseOn(
        class ItemStackBase& instance,
        class Actor&         actor,
        class BlockPos       pos,
        uchar                face,
        class Vec3 const&    clickPos
    ) const;

    // NOLINTEND
};
