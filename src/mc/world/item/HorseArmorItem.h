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

class HorseArmorItem : public ::Item {
public:
    // HorseArmorItem inner types define
    enum class Tier {};

public:
    // prevent constructor by default
    HorseArmorItem& operator=(HorseArmorItem const&);
    HorseArmorItem(HorseArmorItem const&);
    HorseArmorItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HorseArmorItem() = default;

    // vIndex: 14
    virtual bool isDyeable() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 52
    virtual int getArmorValue() const;

    // vIndex: 62
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const&) const;

    // vIndex: 64
    virtual bool hasCustomColor(class CompoundTag const* userData) const;

    // vIndex: 65
    virtual void clearColor(class ItemStackBase&) const;

    // vIndex: 66
    virtual void setColor(class ItemStackBase& item, class mce::Color const& color) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    MCAPI HorseArmorItem(std::string const& name, int id, int icon, ::HorseArmorItem::Tier tier);

    MCAPI ::HorseArmorItem::Tier getTier() const;

    MCAPI static int const mHealthPerTier[];

    // NOLINTEND
};
