#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class ModelPartLocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk93c1f0;
    ::ll::UntypedStorage<4, 4>  mUnk8bf160;
    ::ll::UntypedStorage<8, 48> mUnkd776ed;
    ::ll::UntypedStorage<8, 48> mUnk56f581;
    ::ll::UntypedStorage<4, 12> mUnk4f4694;
    ::ll::UntypedStorage<4, 12> mUnke57838;
    ::ll::UntypedStorage<4, 12> mUnk3f620f;
    ::ll::UntypedStorage<1, 1>  mUnk90f771;
    ::ll::UntypedStorage<4, 64> mUnk1c2e45;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelPartLocator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ModelPartLocator(::ModelPartLocator const&);

    MCNAPI_C ModelPartLocator(
        ::std::string const& name,
        ::std::string const& boneName,
        ::Vec3 const&        localOffset,
        bool                 ignoreInheritedScale
    );

    MCNAPI_C bool compare(::ModelPartLocator const& rhs, bool compareSkeletalHierarchyIndexAndBoneMapping) const;

    MCNAPI_C ::ModelPartLocator& operator=(::ModelPartLocator const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ModelPartLocator const&);

    MCNAPI_C void* $ctor(
        ::std::string const& name,
        ::std::string const& boneName,
        ::Vec3 const&        localOffset,
        bool                 ignoreInheritedScale
    );
    // NOLINTEND
};
