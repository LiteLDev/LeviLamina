#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ColorExpr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::std::array<::SharedTypes::Legacy::ExpressionNode, 4>> mColorExpr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ColorExpr();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void fromExprArrayRGB(
        ::SharedTypes::v1_20_80::ColorExpr&                    instance,
        ::std::array<::SharedTypes::Legacy::ExpressionNode, 3> exprRGB
    );

    MCAPI static void fromString(::SharedTypes::v1_20_80::ColorExpr& instance, ::std::string str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
