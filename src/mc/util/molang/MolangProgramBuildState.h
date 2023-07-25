#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangProgramBuildState {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGPROGRAMBUILDSTATE
public:
    MolangProgramBuildState& operator=(MolangProgramBuildState const&) = delete;
    MolangProgramBuildState(MolangProgramBuildState const&)            = delete;
    MolangProgramBuildState()                                          = delete;
#endif

public:
    /**
     * @symbol ?allocateInstruction\@MolangProgramBuildState\@\@QEAA_KXZ
     */
    MCAPI unsigned __int64 allocateInstruction();
    /**
     * @symbol
     * ?emplaceInstruction\@MolangProgramBuildState\@\@QEAAX_KV?$function\@$$A6AXAEAUMolangEvalParams\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void emplaceInstruction(unsigned __int64, class std::function<void(struct MolangEvalParams&)>);
    /**
     * @symbol
     * ?emplaceInstruction\@MolangProgramBuildState\@\@QEAAXV?$function\@$$A6AXAEAUMolangEvalParams\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void emplaceInstruction(class std::function<void(struct MolangEvalParams&)>);
    /**
     * @symbol ?insertJumpWithMaddAtIndex\@MolangProgramBuildState\@\@QEAAX_K0MM\@Z
     */
    MCAPI void insertJumpWithMaddAtIndex(unsigned __int64, unsigned __int64, float, float);
    /**
     * @symbol ?numInstructions\@MolangProgramBuildState\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 numInstructions() const;
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
};
