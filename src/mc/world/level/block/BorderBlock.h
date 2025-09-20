#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/WallBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class IConstBlockSource;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class BorderBlock : public ::WallBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 112
    virtual ::std::string buildDescriptionId(::Block const&) const /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const&, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 10
    virtual ::AABB const&
    getVisualShapeInWorld(::Block const& block, ::IConstBlockSource const&, ::BlockPos const&, ::AABB& bufferAABB) const
        /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~BorderBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $buildDescriptionId(::Block const&) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB& bufferAABB) const;

    MCNAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::AABB& bufferAABB
    ) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
