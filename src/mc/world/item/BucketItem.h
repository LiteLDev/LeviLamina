#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/BucketFillType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
class Vec3;
struct Brightness;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class BucketItem : public ::Item {
public:
    // BucketItem inner types declare
    // clang-format off
    struct FillTypeEntityData;
    // clang-format on

    // BucketItem inner types define
    struct FillTypeEntityData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::BucketFillType> mBucketFillType;
        ::ll::TypedStorage<4, 4, ::ActorType>      mActorType;
        ::ll::TypedStorage<8, 32, ::std::string>   mInitEvent;
        // NOLINTEND
    };

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

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

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

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Item& $setIconInfo(::std::string const& name, int id);

    MCAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCAPI bool $canUseOnSimTick() const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCFOLD void $releaseUsing(::ItemStack& inoutInstance, ::Player* player, int durationLeft) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCFOLD bool $uniqueAuxValues() const;

    MCFOLD bool $isBucket() const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI bool $isLiquidClipItem() const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const;

    MCAPI bool $validFishInteraction(int) const;

    MCAPI ::Brightness $getLightEmission(int) const;

    MCFOLD bool $isValidAuxValue(int auxValue) const;

    MCAPI bool $isDestructive(int auxValue) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
