#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
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
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 99
    virtual bool shouldSendInteractionGameEvents() const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int newAnimationFrame, bool) const;

    // vIndex: 105
    virtual std::string getInteractText(class Player const&) const;

    // vIndex: 106
    virtual int getAnimationFrameFor(class Mob* holder, bool, class ItemStack const*, bool) const;

    // vIndex: 121
    virtual bool shouldUseJsonForRenderMatrix() const;

    MCAPI FishingRodItem(std::string const& name, int id, struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::string buildDescriptionId$(class ItemDescriptor const&, class CompoundTag const*) const;

    MCAPI int getAnimationFrameFor$(class Mob* holder, bool, class ItemStack const*, bool) const;

    MCAPI int getEnchantSlot$() const;

    MCAPI int getEnchantValue$() const;

    MCAPI struct ResolvedItemIconInfo getIconInfo$(class ItemStackBase const&, int newAnimationFrame, bool) const;

    MCAPI std::string getInteractText$(class Player const&) const;

    MCAPI void hurtActor$(class ItemStack&, class Actor&, class Mob&) const;

    MCAPI bool isHandEquipped$() const;

    MCAPI bool requiresInteract$() const;

    MCAPI class Item& setIconInfo$(std::string const& name, int id);

    MCAPI bool shouldSendInteractionGameEvents$() const;

    MCAPI bool shouldUseJsonForRenderMatrix$() const;

    MCAPI class ItemStack& use$(class ItemStack& item, class Player& player) const;

    // NOLINTEND
};
