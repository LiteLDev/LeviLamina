#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"

// auto generated forward declare list
// clang-format off
struct AnimationRemappingInfo;
struct DataDrivenRendererEntry;
// clang-format on

struct PreviousTransformationData {
public:
    // PreviousTransformationData inner types declare
    // clang-format off
    struct BoneRemapping;
    // clang-format on

    // PreviousTransformationData inner types define
    struct BoneRemapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                     mNumBones;
        ::ll::TypedStorage<4, 4, uint>                     mBoneMatrixOffset;
        ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex> mSkeletalIndex;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DataDrivenRendererEntry>>                   mRendererEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                                      mSortedActorPointers;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::mat4x4>>                               mSortedActorTransforms;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationRemappingInfo>>                    mSortedActorRemappingInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::PreviousTransformationData::BoneRemapping>> mBoneRemapping;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::mat4x4>>                               mBoneData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PreviousTransformationData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
