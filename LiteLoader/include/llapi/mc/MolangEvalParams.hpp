/**
 * @file  MolangEvalParams.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Bedrock.hpp"

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
     * @hash   1766914504
     * @symbol  ?getActorFromArg\@MolangEvalParams\@\@QEBAPEAVActor\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI class Actor * getActorFromArg(struct MolangScriptArg const &) const;
    /**
     * @hash   1877996595
     * @symbol  ?getActorPtrFromPushedArray\@MolangEvalParams\@\@QEBAPEAVActor\@\@_K0AEA_N\@Z
     */
    MCAPI class Actor * getActorPtrFromPushedArray(unsigned __int64, unsigned __int64, bool &) const;
    /**
     * @hash   -1609908309
     * @symbol  ?popActor\@MolangEvalParams\@\@QEAAPEAVActor\@\@XZ
     */
    MCAPI class Actor * popActor();
    /**
     * @hash   -990859800
     * @symbol  ?popFloat\@MolangEvalParams\@\@QEAAMXZ
     */
    MCAPI float popFloat();
    /**
     * @hash   -1361003931
     * @symbol  ?popHash\@MolangEvalParams\@\@QEAA_KXZ
     */
    MCAPI unsigned __int64 popHash();
    /**
     * @hash   -507258930
     * @symbol  ?popMissingVariableOrActorAddress\@MolangEvalParams\@\@QEAA_KAEBVHashedString\@\@\@Z
     */
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(class HashedString const &);
    /**
     * @hash   -1016745612
     * @symbol  ?popMissingVariableOrActorAddress\@MolangEvalParams\@\@QEAA_KW4MolangVariableIndex\@\@\@Z
     */
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(enum class MolangVariableIndex);
    /**
     * @hash   606578510
     * @symbol  ?popPublicAccessMode\@MolangEvalParams\@\@QEAA_NXZ
     */
    MCAPI bool popPublicAccessMode();
    /**
     * @hash   1830079811
     * @symbol  ?popRenderParamsCopyAndPtr\@MolangEvalParams\@\@QEAAXXZ
     */
    MCAPI void popRenderParamsCopyAndPtr();
    /**
     * @hash   -260615047
     * @symbol  ?pushLoopScope\@MolangEvalParams\@\@QEAAX_K0\@Z
     */
    MCAPI void pushLoopScope(unsigned __int64, unsigned __int64);
    /**
     * @hash   2095537802
     * @symbol  ?pushRenderParams\@MolangEvalParams\@\@QEAAXAEBVRenderParams\@\@\@Z
     */
    MCAPI void pushRenderParams(class RenderParams const &);
    /**
     * @hash   -863344605
     * @symbol  ?pushReturnValue\@MolangEvalParams\@\@QEAAXXZ
     */
    MCAPI void pushReturnValue();
    /**
     * @hash   1495594758
     * @symbol  ?pushValue\@MolangEvalParams\@\@QEAAXM\@Z
     */
    MCAPI void pushValue(float);
    /**
     * @hash   1697651768
     * @symbol  ?renderParams\@MolangEvalParams\@\@QEAAAEAVRenderParams\@\@XZ
     */
    MCAPI class RenderParams & renderParams();
    /**
     * @hash   -674646874
     * @symbol  ?renderParams\@MolangEvalParams\@\@QEBAAEBVRenderParams\@\@XZ
     */
    MCAPI class RenderParams const & renderParams() const;
    /**
     * @hash   940491987
     * @symbol  ?restoreAndPopStackState\@MolangEvalParams\@\@QEAAXXZ
     */
    MCAPI void restoreAndPopStackState();
    /**
     * @hash   -1552980116
     * @symbol  ??1MolangEvalParams\@\@QEAA\@XZ
     */
    MCAPI ~MolangEvalParams();
    /**
     * @hash   -1974530463
     * @symbol  ?getLocalThreadEvalParams\@MolangEvalParams\@\@SAAEAU1\@XZ
     */
    MCAPI static struct MolangEvalParams & getLocalThreadEvalParams();

//private:

};