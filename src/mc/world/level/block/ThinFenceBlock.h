#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
// clang-format on

class ThinFenceBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mDoesNotCollideWithCamera;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const /*override*/;

    // vIndex: 7
    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    // vIndex: 10
    virtual ::AABB const& getVisualShapeInWorld(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const /*override*/;

    // vIndex: 9
    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const /*override*/;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    // vIndex: 24
    virtual bool canConnect(::Block const& otherBlock, uchar, ::Block const&) const /*override*/;

    // vIndex: 33
    virtual bool isThinFenceBlock() const /*override*/;

    // vIndex: 13
    virtual bool
    getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const
        /*override*/;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 0
    virtual ~ThinFenceBlock() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& THIN_FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    MCNAPI bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCNAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI bool $getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;

    MCNAPI ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;

    MCNAPI bool $canConnect(::Block const& otherBlock, uchar, ::Block const&) const;

    MCNAPI bool $isThinFenceBlock() const;

    MCNAPI bool
    $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCNAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
