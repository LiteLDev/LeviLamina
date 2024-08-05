#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

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
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 49
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 52
    virtual int getArmorValue() const;

    // vIndex: 54
    virtual ::Puv::Legacy::LevelSoundEvent getBreakSound() const;

    // vIndex: 62
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;

    // vIndex: 63
    virtual bool hasCustomColor(class ItemStackBase const&) const;

    // vIndex: 64
    virtual bool hasCustomColor(class CompoundTag const*) const;

    // vIndex: 65
    virtual void clearColor(class ItemStackBase&) const;

    // vIndex: 66
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 106
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;

    MCAPI WolfArmorItem(std::string const&, short, struct cereal::ReflectionCtx&);

    MCAPI static std::vector<::ActorDamageCause> const ABSORBABLE_DAMAGE_CAUSES;

    MCAPI static std::vector<int> const CRACKS_THRESHOLDS;

    // NOLINTEND
};
