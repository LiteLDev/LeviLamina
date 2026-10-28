#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/util/value_providers/ClampedNormalFloat.h"
#include "mc/util/value_providers/UniformFloat.h"
#include "mc/util/value_providers/UniformInt.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/feature/SpeleothemClusterPlacementMode.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class HashedString;
// clang-format on

class SpeleothemClusterFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mBaseBlock;
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mSpeleothemBlock;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange const>                                        mHeightRange;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::reference_wrapper<::HashedString const>> const&> mReplaceableBlocks;
    ::ll::TypedStorage<4, 16, ::ValueProviders::ClampedNormalFloat const>                          mWetness;
    ::ll::TypedStorage<4, 8, ::ValueProviders::UniformInt const>                                   mRadius;
    ::ll::TypedStorage<4, 8, ::ValueProviders::UniformFloat const>                                 mDensity;
    ::ll::TypedStorage<4, 4, int const>                                                            mVerticalSearchRange;
    ::ll::TypedStorage<4, 4, ::SpeleothemClusterPlacementMode const>                               mPlacementMode;
    ::ll::TypedStorage<1, 1, bool const>                                                           mAllowWaterPlacement;
    ::ll::TypedStorage<8, 64, ::std::function<::Block const&(::Block const&)> const> mBaseBlockTransformer;
    // NOLINTEND

public:
    // prevent constructor by default
    SpeleothemClusterFeature& operator=(SpeleothemClusterFeature const&);
    SpeleothemClusterFeature(SpeleothemClusterFeature const&);
    SpeleothemClusterFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


    // NOLINTEND
};
