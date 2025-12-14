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

class LegacyForestFoliageFeature : public ::Feature {
public:
    // LegacyForestFoliageFeature inner types define
    enum class Type : int {
        Flower = 0,
        Normal = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LegacyForestFoliageFeature::Type> mForestType;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>             mTallGrassFeature;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>>             mDoublePlantFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyForestFoliageFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;

    virtual ~LegacyForestFoliageFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyForestFoliageFeature(::LegacyForestFoliageFeature::Type forestType, ::FeatureRegistry& registry);

    MCAPI void
    _placeDoublePlants(::BlockSource& region, ::BlockPos const& origin, ::Random& random, int doublePlantCount) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyForestFoliageFeature::Type forestType, ::FeatureRegistry& registry);
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
