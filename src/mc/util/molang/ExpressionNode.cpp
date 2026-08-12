#include "mc/util/molang/ExpressionNode.h"

#include "mc/world/actor/RenderParams.h"

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
