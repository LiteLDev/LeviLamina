#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Molang::details { class IInstruction; }
namespace brstd { struct source_location; }
// clang-format on

namespace Molang::details {

struct MolangProgramBuildState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9b2202;
    ::ll::UntypedStorage<1, 1>  mUnkae9e01;
    ::ll::UntypedStorage<8, 24> mUnk15adb4;
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

    MCNAPI void insertJumpWithMaddAtIndex(
        uint64                   instructionIndexToPutThisInstruction,
        uint64                   instructionToJumpTo,
        float                    mulValue,
        float                    addValue,
        ::brstd::source_location source
    );

    MCNAPI void popForEachScope(uint64 instructionIndex);

    MCNAPI void popLoopScope(uint64 instructionIndex);

    MCNAPI void pushLoopScope(
        uint64                   loopScopeInitializationInstructionIndex,
        uint64                   loopRepeatLogicInstructionIndex,
        uint64                   loopCleanupInstructionIndex,
        uint64                   nextStatementIndex,
        ::brstd::source_location source
    );

    MCNAPI void pushReturnValue(::brstd::source_location source);

    MCNAPI void setReturnValue(float value, ::brstd::source_location source);

    MCNAPI ~MolangProgramBuildState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Molang::details
