#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/SignBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
// clang-format on

class HangingSignBlock : public ::SignBlock {
public:
    // prevent constructor by default
    HangingSignBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& pos,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const /*override*/;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& pathPos, ::BlockPos const&) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    virtual float getYRotationInDegrees(::Block const& block) const /*override*/;

    virtual ::ItemInstance _getItemInstance() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HangingSignBlock(::std::string const& nameId, int id, bool onGround, ::SignBlock::SignType signType);

    MCAPI bool _canAttachTo(::BlockSource& region, ::BlockPos attachPos, uchar attachFace, uchar ourFace) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isDoubleChainAttached(::Block const& block);

    MCAPI static bool _isHangingSign(::Block const& block);

    MCAPI static bool _isVShapedChainAttached(::Block const& block);

    MCAPI static bool isDoubleChainHangingSign(::Block const& block);

    MCAPI static bool isSideAttachedHangingSign(::Block const& block);

    MCAPI static bool isVShapedHangingSign(::Block const& block);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, bool onGround, ::SignBlock::SignType signType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI ::AABB $getCollisionShape(
        ::Block const&             block,
        ::IConstBlockSource const& pos,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& pathPos, ::BlockPos const&) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI float $getYRotationInDegrees(::Block const& block) const;

    MCAPI ::ItemInstance $_getItemInstance() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
