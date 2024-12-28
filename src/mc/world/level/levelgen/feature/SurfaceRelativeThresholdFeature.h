#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceRelativeThresholdFeature() /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SurfaceRelativeThresholdFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
