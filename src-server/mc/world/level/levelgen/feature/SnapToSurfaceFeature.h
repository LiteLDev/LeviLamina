#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class SnapToSurfaceFeature : public ::IFeature {
public:
    // SnapToSurfaceFeature inner types define
    enum class Surface : int {
        Ceiling = 0,
        Floor = 1,
        RandomHorizontal = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeatureToSnap;
    ::ll::TypedStorage<4, 4, int> mVerticalSearchRange;
    ::ll::TypedStorage<4, 4, ::SnapToSurfaceFeature::Surface> mSurface;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mAllowedSurfaceBlocks;
    ::ll::TypedStorage<1, 1, bool> mAllowAirPlacement;
    ::ll::TypedStorage<1, 1, bool> mAllowUnderwaterPlacement;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SnapToSurfaceFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> _findSnapPos(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::SnapToSurfaceFeature::Surface targetSurface) const;
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
