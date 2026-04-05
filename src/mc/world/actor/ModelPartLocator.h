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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ModelPartLocator();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ModelPartLocator(::ModelPartLocator const&);

    MCAPI ModelPartLocator(
        ::std::string const& name,
        ::std::string const& boneName,
        ::Vec3 const&        localOffset,
        bool                 ignoreInheritedScale
    );

    MCAPI bool compare(::ModelPartLocator const& rhs, bool compareSkeletalHierarchyIndexAndBoneMapping) const;

    MCAPI ::ModelPartLocator& operator=(::ModelPartLocator const&);

    MCAPI ~ModelPartLocator();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ModelPartLocator const&);

    MCAPI void* $ctor(
        ::std::string const& name,
        ::std::string const& boneName,
        ::Vec3 const&        localOffset,
        bool                 ignoreInheritedScale
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};
