#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/value_providers/ClampedNormalFloat.h"
#include "mc/util/value_providers/UniformFloat.h"
#include "mc/util/value_providers/UniformInt.h"
#include "mc/world/level/levelgen/feature/SpeleothemClusterPlacementMode.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
namespace SharedTypes { struct IntRange; }
// clang-format on

struct SpeleothemClusterConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mBaseBlock;
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mSpeleothemBlock;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::reference_wrapper<::HashedString const>> const&> mReplaceableBlocks;
    ::ll::TypedStorage<8, 8, ::SharedTypes::IntRange const&>                                       mHeightRange;
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
    SpeleothemClusterConfiguration& operator=(SpeleothemClusterConfiguration const&);
    SpeleothemClusterConfiguration(SpeleothemClusterConfiguration const&);
    SpeleothemClusterConfiguration();
};
