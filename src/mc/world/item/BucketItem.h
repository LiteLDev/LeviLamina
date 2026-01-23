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
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class CompoundTag;
class Container;
class HashedString;
class InteractionResult;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class Level;
class Player;
class Vec3;
struct Brightness;
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

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;

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

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    virtual ~BucketItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canEmptyBucketIntoBlock(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Block const&    extraBlock,
        ::Actor const*    placer
    ) const;

    MCAPI bool _emptyBucket(
        ::BlockSource&     region,
        ::Block const&     contents,
        ::BlockPos const&  pos,
        ::Actor*           placer,
        ::ItemStack const& instance,
        uchar              face
    ) const;

    MCAPI bool _supportsEntityType(::ActorType const& entityType, ::HashedString& bucketType) const;

    MCAPI bool _takeLiquid(::ItemStack& item, ::Actor& entity, ::BlockPos const& pos) const;

    MCAPI bool _takePowderSnow(::ItemStack& item, ::Actor& actor, ::BlockPos const& pos) const;

    MCAPI ::BlockType const* _tryGetBlock(::BucketFillType contents) const;

    MCAPI void addBucketEntitySaveData(::Actor& entity, ::ItemStack& instance) const;

    MCAPI bool readBucketEntitySaveData(
        ::BlockSource&        region,
        ::Actor*              placer,
        ::BlockPos            pos,
        ::ItemInstance const& instance
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::pair<::BucketFillType, ::ActorType>> const& mFillTypeToEntityType();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Item& $setIconInfo(::std::string const& name, int id);

    MCAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCAPI bool $canUseOnSimTick() const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCFOLD void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCFOLD bool $uniqueAuxValues() const;

    MCFOLD bool $isBucket() const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI bool $isLiquidClipItem() const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const;

    MCAPI bool $validFishInteraction(int) const;

    MCAPI ::Brightness $getLightEmission(int) const;

    MCFOLD bool $isValidAuxValue(int auxValue) const;

    MCAPI bool $isDestructive(int auxValue) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
