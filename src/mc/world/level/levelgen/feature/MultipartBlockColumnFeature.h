#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/util/WeightedChoices.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class MultipartBlockColumnFeature : public ::IFeature {
public:
    // MultipartBlockColumnFeature inner types declare
    // clang-format off
    struct WeightedHeight;
    // clang-format on

    // MultipartBlockColumnFeature inner types define
    struct WeightedHeight {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mTipBlockDescriptor;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mFrustumBlockDescriptor;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mMiddleBlockDescriptor;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>               mBaseBlockDescriptor;
    ::ll::TypedStorage<4, 8, ::IntRange>                        mHeightRange;
    ::ll::TypedStorage<8, 24, ::WeightedChoices<int>>           mWeightedHeights;
    ::ll::TypedStorage<1, 1, uchar>                             mDirection;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayPlaceOn;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayReplace;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultipartBlockColumnFeature() /*override*/ = default;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


    // NOLINTEND
};
