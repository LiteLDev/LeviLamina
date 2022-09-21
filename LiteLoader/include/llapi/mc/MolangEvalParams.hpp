/**
 * @file  MC/MolangEvalParams.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure MolangEvalParams.
 *
 */
struct MolangEvalParams {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGEVALPARAMS
public:
    struct MolangEvalParams& operator=(struct MolangEvalParams const &) = delete;
    MolangEvalParams(struct MolangEvalParams const &) = delete;
    MolangEvalParams() = delete;
#endif

public:
    /**
     * @hash   -1478825304
     * @symbol ?getActorFromArg@MolangEvalParams@@QEBAPEAVActor@@AEBUMolangScriptArg@@@Z
     */
    MCAPI class Actor * getActorFromArg(struct MolangScriptArg const &) const;
    /**
     * @hash   -1367758589
     * @symbol ?getActorPtrFromPushedArray@MolangEvalParams@@QEBAPEAVActor@@_K0AEA_N@Z
     */
    MCAPI class Actor * getActorPtrFromPushedArray(unsigned __int64, unsigned __int64, bool &) const;
    /**
     * @hash   -898799061
     * @symbol ?popActor@MolangEvalParams@@QEAAPEAVActor@@XZ
     */
    MCAPI class Actor * popActor();
    /**
     * @hash   -279750552
     * @symbol ?popFloat@MolangEvalParams@@QEAAMXZ
     */
    MCAPI float popFloat();
    /**
     * @hash   -649848555
     * @symbol ?popHash@MolangEvalParams@@QEAA_KXZ
     */
    MCAPI unsigned __int64 popHash();
    /**
     * @hash   541937806
     * @symbol ?popMissingVariableOrActorAddress@MolangEvalParams@@QEAA_KAEBVHashedString@@@Z
     */
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(class HashedString const &);
    /**
     * @hash   32451124
     * @symbol ?popMissingVariableOrActorAddress@MolangEvalParams@@QEAA_KW4MolangVariableIndex@@@Z
     */
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(enum MolangVariableIndex);
    /**
     * @hash   1317780014
     * @symbol ?popPublicAccessMode@MolangEvalParams@@QEAA_NXZ
     */
    MCAPI bool popPublicAccessMode();
    /**
     * @hash   -1753685981
     * @symbol ?popRenderParamsCopyAndPtr@MolangEvalParams@@QEAAXXZ
     */
    MCAPI void popRenderParamsCopyAndPtr();
    /**
     * @hash   450770969
     * @symbol ?pushLoopScope@MolangEvalParams@@QEAAX_K0@Z
     */
    MCAPI void pushLoopScope(unsigned __int64, unsigned __int64);
    /**
     * @hash   -1487935846
     * @symbol ?pushRenderParams@MolangEvalParams@@QEAAXAEBVRenderParams@@@Z
     */
    MCAPI void pushRenderParams(class RenderParams const &);
    /**
     * @hash   -151850957
     * @symbol ?pushReturnValue@MolangEvalParams@@QEAAXXZ
     */
    MCAPI void pushReturnValue();
    /**
     * @hash   -2087878890
     * @symbol ?pushValue@MolangEvalParams@@QEAAXM@Z
     */
    MCAPI void pushValue(float);
    /**
     * @hash   -1885975640
     * @symbol ?renderParams@MolangEvalParams@@QEAAAEAVRenderParams@@XZ
     */
    MCAPI class RenderParams & renderParams();
    /**
     * @hash   374549862
     * @symbol ?renderParams@MolangEvalParams@@QEBAAEBVRenderParams@@XZ
     */
    MCAPI class RenderParams const & renderParams() const;
    /**
     * @hash   1652354659
     * @symbol ?restoreAndPopStackState@MolangEvalParams@@QEAAXXZ
     */
    MCAPI void restoreAndPopStackState();
    /**
     * @hash   -503752628
     * @symbol ??1MolangEvalParams@@QEAA@XZ
     */
    MCAPI ~MolangEvalParams();
    /**
     * @hash   -1262083503
     * @symbol ?getLocalThreadEvalParams@MolangEvalParams@@SAAEAU1@XZ
     */
    MCAPI static struct MolangEvalParams & getLocalThreadEvalParams();

//private:

};