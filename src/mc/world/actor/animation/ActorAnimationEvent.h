#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Actor;
class RenderParams;
// clang-format on

class ActorAnimationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnke1d457;
    ::ll::UntypedStorage<8, 48>  mUnk676bab;
    ::ll::UntypedStorage<4, 4>   mUnkb80a15;
    ::ll::UntypedStorage<8, 32>  mUnkde4216;
    ::ll::UntypedStorage<4, 4>   mUnkf0fcd7;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationEvent& operator=(ActorAnimationEvent const&);
    ActorAnimationEvent(ActorAnimationEvent const&);
    ActorAnimationEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorAnimationEvent(
        float                time,
        ::std::string const& event,
        ::CurrentCmdVersion  commandVersion,
        ::MolangVersion      molangVersion
    );

    MCAPI void fire(::RenderParams& renderParams, ::Actor* actor) const;

    MCAPI ~ActorAnimationEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(float time, ::std::string const& event, ::CurrentCmdVersion commandVersion, ::MolangVersion molangVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
