#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    // prevent constructor by default
    FlipBook();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlipBook(::SharedTypes::v1_20_80::FlipBook&&);

    MCAPI FlipBook(::SharedTypes::v1_20_80::FlipBook const&);

    MCAPI ::SharedTypes::v1_20_80::FlipBook& operator=(::SharedTypes::v1_20_80::FlipBook&&);

    MCAPI ::SharedTypes::v1_20_80::FlipBook& operator=(::SharedTypes::v1_20_80::FlipBook const&);

    MCAPI_C ~FlipBook();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::FlipBook&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::FlipBook const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
