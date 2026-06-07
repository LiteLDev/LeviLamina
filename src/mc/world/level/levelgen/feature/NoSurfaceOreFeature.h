#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class NoSurfaceOreFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::IntRange>          mCount;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor> mPlaceBlock;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor> mReplaceBlock;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor> mAvoidsBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    NoSurfaceOreFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NoSurfaceOreFeature(
        ::IntRange               count,
        ::BlockDescriptor const& places,
        ::BlockDescriptor const& replaces,
        ::BlockDescriptor const& notExposedTo
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IntRange               count,
        ::BlockDescriptor const& places,
        ::BlockDescriptor const& replaces,
        ::BlockDescriptor const& notExposedTo
    );
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
