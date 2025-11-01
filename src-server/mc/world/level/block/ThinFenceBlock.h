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
    virtual void addAABBs(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& blockPos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes) const /*override*/;

    // vIndex: 7
    virtual bool addCollisionShapes(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes, ::optional_ref<::GetCollisionShapeInterface const> entity) const /*override*/;

    // vIndex: 10
    virtual ::AABB const& getVisualShapeInWorld(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>) const /*override*/;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(::AABB& outAABB, ::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 9
    virtual ::AABB const& getOutline(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferValue) const /*override*/;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const /*override*/;

    // vIndex: 24
    virtual bool canConnect(::Block const& otherBlock, uchar, ::Block const&) const /*override*/;

    // vIndex: 33
    virtual bool isThinFenceBlock() const /*override*/;

    // vIndex: 13
    virtual bool getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const /*override*/;

    // vIndex: 83
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 0
    virtual ~ThinFenceBlock() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& THIN_FENCE_DOESNT_BREAK_FALLING_BLOCK_VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addAABBs(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& blockPos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes) const;

    MCFOLD bool $addCollisionShapes(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB const* intersectTestBox, ::std::vector<::AABB>& inoutBoxes, ::optional_ref<::GetCollisionShapeInterface const> entity) const;

    MCAPI ::AABB const& $getVisualShapeInWorld(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferAABB) const;

    MCAPI ::AABB $getCollisionShape(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>) const;

    MCAPI bool $getCollisionShapeForCamera(::AABB& outAABB, ::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos) const;

    MCFOLD ::AABB const& $getOutline(::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCFOLD bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const;

    MCFOLD bool $canConnect(::Block const& otherBlock, uchar, ::Block const&) const;

    MCFOLD bool $isThinFenceBlock() const;

    MCFOLD bool $getLiquidClipVolume(::Block const& block, ::BlockSource& region, ::BlockPos const& pos, ::AABB& includeBox) const;

    MCAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
