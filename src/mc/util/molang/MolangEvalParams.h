#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"

struct MolangEvalParams {

public:
    // prevent constructor by default
    MolangEvalParams& operator=(MolangEvalParams const&) = delete;
    MolangEvalParams(MolangEvalParams const&)            = delete;
    MolangEvalParams()                                   = delete;

public:
    /**
     * @symbol ?getActorFromArg\@MolangEvalParams\@\@QEBAPEAVActor\@\@AEBUMolangScriptArg\@\@\@Z
     */
    MCAPI class Actor* getActorFromArg(struct MolangScriptArg const&) const; // NOLINT
    /**
     * @symbol ?getActorPtrFromPushedArray\@MolangEvalParams\@\@QEBAPEAVActor\@\@_K0AEA_N\@Z
     */
    MCAPI class Actor* getActorPtrFromPushedArray(unsigned __int64, unsigned __int64, bool&) const; // NOLINT
    /**
     * @symbol ?popActor\@MolangEvalParams\@\@QEAAPEAVActor\@\@XZ
     */
    MCAPI class Actor* popActor(); // NOLINT
    /**
     * @symbol ?popFloat\@MolangEvalParams\@\@QEAAMXZ
     */
    MCAPI float popFloat(); // NOLINT
    /**
     * @symbol ?popHash\@MolangEvalParams\@\@QEAA_KXZ
     */
    MCAPI unsigned __int64 popHash(); // NOLINT
    /**
     * @symbol ?popMissingVariableOrActorAddress\@MolangEvalParams\@\@QEAA_KW4MolangVariableIndex\@\@\@Z
     */
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(enum class MolangVariableIndex); // NOLINT
    /**
     * @symbol ?popMissingVariableOrActorAddress\@MolangEvalParams\@\@QEAA_KAEBVHashedString\@\@\@Z
     */
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(class HashedString const&); // NOLINT
    /**
     * @symbol ?popPublicAccessMode\@MolangEvalParams\@\@QEAA_NXZ
     */
    MCAPI bool popPublicAccessMode(); // NOLINT
    /**
     * @symbol ?popRenderParamsCopyAndPtr\@MolangEvalParams\@\@QEAAXXZ
     */
    MCAPI void popRenderParamsCopyAndPtr(); // NOLINT
    /**
     * @symbol ?pushLoopScope\@MolangEvalParams\@\@QEAAX_K0\@Z
     */
    MCAPI void pushLoopScope(unsigned __int64, unsigned __int64); // NOLINT
    /**
     * @symbol ?pushRenderParams\@MolangEvalParams\@\@QEAAXAEBVRenderParams\@\@\@Z
     */
    MCAPI void pushRenderParams(class RenderParams const&); // NOLINT
    /**
     * @symbol ?pushReturnValue\@MolangEvalParams\@\@QEAAXXZ
     */
    MCAPI void pushReturnValue(); // NOLINT
    /**
     * @symbol ?pushValue\@MolangEvalParams\@\@QEAAXM\@Z
     */
    MCAPI void pushValue(float); // NOLINT
    /**
     * @symbol ?renderParams\@MolangEvalParams\@\@QEAAAEAVRenderParams\@\@XZ
     */
    MCAPI class RenderParams& renderParams(); // NOLINT
    /**
     * @symbol ?renderParams\@MolangEvalParams\@\@QEBAAEBVRenderParams\@\@XZ
     */
    MCAPI class RenderParams const& renderParams() const; // NOLINT
    /**
     * @symbol ?restoreAndPopStackState\@MolangEvalParams\@\@QEAAXXZ
     */
    MCAPI void restoreAndPopStackState(); // NOLINT
    /**
     * @symbol ??1MolangEvalParams\@\@QEAA\@XZ
     */
    MCAPI ~MolangEvalParams(); // NOLINT
    /**
     * @symbol ?getLocalThreadEvalParams\@MolangEvalParams\@\@SAAEAU1\@XZ
     */
    MCAPI static struct MolangEvalParams& getLocalThreadEvalParams(); // NOLINT

    // private:
};
