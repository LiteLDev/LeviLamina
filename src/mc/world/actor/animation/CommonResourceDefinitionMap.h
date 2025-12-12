#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPtr;
class ActorSkeletalAnimationPtr;
class DataDrivenGeometry;
class HashedString;
struct NamedMolangScript;
// clang-format on

class CommonResourceDefinitionMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk1b76f2;
    ::ll::UntypedStorage<8, 64> mUnkbf67e1;
    ::ll::UntypedStorage<8, 24> mUnk5f6bfa;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 24> mUnk5bd786;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 24> mUnk5bd786;
    ::ll::UntypedStorage<8, 24> mUnk8193a6;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    CommonResourceDefinitionMap& operator=(CommonResourceDefinitionMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommonResourceDefinitionMap();

    MCNAPI_C CommonResourceDefinitionMap(::CommonResourceDefinitionMap&&);

    MCNAPI_C CommonResourceDefinitionMap(::CommonResourceDefinitionMap const&);

    MCNAPI ::std::vector<::NamedMolangScript> const& getAnimateScriptArray() const;

    MCNAPI_C uint64 getQueryableGeometryBoneIndexByNameHash(uint64 boneNameHash) const;

    MCNAPI_C void initQueryableGeometryBoneNames(::std::shared_ptr<::DataDrivenGeometry const> geometry);

    MCNAPI_C void mergeActorAnimateScriptArray(::std::vector<::NamedMolangScript> const& actorAnimateScriptArray);

    MCNAPI void mergeAnimation(::HashedString const& name, ::ActorSkeletalAnimationPtr animationPtr);

    MCNAPI void
    mergeAnimationController(::HashedString const& name, ::ActorAnimationControllerPtr animationControllerPtr);

    MCNAPI ~CommonResourceDefinitionMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI_C void* $ctor(::CommonResourceDefinitionMap&&);

    MCNAPI_C void* $ctor(::CommonResourceDefinitionMap const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
