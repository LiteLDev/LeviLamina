#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class SeagrassFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk91d3bb;
    ::ll::UntypedStorage<4, 4> mUnkeb19ab;
    ::ll::UntypedStorage<8, 8> mUnkcf9df4;
    // NOLINTEND

public:
    // prevent constructor by default
    SeagrassFeature& operator=(SeagrassFeature const&);
    SeagrassFeature(SeagrassFeature const&);
    SeagrassFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~SeagrassFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _tryPlaceTallSeagrass(::BlockSource& region, ::BlockPos const& pos, bool isColdEnoughForIce) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
