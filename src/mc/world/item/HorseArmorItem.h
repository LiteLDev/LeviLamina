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
    virtual void clearColor(class ItemStackBase& item) const;

    // vIndex: 66
    virtual void setColor(class ItemStackBase& item, class mce::Color const& color) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    MCAPI HorseArmorItem(std::string const& name, int id, int icon, ::HorseArmorItem::Tier tier);

    MCAPI ::HorseArmorItem::Tier getTier() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id, int icon, ::HorseArmorItem::Tier tier);

    MCAPI void appendFormattedHovertext$(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    MCAPI void clearColor$(class ItemStackBase& item) const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    MCAPI int getArmorValue$() const;

    MCAPI class mce::Color getColor$(class CompoundTag const* userData, class ItemDescriptor const&) const;

    MCAPI bool hasCustomColor$(class CompoundTag const* userData) const;

    MCAPI bool isDyeable$() const;

    MCAPI void setColor$(class ItemStackBase& item, class mce::Color const& color) const;

    MCAPI static ::ll::CArrayT<int const>& mHealthPerTier();

    // NOLINTEND
};
