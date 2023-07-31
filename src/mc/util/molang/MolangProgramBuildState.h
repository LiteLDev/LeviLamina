#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangProgramBuildState {

public:
    // prevent constructor by default
    MolangProgramBuildState& operator=(MolangProgramBuildState const&) = delete;
    MolangProgramBuildState(MolangProgramBuildState const&)            = delete;
    MolangProgramBuildState()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?allocateInstruction\@MolangProgramBuildState\@\@QEAA_KXZ
     */
    MCAPI uint64_t allocateInstruction();
    /**
     * @symbol
     * ?emplaceInstruction\@MolangProgramBuildState\@\@QEAAX_KV?$function\@$$A6AXAEAUMolangEvalParams\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void emplaceInstruction(uint64_t, std::function<void(struct MolangEvalParams&)>);
    /**
     * @symbol
     * ?emplaceInstruction\@MolangProgramBuildState\@\@QEAAXV?$function\@$$A6AXAEAUMolangEvalParams\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void emplaceInstruction(std::function<void(struct MolangEvalParams&)>);
    /**
     * @symbol ?insertJumpWithMaddAtIndex\@MolangProgramBuildState\@\@QEAAX_K0MM\@Z
     */
    MCAPI void insertJumpWithMaddAtIndex(uint64_t, uint64_t, float, float);
    /**
     * @symbol ?numInstructions\@MolangProgramBuildState\@\@QEBA_KXZ
     */
    MCAPI uint64_t numInstructions() const;
    /**
     * @symbol ?pushReturnValue\@MolangProgramBuildState\@\@QEAAXXZ
     */
    MCAPI void pushReturnValue();
    /**
     * @symbol ?setReturnValue\@MolangProgramBuildState\@\@QEAAXM\@Z
     */
    MCAPI void setReturnValue(float);
    /**
     * @symbol ??1MolangProgramBuildState\@\@QEAA\@XZ
     */
    MCAPI ~MolangProgramBuildState();
    // NOLINTEND
};
