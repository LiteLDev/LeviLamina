#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/PotionItem.h"
#include "mc/world/item/alchemy/Potion.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class SplashPotionItem : public ::PotionItem {
public:
    // prevent constructor by default
    SplashPotionItem& operator=(SplashPotionItem const&);
    SplashPotionItem(SplashPotionItem const&);
    SplashPotionItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SplashPotionItem() = default;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 73
    virtual class Actor*
    createProjectileActor(class BlockSource&, class ItemStack const&, class Vec3 const&, class Vec3 const&) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // vIndex: 119
    virtual ::Potion::PotionType getPotionType() const;

    // NOLINTEND
};
