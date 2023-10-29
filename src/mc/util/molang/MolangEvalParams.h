#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"
#include "mc/util/molang/MolangVariableIndex.h"

struct MolangEvalParams {
public:
    // prevent constructor by default
    MolangEvalParams& operator=(MolangEvalParams const&);
    MolangEvalParams(MolangEvalParams const&);
    MolangEvalParams();

public:
    // NOLINTBEGIN
    // symbol: ?getActorFromArg@MolangEvalParams@@QEBAPEAVActor@@AEBUMolangScriptArg@@@Z
    MCAPI class Actor* getActorFromArg(struct MolangScriptArg const&) const;

    // symbol: ?getActorPtrFromPushedArray@MolangEvalParams@@QEBAPEAVActor@@_K0AEA_N@Z
    MCAPI class Actor* getActorPtrFromPushedArray(uint64, uint64, bool&) const;

    // symbol: ?popActor@MolangEvalParams@@QEAAPEAVActor@@XZ
    MCAPI class Actor* popActor();

    // symbol: ?popFloat@MolangEvalParams@@QEAAMXZ
    MCAPI float popFloat();

    // symbol: ?popHash@MolangEvalParams@@QEAA_KXZ
    MCAPI uint64 popHash();

    // symbol: ?popMissingVariableOrActorAddress@MolangEvalParams@@QEAA_KAEBVHashedString@@@Z
    MCAPI uint64 popMissingVariableOrActorAddress(class HashedString const&);

    // symbol: ?popMissingVariableOrActorAddress@MolangEvalParams@@QEAA_KW4MolangVariableIndex@@@Z
    MCAPI uint64 popMissingVariableOrActorAddress(::MolangVariableIndex);

    // symbol: ?popPublicAccessMode@MolangEvalParams@@QEAA_NXZ
    MCAPI bool popPublicAccessMode();

    // symbol: ?popRenderParamsCopyAndPtr@MolangEvalParams@@QEAAXXZ
    MCAPI void popRenderParamsCopyAndPtr();

    // symbol: ?pushLoopScope@MolangEvalParams@@QEAAX_K0@Z
    MCAPI void pushLoopScope(uint64, uint64);

    // symbol: ?pushRenderParams@MolangEvalParams@@QEAAXAEBVRenderParams@@@Z
    MCAPI void pushRenderParams(class RenderParams const&);

    // symbol: ?pushReturnValue@MolangEvalParams@@QEAAXXZ
    MCAPI void pushReturnValue();

    // symbol: ?pushValue@MolangEvalParams@@QEAAXM@Z
    MCAPI void pushValue(float);

    // symbol: ?renderParams@MolangEvalParams@@QEAAAEAVRenderParams@@XZ
    MCAPI class RenderParams& renderParams();

    // symbol: ?renderParams@MolangEvalParams@@QEBAAEBVRenderParams@@XZ
    MCAPI class RenderParams const& renderParams() const;

    // symbol: ?restoreAndPopStackState@MolangEvalParams@@QEAAXXZ
    MCAPI void restoreAndPopStackState();

    // symbol: ??1MolangEvalParams@@QEAA@XZ
    MCAPI ~MolangEvalParams();

    // symbol: ?getLocalThreadEvalParams@MolangEvalParams@@SAAEAU1@XZ
    MCAPI static struct MolangEvalParams& getLocalThreadEvalParams();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mThreadLocalMolangEvalParams@MolangEvalParams@@0V?$ThreadLocalObject@UMolangEvalParams@@V?$allocator@UMolangEvalParams@@@std@@@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::ThreadLocalObject<struct MolangEvalParams> mThreadLocalMolangEvalParams;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mThreadLocalMolangEvalParams() { return mThreadLocalMolangEvalParams; }

    // NOLINTEND
};
