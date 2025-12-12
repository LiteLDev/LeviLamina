#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPtr;
class ActorSkeletalAnimationPtr;
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
    ::ll::TypedStorage<8, 24, ::std::vector<::NamedMolangScript>>      mActorAnimateScriptArray;
    ::ll::TypedStorage<8, 24, ::std::vector<::MolangVariableSettings>> mVariableSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommonResourceDefinitionMap();

    MCAPI ::std::vector<::NamedMolangScript> const& getAnimateScriptArray() const;

    MCAPI void mergeAnimation(::HashedString const& name, ::ActorSkeletalAnimationPtr animationPtr);

    MCAPI void
    mergeAnimationController(::HashedString const& name, ::ActorAnimationControllerPtr animationControllerPtr);

    MCAPI ~CommonResourceDefinitionMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
