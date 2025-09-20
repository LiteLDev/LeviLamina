#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockPos;
class IConstBlockSource;
// clang-format on

class GlassBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDoesDrops;
    ::ll::TypedStorage<1, 1, bool> mCanBeUsedInCommands;
    ::ll::TypedStorage<1, 1, bool> mDoesNotCollideWithCamera;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 24
    virtual bool canConnect(::Block const& otherBlock, uchar toOther, ::Block const& thisBlock) const /*override*/;

    // vIndex: 56
    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const /*override*/;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const /*override*/;

    // vIndex: 0
    virtual ~GlassBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canConnect(::Block const& otherBlock, uchar toOther, ::Block const& thisBlock) const;

    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCNAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCNAPI bool $getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
