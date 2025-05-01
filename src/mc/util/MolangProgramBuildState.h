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
    ::ll::UntypedStorage<8, 8>  mUnk6d7665;
    ::ll::UntypedStorage<1, 1>  mUnk4f5f68;
    ::ll::UntypedStorage<1, 1>  mUnk9e9a91;
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
