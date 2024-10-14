#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool _checkUseOnPermissions$(
        class Actor&          entity,
        class ItemStackBase&  item,
        uchar const&          face,
        class BlockPos const& pos
    ) const;

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI std::string
          buildDescriptionId$(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    MCAPI struct ResolvedItemIconInfo getIconInfo$(class ItemStackBase const& item, int, bool) const;

    MCAPI bool isValidAuxValue$(int value) const;

    // NOLINTEND
};
