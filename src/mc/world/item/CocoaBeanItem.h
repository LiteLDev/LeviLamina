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

class CocoaBeanItem : public ::Item {
public:
    // prevent constructor by default
    CocoaBeanItem& operator=(CocoaBeanItem const&);
    CocoaBeanItem(CocoaBeanItem const&);
    CocoaBeanItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CocoaBeanItem() = default;

    // vIndex: 15
    virtual bool isDye() const;

    // vIndex: 16
    virtual ::ItemColor getItemColor() const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI CocoaBeanItem(std::string const& name, int id, bool allowLegacyUseAsDye);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id, bool allowLegacyUseAsDye);

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    MCAPI std::string buildDescriptionId$(class ItemDescriptor const&, class CompoundTag const*) const;

    MCAPI ::ItemColor getItemColor$() const;

    MCAPI bool isDye$() const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    MCAPI class Item& setIconInfo$(std::string const& name, int id);

    // NOLINTEND
};
