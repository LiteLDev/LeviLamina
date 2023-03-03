/**
 * @file  MolangEvalParams.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  ?getActorFromArg\@MolangEvalParams\@\@QEBAPEAVActor\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI class Actor * getActorFromArg(struct MolangScriptArg const &) const;
    /**
     * @symbol  ?getActorPtrFromPushedArray\@MolangEvalParams\@\@QEBAPEAVActor\@\@_K0AEA_N\@Z
     */
    MCAPI class Actor * getActorPtrFromPushedArray(unsigned __int64, unsigned __int64, bool &) const;
    /**
     * @symbol  ?popActor\@MolangEvalParams\@\@QEAAPEAVActor\@\@XZ
     */
    MCAPI class Actor * popActor();
    /**
     * @symbol  ?popFloat\@MolangEvalParams\@\@QEAAMXZ
     */
    MCAPI float popFloat();
    /**
     * @symbol  ?popHash\@MolangEvalParams\@\@QEAA_KXZ
     */
    MCAPI unsigned __int64 popHash();
    /**
     * @symbol  ?popMissingVariableOrActorAddress\@MolangEvalParams\@\@QEAA_KAEBVHashedString\@\@\@Z
     */
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(class HashedString const &);
    /**
     * @symbol  ?popMissingVariableOrActorAddress\@MolangEvalParams\@\@QEAA_KW4MolangVariableIndex\@\@\@Z
     */
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(enum class MolangVariableIndex);
    /**
     * @symbol  ?popPublicAccessMode\@MolangEvalParams\@\@QEAA_NXZ
     */
    MCAPI bool popPublicAccessMode();
    /**
     * @symbol  ?popRenderParamsCopyAndPtr\@MolangEvalParams\@\@QEAAXXZ
     */
    MCAPI void popRenderParamsCopyAndPtr();
    /**
     * @symbol  ?pushLoopScope\@MolangEvalParams\@\@QEAAX_K0\@Z
     */
    MCAPI void pushLoopScope(unsigned __int64, unsigned __int64);
    /**
     * @symbol  ?pushRenderParams\@MolangEvalParams\@\@QEAAXAEBVRenderParams\@\@\@Z
     */
    MCAPI void pushRenderParams(class RenderParams const &);
    /**
     * @symbol  ?pushReturnValue\@MolangEvalParams\@\@QEAAXXZ
     */
    MCAPI void pushReturnValue();
    /**
     * @symbol  ?pushValue\@MolangEvalParams\@\@QEAAXM\@Z
     */
    MCAPI void pushValue(float);
    /**
     * @symbol  ?renderParams\@MolangEvalParams\@\@QEAAAEAVRenderParams\@\@XZ
     */
    MCAPI class RenderParams & renderParams();
    /**
     * @symbol  ?renderParams\@MolangEvalParams\@\@QEBAAEBVRenderParams\@\@XZ
     */
    MCAPI class RenderParams const & renderParams() const;
    /**
     * @symbol  ?restoreAndPopStackState\@MolangEvalParams\@\@QEAAXXZ
     */
    MCAPI void restoreAndPopStackState();
    /**
     * @symbol  ??1MolangEvalParams\@\@QEAA\@XZ
     */
    MCAPI ~MolangEvalParams();
    /**
     * @symbol  ?getLocalThreadEvalParams\@MolangEvalParams\@\@SAAEAU1\@XZ
     */
    MCAPI static struct MolangEvalParams & getLocalThreadEvalParams();

//private:

};