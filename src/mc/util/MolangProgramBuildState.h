#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMolangInstruction;
// clang-format on

struct MolangProgramBuildState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mUsedRegCount;
    ::ll::TypedStorage<1, 1, bool>   mStoreStackState;
    ::ll::TypedStorage<1, 1, bool>   mShouldPreserveTreeAfterCompilation;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::IMolangInstruction>>> mDestProgram;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mExpressionString;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint64 allocateInstruction();

    MCNAPI void emplaceInstruction(::std::unique_ptr<::IMolangInstruction> instruction);

    MCNAPI void insertJumpWithMaddAtIndex(
        uint64 instructionIndexToPutThisInstruction,
        uint64 instructionToJumpTo,
        float  mulValue,
        float  addValue
    );

    MCNAPI uint64 numInstructions() const;

    MCNAPI void popForEachScope(uint64 instructionIndex);

    MCNAPI void popLoopScope(uint64 instructionIndex);

    MCNAPI void pushLoopScope(
        uint64 loopScopeInitializationInstructionIndex,
        uint64 loopRepeatLogicInstructionIndex,
        uint64 loopCleanupInstructionIndex,
        uint64 nextStatementIndex
    );

    MCNAPI void pushReturnValue();

    MCNAPI void setReturnValue(float value);

    MCNAPI ~MolangProgramBuildState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
