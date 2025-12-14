#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class BeardAndShaverFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeatureRef;
    ::ll::TypedStorage<4, 24, ::BoundingBox>         mBoundingBox;
    ::ll::TypedStorage<4, 4, float>                  mYDelta;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor>    mSurfaceBlock;
    ::ll::TypedStorage<8, 184, ::BlockDescriptor>    mSupportBlock;
    ::ll::TypedStorage<4, 4, float>                  mBeardRaggednessMin;
    ::ll::TypedStorage<4, 4, float>                  mBeardRaggednessMax;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeardAndShaverFeature() /*override*/ = default;

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
