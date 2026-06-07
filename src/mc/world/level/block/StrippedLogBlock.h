#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/LogBlockMapColors.h"
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace mce { class Color; }
// clang-format on

class StrippedLogBlock : public ::RotatedPillarBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 36, ::std::optional<::LogBlockMapColors>> mMapColors;
    // NOLINTEND

public:
    // prevent constructor by default
    StrippedLogBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getVariant(::Block const& block) const /*override*/;

    virtual ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StrippedLogBlock(::std::string const& nameId, int id, ::std::optional<::LogBlockMapColors> mapColors);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::std::optional<::LogBlockMapColors> mapColors);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getVariant(::Block const& block) const;

    MCAPI ::mce::Color $getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
