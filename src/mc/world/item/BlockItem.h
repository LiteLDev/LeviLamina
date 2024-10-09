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

class BlockItem : public ::Item {
public:
    // prevent constructor by default
    BlockItem& operator=(BlockItem const&);
    BlockItem(BlockItem const&);
    BlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockItem();

    // vIndex: 44
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    // vIndex: 108
    virtual struct Brightness getLightEmission(int data) const;

    // vIndex: 109
    virtual int getIconYOffset() const;

    // vIndex: 116
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI BlockItem(std::string const& name, int id, class HashedString const& blockName);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _displayHeightLimitErrorMessages(class Actor& actor, int y, bool displayClientSideOnly) const;

    // NOLINTEND
};
