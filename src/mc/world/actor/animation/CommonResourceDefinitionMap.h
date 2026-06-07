#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPtr;
class ActorSkeletalAnimationPtr;
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
    ::ll::TypedStorage<8, 24, ::std::vector<::NamedMolangScript>>      mActorAnimateScriptArray;
    ::ll::TypedStorage<8, 24, ::std::vector<::MolangVariableSettings>> mVariableSettings;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>           mQueryableGeometryBoneNames;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CommonResourceDefinitionMap& operator=(CommonResourceDefinitionMap const&);
    CommonResourceDefinitionMap();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI CommonResourceDefinitionMap(::CommonResourceDefinitionMap const&);
#endif

    MCAPI ::std::vector<::NamedMolangScript> const& getAnimateScriptArray() const;

#ifdef LL_PLAT_C
    MCFOLD ::std::unordered_map<::HashedString, ::ActorSkeletalAnimationPtr> const& getAnimations() const;

    MCAPI uint64 getQueryableGeometryBoneIndexByNameHash(uint64 boneNameHash) const;

    MCAPI void initQueryableGeometryBoneNames(::std::vector<::HashedString> geometryDefaultBoneOrientations);
#endif

    MCAPI bool isCommonResourceDefinitionMapEmpty() const;

#ifdef LL_PLAT_C
    MCAPI bool isQueryableGeometryBoneNameArrayInitialized() const;
#endif

    MCAPI void mergeActorAnimateScriptArray(::std::vector<::NamedMolangScript> const& actorAnimateScriptArray);

    MCAPI void mergeAnimation(::HashedString const& name, ::ActorSkeletalAnimationPtr animationPtr);

    MCAPI void
    mergeAnimationController(::HashedString const& name, ::ActorAnimationControllerPtr animationControllerPtr);

#ifdef LL_PLAT_C
    MCAPI void mergePublicVariable(::HashedString const& variableName);

    MCAPI void removeActorAnimateScript(::HashedString const& animateScriptName);
#endif

    MCAPI ~CommonResourceDefinitionMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::CommonResourceDefinitionMap const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
