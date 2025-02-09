#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ExpressionNode;
class HashedString;
class RenderParams;
// clang-format on

class ActorAnimationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 216, ::ExpressionNode>  mExpression;
    ::ll::TypedStorage<8, 48, ::HashedString>     mCommand;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> mCommandVersion;
    ::ll::TypedStorage<8, 32, ::std::string>      mEvent;
    ::ll::TypedStorage<4, 4, float>               mTime;
    // NOLINTEND

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
