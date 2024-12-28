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
    ::ll::UntypedStorage<8, 64> mUnk1b76f2;
    ::ll::UntypedStorage<8, 64> mUnkbf67e1;
    ::ll::UntypedStorage<8, 24> mUnk5f6bfa;
    ::ll::UntypedStorage<8, 24> mUnk5bd786;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonResourceDefinitionMap& operator=(CommonResourceDefinitionMap const&);
    CommonResourceDefinitionMap(CommonResourceDefinitionMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommonResourceDefinitionMap();

    MCAPI ::std::vector<::NamedMolangScript> const& getAnimateScriptArray() const;

    MCAPI ::std::unordered_map<::HashedString, ::ActorAnimationControllerPtr> const& getAnimationControllers() const;

    MCAPI ::std::unordered_map<::HashedString, ::ActorSkeletalAnimationPtr> const& getAnimations() const;

    MCAPI ::std::vector<::MolangVariableSettings> const& getVariableSettings() const;

    MCAPI bool isCommonResourceDefinitionMapEmpty() const;

    MCAPI void mergeActorAnimateScriptArray(::std::vector<::NamedMolangScript> const& actorAnimateScriptArray);

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
