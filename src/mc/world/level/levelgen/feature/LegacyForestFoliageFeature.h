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
        Roofed = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk243b32;
    ::ll::UntypedStorage<8, 24> mUnkd69d25;
    ::ll::UntypedStorage<8, 24> mUnk6ea174;
    ::ll::UntypedStorage<8, 24> mUnkc610a9;
    ::ll::UntypedStorage<8, 24> mUnk978e6f;
    ::ll::UntypedStorage<8, 24> mUnk31e8bb;
    ::ll::UntypedStorage<8, 24> mUnkb634d1;
    ::ll::UntypedStorage<8, 24> mUnkd770a0;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyForestFoliageFeature& operator=(LegacyForestFoliageFeature const&);
    LegacyForestFoliageFeature(LegacyForestFoliageFeature const&);
    LegacyForestFoliageFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& origin, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~LegacyForestFoliageFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyForestFoliageFeature(::LegacyForestFoliageFeature::Type forestType, ::FeatureRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyForestFoliageFeature::Type forestType, ::FeatureRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
