#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class SurfaceRelativeThresholdFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4b6b61;
    ::ll::UntypedStorage<4, 4>  mUnkdeeffa;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceRelativeThresholdFeature& operator=(SurfaceRelativeThresholdFeature const&);
    SurfaceRelativeThresholdFeature(SurfaceRelativeThresholdFeature const&);
    SurfaceRelativeThresholdFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SurfaceRelativeThresholdFeature() /*override*/ = default;

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
