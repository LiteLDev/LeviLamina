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

class FishingRodItem : public ::ComponentItem {
public:
    // prevent constructor by default
    FishingRodItem& operator=(FishingRodItem const&);
    FishingRodItem(FishingRodItem const&);
    FishingRodItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FishingRodItem() = default;

    // vIndex: 37
    virtual bool isHandEquipped() const;

    // vIndex: 47
    virtual bool requiresInteract() const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 51
    virtual int getEnchantValue() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 99
    virtual bool shouldSendInteractionGameEvents() const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // vIndex: 105
    virtual std::string getInteractText(class Player const&) const;

    // vIndex: 106
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    // vIndex: 121
    virtual bool shouldUseJsonForRenderMatrix() const;

    MCAPI FishingRodItem(std::string const&, int, struct cereal::ReflectionCtx&);

    // NOLINTEND
};
