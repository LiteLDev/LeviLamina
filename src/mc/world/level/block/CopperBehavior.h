#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CopperBehavior {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk58ddb7;
    ::ll::UntypedStorage<8, 8>  mUnk223dcd;
    ::ll::UntypedStorage<8, 8>  mUnk99f4b1;
    ::ll::UntypedStorage<8, 8>  mUnk2c966e;
    ::ll::UntypedStorage<8, 64> mUnkc24b35;
    // NOLINTEND

public:
    // prevent constructor by default
    CopperBehavior& operator=(CopperBehavior const&);
    CopperBehavior(CopperBehavior const&);
    CopperBehavior();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _incrementAge(::BlockSource& region, ::Block const& block, ::BlockPos const& pos, float generatedOxidizeChance)
        const;

    MCNAPI ::Block const& getCorrespondingWaxedBlock(::Block const& block) const;

    MCNAPI ::Block const& getNextAgingBlock(::Block const& block) const;

    MCNAPI bool use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND
};
