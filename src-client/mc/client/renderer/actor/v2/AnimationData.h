#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AnimationRemappingInfo;
struct PartVisibilityBoneSlice;
struct PartVisibilityExpression;
struct SkinnedMeshRemappingData;
// clang-format on

struct AnimationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                       mLargestSkeletonBoneCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationRemappingInfo>>   mPerActorRemappingInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkinnedMeshRemappingData>> mRemappingData;
    ::ll::TypedStorage<8, 24, ::std::vector<::PartVisibilityBoneSlice>>  mPartVisibilityBoneSlices;
    ::ll::TypedStorage<8, 24, ::std::vector<::PartVisibilityExpression>> mPartVisibilityExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>                     mPerRenderControllerPartVisibility;
    // NOLINTEND
};
