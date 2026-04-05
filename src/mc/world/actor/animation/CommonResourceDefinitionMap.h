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

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommonResourceDefinitionMap();

#ifdef LL_PLAT_C
    MCAPI CommonResourceDefinitionMap(::CommonResourceDefinitionMap&&);

    MCAPI CommonResourceDefinitionMap(::CommonResourceDefinitionMap const&);
#endif

    MCAPI ::std::vector<::NamedMolangScript> const& getAnimateScriptArray() const;

#ifdef LL_PLAT_C
    MCAPI void initQueryableGeometryBoneNames(::std::vector<::HashedString> geometryDefaultBoneOrientations);

    MCAPI void mergeActorAnimateScriptArray(::std::vector<::NamedMolangScript> const& actorAnimateScriptArray);
#endif

    MCAPI void mergeAnimation(::HashedString const& name, ::ActorSkeletalAnimationPtr animationPtr);

    MCAPI void
    mergeAnimationController(::HashedString const& name, ::ActorAnimationControllerPtr animationControllerPtr);

#ifdef LL_PLAT_C
    MCAPI ~CommonResourceDefinitionMap();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::CommonResourceDefinitionMap&&);

    MCAPI void* $ctor(::CommonResourceDefinitionMap const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
