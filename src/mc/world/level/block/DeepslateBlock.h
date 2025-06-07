#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class DeepslateBlock : public ::RotatedPillarBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 45
    virtual bool canBeOriginalSurface() const /*override*/;

    // vIndex: 128
    virtual ::Block const* tryGetInfested(::Block const& block) const /*override*/;

    // vIndex: 0
    virtual ~DeepslateBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canBeOriginalSurface() const;

    MCAPI ::Block const* $tryGetInfested(::Block const& block) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
