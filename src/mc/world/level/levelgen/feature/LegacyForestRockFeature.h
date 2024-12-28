#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class FeatureRegistry;
class Random;
// clang-format on

class LegacyForestRockFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc8300e;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyForestRockFeature& operator=(LegacyForestRockFeature const&);
    LegacyForestRockFeature(LegacyForestRockFeature const&);
    LegacyForestRockFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyForestRockFeature() /*override*/;

    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyForestRockFeature(::FeatureRegistry const& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FeatureRegistry const& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
