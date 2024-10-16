#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/ChemistryStickItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class SparklerItem : public ::ChemistryStickItem {
public:
    // SparklerItem inner types declare
    // clang-format off
    struct ColorInfo;
    // clang-format on

    // SparklerItem inner types define
    struct ColorInfo {
    public:
        // prevent constructor by default
        ColorInfo& operator=(ColorInfo const&);
        ColorInfo(ColorInfo const&);
        ColorInfo();
    };

public:
    // prevent constructor by default
    SparklerItem& operator=(SparklerItem const&);
    SparklerItem(SparklerItem const&);
    SparklerItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SparklerItem() = default;

    // vIndex: 37
    virtual bool isHandEquipped() const;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 88
    virtual bool
    inventoryTick(class ItemStack& item, class Level& level, class Actor& owner, int slot, bool selected) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    // vIndex: 108
    virtual struct Brightness getLightEmission(int auxValue) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI std::string
          buildDescriptionId$(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    MCAPI struct ResolvedItemIconInfo
    getIconInfo$(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI struct Brightness getLightEmission$(int auxValue) const;

    MCAPI bool
    inventoryTick$(class ItemStack& item, class Level& level, class Actor& owner, int slot, bool selected) const;

    MCAPI bool isHandEquipped$() const;

    MCAPI class Item& setIconInfo$(std::string const& name, int id);

    MCAPI static ::ll::CArrayT<struct SparklerItem::ColorInfo const>& COLORS();

    MCAPI static int const& MAX_ACTIVE_TICKS();

    // NOLINTEND
};
