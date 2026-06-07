#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Container;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class ItemStack;
class ItemStackBase;
class Level;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class ComposterBlock : public ::BlockType {
public:
    // ComposterBlock inner types define
    enum class FillLevel : int {
        Min   = 0,
        Max   = 7,
        Ready = 8,
        Count = 9,
    };

public:
    // prevent constructor by default
    ComposterBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& block, ::BlockPos const&, ::Block const&, uchar) const /*override*/;

    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const /*override*/;

    virtual bool canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual bool breaksFallingBlocks(::Block const& version, ::BaseGameVersion const) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComposterBlock(::std::string const& nameId, int id);

    MCAPI void _emitBoneMeal(::Level& region, ::BlockSource& pos, ::BlockPos const&) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<uint64, schar> const& _getCompostableItems();

    MCAPI static bool addItem(
        ::Container&      fromContainer,
        int               slot,
        ::ItemStack&      item,
        ::BlockSource&    region,
        ::Block const&    block,
        ::BlockPos const& pos
    );

    MCAPI static bool addItems(
        ::Container&      fromContainer,
        int               slot,
        ::ItemStack&      item,
        int               amount,
        ::BlockSource&    region,
        ::Block const&    block,
        ::BlockPos const& pos
    );

    MCAPI static int
    addItems(::ItemStack const& item, int amount, ::BlockSource& region, ::Block const& block, ::BlockPos const& pos);

    MCAPI static void empty(::BlockSource& region, ::Block const& composter, ::BlockPos const& pos);

    MCAPI static ::ItemStack extractItem(::BlockSource& region, ::Block const& composter, ::BlockPos const& pos);

    MCAPI static ::Block const* getComposterAt(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static schar getFillChance(::ItemStackBase const& item);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& COMPOSTER_DOESNT_BREAK_FALLING_BLOCK_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& block, ::BlockPos const&, ::Block const&, uchar) const;

    MCFOLD ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCFOLD bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    MCAPI bool $canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const;

    MCFOLD int $getVariant(::Block const& block) const;

    MCAPI bool $breaksFallingBlocks(::Block const& version, ::BaseGameVersion const) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
