#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/world/level/block/LogBlockMapColors.h"
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Experiments;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace mce { class Color; }
// clang-format on

class LogBlock : public ::RotatedPillarBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockType const>>          mStrippedBlockType;
    ::ll::TypedStorage<4, 36, ::std::optional<::LogBlockMapColors>> mMapColors;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 144
    virtual ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~LogBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::mce::Color $getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
