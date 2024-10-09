#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/ThreadLocalObject.h"
#include "mc/util/MolangVariableIndex.h"

struct MolangEvalParams {
public:
    // prevent constructor by default
    MolangEvalParams& operator=(MolangEvalParams const&);
    MolangEvalParams(MolangEvalParams const&);
    MolangEvalParams();

public:
    // NOLINTBEGIN
    MCAPI class Actor* getActorFromArg(struct MolangScriptArg const& arg) const;

    MCAPI class Actor*
    getActorPtrFromPushedArray(uint64 arrayStackOffset, uint64 arrayElementOffset, bool& outOfElements) const;

    MCAPI class Actor* popActor();

    MCAPI float popFloat();

    MCAPI uint64 popHash();

    MCAPI uint64 popMissingVariableOrActorAddress(class HashedString const& variableName);

    MCAPI uint64 popMissingVariableOrActorAddress(::MolangVariableIndex variableIndex);

    MCAPI bool popPublicAccessMode();

    MCAPI void popRenderParamsCopyAndPtr();

    MCAPI void pushLoopScope(uint64 loopRepeatLogicInstructionIndex, uint64 loopCleanupStatementInstructionIndex);

    MCAPI void pushRenderParams(class RenderParams const& rhs);

    MCAPI void pushReturnValue();

    MCAPI void pushValue(float value);

    MCAPI class RenderParams& renderParams();

    MCAPI class RenderParams const& renderParams() const;

    MCAPI void restoreAndPopStackState();

    MCAPI void setPushedValue(float);

    MCAPI void setReturnValue(float);

    MCAPI ~MolangEvalParams();

    MCAPI static struct MolangEvalParams& getLocalThreadEvalParams();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class Bedrock::Threading::ThreadLocalObject<struct MolangEvalParams> mThreadLocalMolangEvalParams;

    // NOLINTEND
};
