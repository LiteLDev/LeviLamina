#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"

class ModelPartLocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex> mSkeletalHierarchyIndex;
    ::ll::TypedStorage<4, 4, int>                      mBoneMapping;
    ::ll::TypedStorage<8, 48, ::HashedString>          mBoneName;
    ::ll::TypedStorage<8, 48, ::HashedString>          mName;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mRotation;
    ::ll::TypedStorage<1, 1, bool>                     mIgnoreInheritedScale;
    ::ll::TypedStorage<4, 64, ::Matrix>                mWorldAbsoluteTransform;
    // NOLINTEND
};
