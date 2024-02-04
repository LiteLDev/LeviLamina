#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/ExpressionNode.h"
#include "mc/util/molang/MolangScriptArg.h"

class RenderParams;

using QueryFunctionAccessor = std::function<MolangScriptArg const&(RenderParams&, std::vector<ExpressionNode> const&)>;

struct MolangQueryFunction {
public:
    // prevent constructor by default
    MolangQueryFunction& operator=(MolangQueryFunction const&);
    MolangQueryFunction(MolangQueryFunction const&);
    MolangQueryFunction();


    QueryFunctionAccessor         mAccessor;                    // this+0x0
    std::string                   mDocumentation;               // this+0x40
    size_t                        mMinArgumentCount;            // this+0x60
    size_t                        mMaxArgumentCount;            // this+0x68
    std::vector<int>              mExperiments;                 // this+0x70
    MolangQueryFunctionReturnType mFunctionReturnType;          // this+0x88
    MolangVersion                 mFirstAvailableMolangVersion; // this+0x90
    MolangVersion                 mLastAvailableMolangVersion;  // this+0x94

public:
    // NOLINTBEGIN
    // symbol: ??1MolangQueryFunction@@QEAA@XZ
    MCAPI ~MolangQueryFunction();

    // NOLINTEND
};
