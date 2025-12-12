#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/Rarity.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Container;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Vec3;
struct ResolvedItemIconInfo;
// clang-format on

class SkullItem : public ::BlockItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    virtual ::Rarity getRarity(::ItemStackBase const& stack) const /*override*/;

    virtual int getLevelDataForAuxValue(int auxValue) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual ::BlockShape getBlockShape() const /*override*/;

    virtual int getEnchantSlot() const /*override*/;

    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const /*override*/;

    virtual ~SkullItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCFOLD int $getLevelDataForAuxValue(int auxValue) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCFOLD ::BlockShape $getBlockShape() const;

    MCAPI int $getEnchantSlot() const;

    MCFOLD ::SharedTypes::Legacy::ActorLocation $getEquipLocation() const;

    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;

    MCAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
