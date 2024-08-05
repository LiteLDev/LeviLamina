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

class DyePowderItem : public ::Item {
public:
    // prevent constructor by default
    DyePowderItem& operator=(DyePowderItem const&);
    DyePowderItem(DyePowderItem const&);
    DyePowderItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DyePowderItem() = default;

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

    MCAPI DyePowderItem(std::string const&, int, ::ItemColor);

    // NOLINTEND
};
