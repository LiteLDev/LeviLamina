#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class WeightedRandomFeature : public ::IFeature {
public:
    // WeightedRandomFeature inner types declare
    // clang-format off
    struct WeightedFeatureReference;
    // clang-format on

    // WeightedRandomFeature inner types define
    struct WeightedFeatureReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeature;
        ::ll::TypedStorage<4, 4, float>                  mWeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::WeightedRandomFeature::WeightedFeatureReference>> mFeatureReferences;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WeightedRandomFeature() /*override*/ = default;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
