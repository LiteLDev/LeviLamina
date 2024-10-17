#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/item/BucketFillType.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BucketItem : public ::Item {
public:
    // prevent constructor by default
    BucketItem& operator=(BucketItem const&);
    BucketItem(BucketItem const&);
    BucketItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BucketItem() = default;

    // vIndex: 11
    virtual bool isBucket() const;

    // vIndex: 44
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 45
    virtual bool isLiquidClipItem() const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 59
    virtual bool uniqueAuxValues() const;

    // vIndex: 71
    virtual bool canUseOnSimTick() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 75
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 76
    virtual void releaseUsing(class ItemStack& inoutInstance, class Player* player, int durationLeft) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const* userData) const;

    // vIndex: 87
    virtual uchar getMaxStackSize(class ItemDescriptor const&) const;

    // vIndex: 95
    virtual bool validFishInteraction(int) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 108
    virtual struct Brightness getLightEmission(int) const;

    // vIndex: 113
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const&) const;

    MCAPI BucketItem(std::string const& name, int id, ::BucketFillType type);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void addBucketEntitySaveData(class Actor& entity, class ItemStack& instance) const;

    MCAPI bool readBucketEntitySaveData(
        class BlockSource&        region,
        class Actor*              placer,
        class BlockPos            pos,
        class ItemInstance const& instance
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canEmptyBucketIntoBlock(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    block,
        class Block const&    extraBlock
    ) const;

    MCAPI bool _emptyBucket(
        class BlockSource&     region,
        class Block const&     contents,
        class BlockPos const&  pos,
        class Actor*           placer,
        class ItemStack const& instance,
        uchar                  face
    ) const;

    MCAPI void _removeBubbleColumn(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool _takeLiquid(class ItemStack& item, class Actor& entity, class BlockPos const& pos) const;

    MCAPI bool _takePowderSnow(class ItemStack& item, class Actor& actor, class BlockPos const& pos) const;

    MCAPI class BlockLegacy const* _tryGetBlock(::BucketFillType contents) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id, ::BucketFillType type);

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const&) const;

    MCAPI std::string buildDescriptionId$(class ItemDescriptor const&, class CompoundTag const* userData) const;

    MCAPI bool canUseOnSimTick$() const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI std::string getAuxValuesDescription$() const;

    MCAPI struct Brightness getLightEmission$(int) const;

    MCAPI uchar getMaxStackSize$(class ItemDescriptor const&) const;

    MCAPI bool isBucket$() const;

    MCAPI bool isDestructive$(int auxValue) const;

    MCAPI bool isLiquidClipItem$() const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    MCAPI void releaseUsing$(class ItemStack& inoutInstance, class Player* player, int durationLeft) const;

    MCAPI class Item& setIconInfo$(std::string const& name, int id);

    MCAPI bool uniqueAuxValues$() const;

    MCAPI class ItemStack& use$(class ItemStack& item, class Player& player) const;

    MCAPI ::ItemUseMethod
    useTimeDepleted$(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    MCAPI bool validFishInteraction$(int) const;

    MCAPI static int const& DRINK_DURATION();

    MCAPI static std::vector<std::pair<::BucketFillType, ::ActorType>> const& mFillTypeToEntityType();

    // NOLINTEND
};
