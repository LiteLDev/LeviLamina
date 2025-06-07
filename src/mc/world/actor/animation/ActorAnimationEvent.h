#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class RenderParams;
// clang-format on

class ActorAnimationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode>   mExpression;
    ::ll::TypedStorage<8, 48, ::HashedString>     mCommand;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> mCommandVersion;
    ::ll::TypedStorage<8, 32, ::std::string>      mEvent;
    ::ll::TypedStorage<4, 4, float>               mTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationEvent& operator=(ActorAnimationEvent const&);
    ActorAnimationEvent(ActorAnimationEvent const&);
    ActorAnimationEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorAnimationEvent(
        float                time,
        ::std::string const& event,
        ::CurrentCmdVersion  commandVersion,
        ::MolangVersion      molangVersion
    );

    MCNAPI void fire(::RenderParams& renderParams, ::Actor* actor) const;

    MCNAPI ::ActorAnimationEvent& operator=(::ActorAnimationEvent&&);

    MCNAPI ~ActorAnimationEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(float time, ::std::string const& event, ::CurrentCmdVersion commandVersion, ::MolangVersion molangVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
