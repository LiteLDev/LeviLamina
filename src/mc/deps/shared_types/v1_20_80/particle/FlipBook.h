#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

namespace SharedTypes::v1_20_80 {

struct FlipBook {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::std::array<::SharedTypes::Legacy::ExpressionNode, 2>> mBaseUVExpr;
    ::ll::TypedStorage<4, 8, ::std::array<float, 2>>                                  mSizeUV;
    ::ll::TypedStorage<4, 8, ::std::array<float, 2>>                                  mStepUV;
    ::ll::TypedStorage<4, 4, float>                                                   mFPS;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                  mMaxFrame;
    ::ll::TypedStorage<1, 1, bool>                                                    mStretchToLifetime;
    ::ll::TypedStorage<1, 1, bool>                                                    mLoop;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~FlipBook();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
