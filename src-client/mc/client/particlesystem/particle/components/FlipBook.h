#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct FlipBook; }
// clang-format on

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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initializeFromData(::SharedTypes::v1_20_80::FlipBook& data);

    MCAPI void upgradeToSharedTypes(::SharedTypes::v1_20_80::FlipBook& data);
    // NOLINTEND
};

} // namespace ParticleSystem
