#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
class SkeletalHierarchyBone;
// clang-format on

class SkeletalHierarchy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex>                mGlobalSkeletalHierarchyIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkeletalHierarchyBone>> mHierarchyBones;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkeletalHierarchy() = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SkeletalHierarchyIndex getSkeletalHierarchyIndex(::DataDrivenGeometry const& dataDrivenGeometry);
    // NOLINTEND
};
