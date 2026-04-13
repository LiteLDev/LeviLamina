#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"
#include "mc/util/MolangVariableMap.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HashedString;
class RenderParams;
struct MolangEvalStackState;
struct MolangScriptArg;
// clang-format on

struct MolangEvalParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                              mPC;
    ::ll::TypedStorage<8, 8, ::MolangScriptArg const*>          mRet;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>              mTempVariables;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>              mContextVariables;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>            mContinueIndexStack;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>            mBreakIndexStack;
    ::ll::TypedStorage<8, 24, ::std::vector<::MolangScriptArg>> mDataStack;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>            mMissingVariableOrActorIndexStack;
    ::ll::TypedStorage<8, 8, uint64>                            mPublicAccessModeStack;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::RenderParams*>>  mRenderParams;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Actor*
    getActorPtrFromPushedArray(uint64 arrayStackOffset, uint64 arrayElementOffset, bool& outOfElements) const;

    MCAPI ::Actor* popActor();

    MCAPI uint64 popMissingVariableOrActorAddress(::MolangVariableIndex variableIndex);

    MCAPI uint64 popMissingVariableOrActorAddress(::HashedString const& variableName);

    MCAPI void restoreStackState(::MolangEvalStackState&& state);

    MCAPI ~MolangEvalParams();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::RenderParams& mErrorRenderParams();

    MCAPI static ::MolangEvalParams& mThreadLocalMolangEvalParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
