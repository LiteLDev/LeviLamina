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
    ::ll::UntypedStorage<4, 4>  mUnk243b32;
    ::ll::UntypedStorage<8, 24> mUnk6ea174;
    ::ll::UntypedStorage<8, 24> mUnkc610a9;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyForestFoliageFeature& operator=(LegacyForestFoliageFeature const&);
    LegacyForestFoliageFeature(LegacyForestFoliageFeature const&);
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
    MCNAPI LegacyForestFoliageFeature(::LegacyForestFoliageFeature::Type forestType, ::FeatureRegistry& registry);

    MCNAPI void
    _placeDoublePlants(::BlockSource& region, ::BlockPos const& origin, ::Random& random, int doublePlantCount) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyForestFoliageFeature::Type forestType, ::FeatureRegistry& registry);
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
