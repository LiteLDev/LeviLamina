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

class LegacySwampFoliageFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkd50f04;
    ::ll::UntypedStorage<8, 24> mUnk4a6f80;
    ::ll::UntypedStorage<8, 24> mUnk2d9268;
    ::ll::UntypedStorage<8, 24> mUnk5818d8;
    ::ll::UntypedStorage<8, 24> mUnk66cd2b;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacySwampFoliageFeature& operator=(LegacySwampFoliageFeature const&);
    LegacySwampFoliageFeature(LegacySwampFoliageFeature const&);
    LegacySwampFoliageFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~LegacySwampFoliageFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacySwampFoliageFeature(::FeatureRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FeatureRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
