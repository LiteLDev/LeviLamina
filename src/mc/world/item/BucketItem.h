#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BucketFillType.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class InteractionResult;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
class Material;
class Player;
class Vec3;
struct Brightness;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class BucketItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::BucketFillType> mFillType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    virtual uchar getMaxStackSize(::ItemDescriptor const&) const /*override*/;

    virtual bool canUseOnSimTick() const /*override*/;

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player, ::HandSlot handSlot) const /*override*/;

    virtual void releaseUsing(::ItemStack& inoutInstance, ::Player* player, int durationLeft) const /*override*/;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    virtual bool uniqueAuxValues() const /*override*/;

    virtual bool isBucket() const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual bool isLiquidClipItem() const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const /*override*/;

    virtual bool validFishInteraction(int) const /*override*/;

    virtual ::Brightness getLightEmission(int) const /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual bool isDestructive(int auxValue) const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual ::InteractionResult _useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _emptyBucket(
        ::BlockSource&     region,
        ::Block const&     contents,
        ::BlockPos const&  pos,
        ::Actor*           placer,
        ::ItemStack const& instance,
        uchar              face
    ) const;

    MCNAPI bool readBucketEntitySaveData(
        ::BlockSource&        region,
        ::Actor*              placer,
        ::BlockPos            pos,
        ::ItemInstance const& instance
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _broadcastBucketFillSound(::BlockSource& region, ::Actor& entity, ::Material const& material);

    MCNAPI static void _replaceWithEmptyBucket(::ItemStack& instance, ::Actor& entity);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Item& $setIconInfo(::std::string const& name, int id);

    MCNAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCNAPI bool $canUseOnSimTick() const;

    MCNAPI ::ItemStack& $use(::ItemStack& item, ::Player& player, ::HandSlot handSlot) const;

    MCNAPI void $releaseUsing(::ItemStack& inoutInstance, ::Player* player, int durationLeft) const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCNAPI bool $uniqueAuxValues() const;

    MCNAPI bool $isBucket() const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCNAPI bool $isLiquidClipItem() const;

    MCNAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const;

    MCNAPI bool $validFishInteraction(int) const;

    MCNAPI ::Brightness $getLightEmission(int) const;

    MCNAPI bool $isValidAuxValue(int auxValue) const;

    MCNAPI bool $isDestructive(int auxValue) const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI ::InteractionResult $_useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
