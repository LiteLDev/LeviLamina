#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/AmethystBlock.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Experiments;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class AmethystClusterBlock : public ::AmethystBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mHeight;
    ::ll::TypedStorage<4, 4, int> mAabbOffset;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 125
    virtual ::BlockType& init() /*override*/;

    // vIndex: 138
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 80
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar facing) const /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const& block, uchar face, ::BlockSupportType type) const /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~AmethystClusterBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::AABB _shapeFromDirection(int facing) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockType& $init();

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar facing) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $canProvideSupport(::Block const& block, uchar face, ::BlockSupportType type) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
