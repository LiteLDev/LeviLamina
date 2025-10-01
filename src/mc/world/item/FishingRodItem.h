#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Mob;
class Player;
struct ResolvedItemIconInfo;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FishingRodItem : public ::ComponentItem {
public:
    // prevent constructor by default
    FishingRodItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 110
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int newAnimationFrame, bool) const /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 38
    virtual bool isHandEquipped() const /*override*/;

    // vIndex: 50
    virtual bool requiresInteract() const /*override*/;

    // vIndex: 111
    virtual ::std::string getInteractText(::Player const& player) const /*override*/;

    // vIndex: 112
    virtual int getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const*, bool) const /*override*/;

    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 55
    virtual int getEnchantValue() const /*override*/;

    // vIndex: 84
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 105
    virtual bool shouldSendInteractionGameEvents() const /*override*/;

    // vIndex: 125
    virtual bool shouldUseJsonForRenderMatrix() const /*override*/;

    // vIndex: 109
    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    // vIndex: 89
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    // vIndex: 0
    virtual ~FishingRodItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FishingRodItem(::std::string const& name, int id, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int newAnimationFrame, bool) const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCFOLD bool $isHandEquipped() const;

    MCFOLD bool $requiresInteract() const;

    MCAPI ::std::string $getInteractText(::Player const& player) const;

    MCAPI int $getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const*, bool) const;

    MCFOLD int $getEnchantSlot() const;

    MCFOLD int $getEnchantValue() const;

    MCFOLD void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCFOLD bool $shouldSendInteractionGameEvents() const;

    MCFOLD bool $shouldUseJsonForRenderMatrix() const;

    MCFOLD ::Item& $setIconInfo(::std::string const& name, int id);

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
