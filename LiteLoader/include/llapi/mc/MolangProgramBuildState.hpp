/**
 * @file  MolangProgramBuildState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure MolangProgramBuildState.
 *
 */
struct MolangProgramBuildState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGPROGRAMBUILDSTATE
public:
    struct MolangProgramBuildState& operator=(struct MolangProgramBuildState const &) = delete;
    MolangProgramBuildState(struct MolangProgramBuildState const &) = delete;
    MolangProgramBuildState() = delete;
#endif

public:
    /**
     * @hash   -349577077
     * @symbol ?allocateInstruction@MolangProgramBuildState@@QEAA_KXZ
     */
    MCAPI unsigned __int64 allocateInstruction();
    /**
     * @hash   -732596627
     * @symbol ?emplaceInstruction@MolangProgramBuildState@@QEAAXV?$function@$$A6AXAEAUMolangEvalParams@@@Z@std@@@Z
     */
    MCAPI void emplaceInstruction(class std::function<void (struct MolangEvalParams &)>);
    /**
     * @hash   401146361
     * @symbol ?emplaceInstruction@MolangProgramBuildState@@QEAAX_KV?$function@$$A6AXAEAUMolangEvalParams@@@Z@std@@@Z
     */
    MCAPI void emplaceInstruction(unsigned __int64, class std::function<void (struct MolangEvalParams &)>);
    /**
     * @hash   -273555599
     * @symbol ?insertJumpWithMaddAtIndex@MolangProgramBuildState@@QEAAX_K0MM@Z
     */
    MCAPI void insertJumpWithMaddAtIndex(unsigned __int64, unsigned __int64, float, float);
    /**
     * @hash   750617579
     * @symbol ?numInstructions@MolangProgramBuildState@@QEBA_KXZ
     */
    MCAPI unsigned __int64 numInstructions() const;
    /**
     * @hash   -2101896877
     * @symbol ?pushReturnValue@MolangProgramBuildState@@QEAAXXZ
     */
    MCAPI void pushReturnValue();
    /**
     * @hash   2042830824
     * @symbol ?setReturnValue@MolangProgramBuildState@@QEAAXM@Z
     */
    MCAPI void setReturnValue(float);
    /**
     * @hash   586280083
     * @symbol ??1MolangProgramBuildState@@QEAA@XZ
     */
    MCAPI ~MolangProgramBuildState();

};