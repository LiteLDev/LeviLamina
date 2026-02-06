#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class CobblestoneBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const* tryGetInfested(::Block const& block) const /*override*/;

    virtual ~CobblestoneBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const* $tryGetInfested(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
