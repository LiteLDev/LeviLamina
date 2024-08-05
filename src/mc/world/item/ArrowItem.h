#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class ArrowItem : public ::ComponentItem {
public:
    // prevent constructor by default
    ArrowItem& operator=(ArrowItem const&);
    ArrowItem(ArrowItem const&);
    ArrowItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ArrowItem() = default;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 73
    virtual class Actor*
    createProjectileActor(class BlockSource&, class ItemStack const&, class Vec3 const&, class Vec3 const&) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 84
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    MCAPI ArrowItem(std::string const&, int, struct cereal::ReflectionCtx&);

    MCAPI void applyEffect(class Arrow* arrow, class ItemInstance const& slotItem) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::vector<class MobEffectInstance> getMobEffects(int auxValue) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::shared_ptr<class Potion const> _potionExistsOrContentError(int aux) const;

    // NOLINTEND
};
