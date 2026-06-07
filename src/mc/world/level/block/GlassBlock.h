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
class Material;
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
    // prevent constructor by default
    GlassBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canBeUsedInCommands(::BaseGameVersion const& requiredBaseGameVersion) const /*override*/;

    virtual bool breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const /*override*/;

    virtual bool getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GlassBlock(
        ::std::string const& nameId,
        int                  id,
        ::Material const&    material,
        bool                 doesDrops,
        bool                 useableInCommands,
        bool                 doesNotCollideWithCamera
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const& nameId,
        int                  id,
        ::Material const&    material,
        bool                 doesDrops,
        bool                 useableInCommands,
        bool                 doesNotCollideWithCamera
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canBeUsedInCommands(::BaseGameVersion const& requiredBaseGameVersion) const;

    MCFOLD bool $breaksFallingBlocks(::Block const&, ::BaseGameVersion const) const;

    MCAPI bool $getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
