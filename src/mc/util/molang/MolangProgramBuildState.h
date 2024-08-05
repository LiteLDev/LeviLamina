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
    MCAPI uint64 allocateInstruction();

    MCAPI void emplaceInstruction(std::function<void(struct MolangEvalParams&)> instruction);

    MCAPI void emplaceInstruction(uint64 index, std::function<void(struct MolangEvalParams&)> instruction);

    MCAPI void pushReturnValue();

    MCAPI void setReturnValue(float value);

    MCAPI ~MolangProgramBuildState();

    // NOLINTEND
};
