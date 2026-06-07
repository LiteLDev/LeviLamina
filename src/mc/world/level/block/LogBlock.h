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
    // prevent constructor by default
    LogBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LogBlock(
        ::std::string const&                 nameId,
        int                                  id,
        ::WeakPtr<::BlockType const>         strippedBlockType,
        ::std::optional<::LogBlockMapColors> mapColors
    );

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                 nameId,
        int                                  id,
        ::WeakPtr<::BlockType const>         strippedBlockType,
        ::std::optional<::LogBlockMapColors> mapColors
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::mce::Color $getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
