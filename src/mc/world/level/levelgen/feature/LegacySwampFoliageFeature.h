#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/Feature.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

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
    ::ll::TypedStorage<8, 64, ::std::function<::WeakRef<::IFeature>(::Random&)>> mGetTreeFeature;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>                             mSeagrassFeature;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>                             mTallGrassFeature;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>                             mHugeMushroomFeature;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>                             mSwampTreeFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacySwampFoliageFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;

    virtual ~LegacySwampFoliageFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacySwampFoliageFeature(::FeatureRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FeatureRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
