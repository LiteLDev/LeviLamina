#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class WolfArmorItem : public ::ComponentItem {
public:
    // prevent constructor by default
    WolfArmorItem& operator=(WolfArmorItem const&);
    WolfArmorItem(WolfArmorItem const&);
    WolfArmorItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WolfArmorItem() = default;

    // vIndex: 14
    virtual bool isDyeable() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& item,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 49
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const& repairItem, class BaseGameVersion const&)
        const;

    // vIndex: 52
    virtual int getArmorValue() const;

    // vIndex: 54
    virtual ::Puv::Legacy::LevelSoundEvent getBreakSound() const;

    // vIndex: 62
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const&) const;

    // vIndex: 63
    virtual bool hasCustomColor(class ItemStackBase const& item) const;

    // vIndex: 64
    virtual bool hasCustomColor(class CompoundTag const* userData) const;

    // vIndex: 65
    virtual void clearColor(class ItemStackBase& item) const;

    // vIndex: 66
    virtual void setColor(class ItemStackBase& item, class mce::Color const& color) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    // vIndex: 106
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const* item, bool) const;

    MCAPI WolfArmorItem(std::string const& nameId, short id, struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, short id, struct cereal::ReflectionCtx& ctx);

    MCAPI void appendFormattedHovertext$(
        class ItemStackBase const& item,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    MCAPI std::string buildDescriptionId$(class ItemDescriptor const&, class CompoundTag const*) const;

    MCAPI void clearColor$(class ItemStackBase& item) const;

    MCAPI int getAnimationFrameFor$(class Mob*, bool, class ItemStack const* item, bool) const;

    MCAPI int getArmorValue$() const;

    MCAPI ::Puv::Legacy::LevelSoundEvent getBreakSound$() const;

    MCAPI class mce::Color getColor$(class CompoundTag const* userData, class ItemDescriptor const&) const;

    MCAPI struct ResolvedItemIconInfo getIconInfo$(class ItemStackBase const& item, int, bool) const;

    MCAPI bool hasCustomColor$(class ItemStackBase const& item) const;

    MCAPI bool hasCustomColor$(class CompoundTag const* userData) const;

    MCAPI bool isDyeable$() const;

    MCAPI bool
    isValidRepairItem$(class ItemStackBase const&, class ItemStackBase const& repairItem, class BaseGameVersion const&)
        const;

    MCAPI void setColor$(class ItemStackBase& item, class mce::Color const& color) const;

    MCAPI static std::vector<::ActorDamageCause> const& ABSORBABLE_DAMAGE_CAUSES();

    MCAPI static std::vector<int> const& CRACKS_THRESHOLDS();

    // NOLINTEND
};
