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
class BlockLegacy;
class BlockPos;
class BlockSource;
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
    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    // vIndex: 91
    virtual uchar getMaxStackSize(::ItemDescriptor const&) const /*override*/;

    // vIndex: 75
    virtual bool canUseOnSimTick() const /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 80
    virtual void releaseUsing(::ItemStack& inoutInstance, ::Player* player, int durationLeft) const /*override*/;

    // vIndex: 79
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    // vIndex: 63
    virtual bool uniqueAuxValues() const /*override*/;

    // vIndex: 12
    virtual bool isBucket() const /*override*/;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 48
    virtual bool isLiquidClipItem() const /*override*/;

    // vIndex: 87
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 99
    virtual bool validFishInteraction(int) const /*override*/;

    // vIndex: 112
    virtual ::Brightness getLightEmission(int) const /*override*/;

    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 47
    virtual bool isDestructive(int auxValue) const /*override*/;

    // vIndex: 120
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 0
    virtual ~BucketItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canEmptyBucketIntoBlock(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    block,
        ::Block const&    extraBlock
    ) const;

    MCNAPI bool _emptyBucket(
        ::BlockSource&     region,
        ::Block const&     contents,
        ::BlockPos const&  pos,
        ::Actor*           placer,
        ::ItemStack const& instance,
        uchar              face
    ) const;

    MCNAPI bool _supportsEntityType(::ActorType const& entityType, ::HashedString& bucketType) const;

    MCNAPI bool _takeLiquid(::ItemStack& item, ::Actor& entity, ::BlockPos const& pos) const;

    MCNAPI bool _takePowderSnow(::ItemStack& item, ::Actor& actor, ::BlockPos const& pos) const;

    MCNAPI ::BlockLegacy const* _tryGetBlock(::BucketFillType contents) const;

    MCNAPI void addBucketEntitySaveData(::Actor& entity, ::ItemStack& instance) const;

    MCNAPI bool
    readBucketEntitySaveData(::BlockSource& region, ::Actor* placer, ::BlockPos pos, ::ItemInstance const& instance)
        const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::pair<::BucketFillType, ::ActorType>> const& mFillTypeToEntityType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Item& $setIconInfo(::std::string const& name, int index);

    MCNAPI uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCNAPI bool $canUseOnSimTick() const;

    MCNAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCNAPI void $releaseUsing(::ItemStack& inoutInstance, ::Player* player, int durationLeft) const;

    MCNAPI bool $uniqueAuxValues() const;

    MCNAPI bool $isBucket() const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCNAPI bool $isLiquidClipItem() const;

    MCNAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const* userData) const;

    MCNAPI bool $validFishInteraction(int) const;

    MCNAPI ::Brightness $getLightEmission(int) const;

    MCNAPI bool $isValidAuxValue(int auxValue) const;

    MCNAPI bool $isDestructive(int auxValue) const;

    MCNAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
