#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPtr;
class ActorSkeletalAnimationPtr;
class DataDrivenGeometry;
class HashedString;
struct MolangVariableSettings;
struct NamedMolangScript;
// clang-format on

class CommonResourceDefinitionMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ActorSkeletalAnimationPtr>> mActorAnimationMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ActorAnimationControllerPtr>>
                                                                  mActorAnimationControllerMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::NamedMolangScript>> mActorAnimateScriptArray;
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 24, ::std::vector<::MolangVariableSettings>> mVariableSettings;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 24, ::std::vector<::MolangVariableSettings>> mVariableSettings;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>           mQueryableGeometryBoneNames;
#endif
    // NOLINTEND

public:
    // prevent constructor by default
    CommonResourceDefinitionMap& operator=(CommonResourceDefinitionMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommonResourceDefinitionMap();

    MCAPI_C CommonResourceDefinitionMap(::CommonResourceDefinitionMap&&);

    MCAPI_C CommonResourceDefinitionMap(::CommonResourceDefinitionMap const&);

    MCAPI ::std::vector<::NamedMolangScript> const& getAnimateScriptArray() const;

    MCAPI_C uint64 getQueryableGeometryBoneIndexByNameHash(uint64 boneNameHash) const;

    MCAPI_C void initQueryableGeometryBoneNames(::std::shared_ptr<::DataDrivenGeometry const> geometry);

    MCAPI_C void mergeActorAnimateScriptArray(::std::vector<::NamedMolangScript> const& actorAnimateScriptArray);

    MCAPI void mergeAnimation(::HashedString const& name, ::ActorSkeletalAnimationPtr animationPtr);

    MCAPI void
    mergeAnimationController(::HashedString const& name, ::ActorAnimationControllerPtr animationControllerPtr);

    MCAPI ~CommonResourceDefinitionMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI_C void* $ctor(::CommonResourceDefinitionMap&&);

    MCAPI_C void* $ctor(::CommonResourceDefinitionMap const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
