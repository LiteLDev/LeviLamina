#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/util/molang/ExpressionNode.h"

namespace ParticleSystem {

struct FlipBook {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::array<::ExpressionNode, 2>> mBaseUV;
    ::ll::TypedStorage<4, 8, ::Vec2>                             mSizeUV;
    ::ll::TypedStorage<4, 8, ::Vec2>                             mStepUV;
    ::ll::TypedStorage<4, 4, float>                              mFPS;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                  mMaxFrame;
    ::ll::TypedStorage<1, 1, bool>                               mStretchToLifetime;
    ::ll::TypedStorage<1, 1, bool>                               mLoop;
    // NOLINTEND
};

} // namespace ParticleSystem
