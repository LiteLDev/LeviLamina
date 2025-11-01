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
    // vIndex: 56
    virtual bool canBeUsedInCommands(::BaseGameVersion const& requiredBaseGameVersion) const /*override*/;

    // vIndex: 83
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(::AABB& outAABB, ::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 0
    virtual ~GlassBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canBeUsedInCommands(::BaseGameVersion const& requiredBaseGameVersion) const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI bool $getCollisionShapeForCamera(::AABB& outAABB, ::Block const& block, ::IConstBlockSource const& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
