#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
        ::ll::UntypedStorage<8, 24> mUnk28dbe3;
        ::ll::UntypedStorage<4, 4>  mUnkc6f26e;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedFeatureReference& operator=(WeightedFeatureReference const&);
        WeightedFeatureReference(WeightedFeatureReference const&);
        WeightedFeatureReference();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcbe588;
    // NOLINTEND

public:
    // prevent constructor by default
    WeightedRandomFeature& operator=(WeightedRandomFeature const&);
    WeightedRandomFeature(WeightedRandomFeature const&);
    WeightedRandomFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WeightedRandomFeature() /*override*/ = default;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
