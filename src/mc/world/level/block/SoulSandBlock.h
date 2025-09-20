#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class SoulSandBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 84
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~SoulSandBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::AABB& BLOCK_AABB();

    MCNAPI static ::BaseGameVersion const& SOUL_SAND_BREAKS_FALLING_BLOCK_VERSION();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const& pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI bool $getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
