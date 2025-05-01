#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Vec3;
class WorldChangeTransaction;
// clang-format on

class PortalShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb18294;
    ::ll::UntypedStorage<1, 1>  mUnk680fc5;
    ::ll::UntypedStorage<1, 1>  mUnk2ad9bc;
    ::ll::UntypedStorage<4, 4>  mUnkfc9d90;
    ::ll::UntypedStorage<4, 12> mUnk50130b;
    ::ll::UntypedStorage<1, 1>  mUnkf825cc;
    ::ll::UntypedStorage<4, 4>  mUnk5d3d26;
    ::ll::UntypedStorage<4, 4>  mUnk8bb68c;
    // NOLINTEND

public:
    // prevent constructor by default
    PortalShape& operator=(PortalShape const&);
    PortalShape(PortalShape const&);
    PortalShape();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _calculatePortalHeight(::BlockSource const& source);

    MCNAPI void createPortalBlocks(::WorldChangeTransaction& transaction) const;

    MCNAPI void evaluate(::BlockPos const& originalPosition, ::BlockSource const& source);

    MCNAPI void removePortalBlocks(::WorldChangeTransaction& transaction, ::BlockPos const& firstPortalPosition) const;

    MCNAPI void updateNeighboringBlocks(::BlockSource& source, ::Vec3 const& perpendicularAxis) const;
    // NOLINTEND
};
