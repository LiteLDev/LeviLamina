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
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class EntityContext;
class Experiments;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class Player;
class Vec3;
struct BlockAnimateTickData;
// clang-format on

class StairBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockType const&> mBase;
    // NOLINTEND

public:
    // prevent constructor by default
    StairBlock& operator=(StairBlock const&);
    StairBlock(StairBlock const&);
    StairBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual ::AABB const&
    getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const /*override*/;

    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const
        /*override*/;

    virtual bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual void animateTick(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual bool attack(::Player* player, ::BlockPos const& pos) const /*override*/;

    virtual void
    destroy(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor* entitySource) const
        /*override*/;

    virtual bool mayPick() const /*override*/;

    virtual bool mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    virtual void onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual bool isStairBlock() const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const /*override*/;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    virtual ~StairBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool setInnerPieceShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    shape,
        bool                       shrink
    ) const;

    MCAPI bool setStepShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    shape,
        bool                       shrink
    ) const;

    MCAPI_C void shapeZFightShrink(::AABB& shape) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<int[][2]> DEAD_SPACES();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCFOLD ::AABB const&
    $getOutline(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    MCFOLD bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCAPI bool $canProvideSupport(::Block const& block, uchar face, ::BlockSupportType) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI void $animateTick(::BlockAnimateTickData const& tickData) const;

    MCAPI bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCAPI void
    $destroy(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, ::Actor* entitySource) const;

    MCAPI bool $mayPick() const;

    MCAPI bool $mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCAPI void $onExploded(::BlockSource& region, ::BlockPos const& pos, ::Actor* entitySource) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCFOLD bool $isStairBlock() const;

    MCFOLD int $getVariant(::Block const& block) const;

    MCAPI bool $liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;

    MCAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
