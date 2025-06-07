#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Molang::details { class IInstruction; }
namespace Molang::details { class Program; }
// clang-format on

namespace Molang::details {

struct MolangProgramBuildState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9b2202;
    ::ll::UntypedStorage<1, 1>  mUnkae9e01;
    ::ll::UntypedStorage<8, 24> mUnk15adb4;
    ::ll::UntypedStorage<8, 32> mUnk2afa3d;
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

    MCNAPI void emplaceInstruction(::std::unique_ptr<::Molang::details::IInstruction> instruction);

    MCNAPI ::Molang::details::Program extractProgram();

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

    MCNAPI void pushValue(float value);

    MCNAPI void setReturnValue(float value);

    MCNAPI ~MolangProgramBuildState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
