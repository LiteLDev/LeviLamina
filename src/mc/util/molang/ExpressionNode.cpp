#include "mc/util/molang/ExpressionNode.h"

#include "ll/api/memory/Symbol.h"
#include "mc/util/MolangQueryFunction.h"
#include "mc/world/actor/RenderParams.h"
#include "mc/world/level/storage/AllExperiments.h"
#include "mc/world/level/storage/Experiments.h"

using ll::memory_literals::operator""_sym;

MolangScriptArg const& ExpressionNode::evalGeneric(RenderParams& renderParams) const {
    if (auto const& impl = std::get<0>(*mImpl)) return impl->evalGeneric(renderParams);

    if (mImpl->index() == 1) {
        // MolangScriptArg::_setPOD
        renderParams.mScratchValue->mType            = MolangScriptArgType::Unset;
        renderParams.mScratchValue->mPOD.mHashType64 = 0;
        renderParams.mScratchValue->mPOD.mFloat      = std::get<1>(*mImpl);

        return renderParams.mScratchValue;
    }

    return MolangScriptArg::mDefaultReturnValue_float0();
}

std::function<MolangScriptArg const&(RenderParams&, std::vector<ExpressionNode> const&)> const*
ExpressionNode::queryFunctionAccessorFromString(
    HashedString const&            functionName,
    MolangVersion                  molangVersion,
    MolangQueryFunctionReturnType& functionReturnType,
    bool                           missingIsOkay_returnNullIfSo
) {
    functionReturnType = MolangQueryFunctionReturnType::Float;

    auto& queryFunctions = ExpressionNode::mQueryFunctionAccessors();

    auto const [first, last] = queryFunctions.equal_range(functionName);

    for (auto it = first; it != last; ++it) {
        auto const& queryFunction = it->second;

        if (molangVersion < queryFunction.mFirstAvailableMolangVersion
            || molangVersion > queryFunction.mLastAvailableMolangVersion) {
            continue;
        }

        bool experimentsEnabled = true;

        if (!queryFunction.mExperiments->empty()) {
#ifdef LL_PLAT_C
            auto experiments =
                (Experiments*)"?mExperiments@ExpressionNodeAnon@?A0x10A4F501@@3VExperimentStorage@@A.llvm.10811897775780657989"_sym
                    .resolve();
#else
            auto experiments =
                (Experiments*)"?mExperiments@ExpressionNodeAnon@?A0x42C71F9@@3VExperimentStorage@@A.llvm.1039915497221347259"_sym
                    .resolve();
#endif

            for (auto const experiment : queryFunction.mExperiments.get()) {
                if (!experiments->isExperimentEnabled(static_cast<AllExperiments>(experiment))) {
                    experimentsEnabled = false;
                    break;
                }
            }
        }

        if (!experimentsEnabled) {
            continue;
        }

        functionReturnType = queryFunction.mFunctionReturnType;

        return &queryFunction.mAccessor.get();
    }

    if (missingIsOkay_returnNullIfSo) {
        return nullptr;
    }

    return &ExpressionNode::_defaultUnknownQueryFunction();
}
