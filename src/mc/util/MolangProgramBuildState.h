#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangProgramBuildState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6d7665;
    ::ll::UntypedStorage<1, 1>  mUnk4f5f68;
    ::ll::UntypedStorage<8, 24> mUnk36b9d4;
    ::ll::UntypedStorage<8, 32> mUnk4e3b47;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangProgramBuildState& operator=(MolangProgramBuildState const&);
    MolangProgramBuildState(MolangProgramBuildState const&);
    MolangProgramBuildState();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint64 allocateInstruction();

    MCAPI void insertJumpWithMaddAtIndex(
        uint64 instructionIndexToPutThisInstruction,
        uint64 instructionToJumpTo,
        float  mulValue,
        float  addValue
    );

    MCAPI uint64 numInstructions() const;

    MCAPI void popForEachScope(uint64 instructionIndex);

    MCAPI void popLoopScope(uint64 instructionIndex);

    MCAPI void pushLoopScope(
        uint64 loopScopeInitializationInstructionIndex,
        uint64 loopRepeatLogicInstructionIndex,
        uint64 loopCleanupInstructionIndex,
        uint64 nextStatementIndex
    );

    MCAPI void pushReturnValue();

    MCAPI void pushValue(float value);

    MCAPI void setReturnValue(float value);

    MCAPI ~MolangProgramBuildState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
