#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangProgramBuildState {

public:
    // prevent constructor by default
    MolangProgramBuildState& operator=(MolangProgramBuildState const&) = delete;
    MolangProgramBuildState(MolangProgramBuildState const&)            = delete;
    MolangProgramBuildState()                                          = delete;

public:
    /**
     * @symbol ?allocateInstruction\@MolangProgramBuildState\@\@QEAA_KXZ
     */
    MCAPI unsigned __int64 allocateInstruction(); // NOLINT
    /**
     * @symbol
     * ?emplaceInstruction\@MolangProgramBuildState\@\@QEAAX_KV?$function\@$$A6AXAEAUMolangEvalParams\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void emplaceInstruction(unsigned __int64, class std::function<void(struct MolangEvalParams&)>); // NOLINT
    /**
     * @symbol
     * ?emplaceInstruction\@MolangProgramBuildState\@\@QEAAXV?$function\@$$A6AXAEAUMolangEvalParams\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void emplaceInstruction(class std::function<void(struct MolangEvalParams&)>); // NOLINT
    /**
     * @symbol ?insertJumpWithMaddAtIndex\@MolangProgramBuildState\@\@QEAAX_K0MM\@Z
     */
    MCAPI void insertJumpWithMaddAtIndex(unsigned __int64, unsigned __int64, float, float); // NOLINT
    /**
     * @symbol ?numInstructions\@MolangProgramBuildState\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 numInstructions() const; // NOLINT
    /**
     * @symbol ?pushReturnValue\@MolangProgramBuildState\@\@QEAAXXZ
     */
    MCAPI void pushReturnValue(); // NOLINT
    /**
     * @symbol ?setReturnValue\@MolangProgramBuildState\@\@QEAAXM\@Z
     */
    MCAPI void setReturnValue(float); // NOLINT
    /**
     * @symbol ??1MolangProgramBuildState\@\@QEAA\@XZ
     */
    MCAPI ~MolangProgramBuildState(); // NOLINT
};
