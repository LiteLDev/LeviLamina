#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ColorExpr.h"
#include "mc/deps/shared_types/v1_20_80/particle/ColorGradient.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct TintingComponentColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::SharedTypes::v1_20_80::ColorGradient>> mInterpolatedColor;
    ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Legacy::ExpressionNode>>  mInterpolantExpr;
    ::ll::TypedStorage<8, 200, ::std::optional<::SharedTypes::v1_20_80::ColorExpr>>    mColor;
    // NOLINTEND

public:
    // prevent constructor by default
    TintingComponentColor& operator=(TintingComponentColor const&);
    TintingComponentColor(TintingComponentColor const&);
    TintingComponentColor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_20_80::TintingComponentColor& operator=(::SharedTypes::v1_20_80::TintingComponentColor&&);

    MCAPI ~TintingComponentColor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
