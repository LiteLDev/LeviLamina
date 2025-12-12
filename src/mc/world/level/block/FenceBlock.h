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
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class ItemInstance;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class FenceBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canConnect(::Block const& otherBlock, uchar, ::Block const&) const /*override*/;

    virtual ::AABB const& getVisualShapeInWorld(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const /*override*/;

    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual ::std::string buildDescriptionId(::Block const& block) const /*override*/;

    virtual bool isFenceBlock() const /*override*/;

    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const
        /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~FenceBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fetchPathableNeighbors(
        ::std::vector<::BlockPos>& outNeighbors,
        ::BlockSource&             region,
        ::BlockPos const&          pos,
        ::Vec3 const&              entityPos
    ) const;

    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AABB const& _getShape(
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::Block const&             block,
        ::AABB&                    bufferValue,
        bool                       isCollisionShape
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canConnect(::Block const& otherBlock, uchar, ::Block const&) const;

    MCAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const;

    MCAPI ::AABB $getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;

    MCAPI bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCFOLD bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const;

    MCFOLD ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCFOLD ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI ::std::string $buildDescriptionId(::Block const& block) const;

    MCFOLD bool $isFenceBlock() const;

    MCFOLD bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCFOLD ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
