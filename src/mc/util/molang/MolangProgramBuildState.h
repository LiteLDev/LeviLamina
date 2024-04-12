#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangProgramBuildState {
public:
    // prevent constructor by default
    MolangProgramBuildState& operator=(MolangProgramBuildState const&);
    MolangProgramBuildState(MolangProgramBuildState const&);
    MolangProgramBuildState();

public:
    // NOLINTBEGIN
    // symbol: ?allocateInstruction@MolangProgramBuildState@@QEAA_KXZ
    MCAPI uint64 allocateInstruction();

    // symbol: ?emplaceInstruction@MolangProgramBuildState@@QEAAXV?$function@$$A6AXAEAUMolangEvalParams@@@Z@std@@@Z
    MCAPI void emplaceInstruction(std::function<void(struct MolangEvalParams&)> instruction);

    // symbol: ?emplaceInstruction@MolangProgramBuildState@@QEAAX_KV?$function@$$A6AXAEAUMolangEvalParams@@@Z@std@@@Z
    MCAPI void emplaceInstruction(uint64 index, std::function<void(struct MolangEvalParams&)> instruction);

    // symbol: ?insertJumpWithMaddAtIndex@MolangProgramBuildState@@QEAAX_K0MM@Z
    MCAPI void insertJumpWithMaddAtIndex(
        uint64 instructionIndexToPutThisInstruction,
        uint64 instructionToJumpTo,
        float  mulValue,
        float  addValue
    );

    // symbol: ?numInstructions@MolangProgramBuildState@@QEBA_KXZ
    MCAPI uint64 numInstructions() const;

    // symbol: ?popForEachScope@MolangProgramBuildState@@QEAAX_K@Z
    MCAPI void popForEachScope(uint64 instructionIndex);

    // symbol: ?pushReturnValue@MolangProgramBuildState@@QEAAXXZ
    MCAPI void pushReturnValue();

    // symbol: ?setReturnValue@MolangProgramBuildState@@QEAAXM@Z
    MCAPI void setReturnValue(float value);

    // symbol: ??1MolangProgramBuildState@@QEAA@XZ
    MCAPI ~MolangProgramBuildState();

    // NOLINTEND
};
