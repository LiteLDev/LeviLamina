#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HashedString;
class RenderParams;
struct MolangEvalStackState;
// clang-format on

struct MolangEvalParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8afdb8;
    ::ll::UntypedStorage<8, 8>  mUnk90ada9;
    ::ll::UntypedStorage<8, 56> mUnkaafdf8;
    ::ll::UntypedStorage<8, 56> mUnkca0934;
    ::ll::UntypedStorage<8, 24> mUnkaee104;
    ::ll::UntypedStorage<8, 24> mUnke3c715;
    ::ll::UntypedStorage<8, 24> mUnkaed887;
    ::ll::UntypedStorage<8, 24> mUnk42ab10;
    ::ll::UntypedStorage<8, 8>  mUnk6fdf61;
    ::ll::UntypedStorage<8, 8>  mUnk3b133b;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangEvalParams& operator=(MolangEvalParams const&);
    MolangEvalParams(MolangEvalParams const&);
    MolangEvalParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Actor* popActor();

    MCNAPI uint64 popMissingVariableOrActorAddress(::MolangVariableIndex variableIndex);

    MCNAPI uint64 popMissingVariableOrActorAddress(::HashedString const& variableName);

    MCNAPI bool popPublicAccessMode();

    MCNAPI void restoreStackState(::MolangEvalStackState&& state);

    MCNAPI ~MolangEvalParams();
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
    MCNAPI void $dtor();
    // NOLINTEND
};
