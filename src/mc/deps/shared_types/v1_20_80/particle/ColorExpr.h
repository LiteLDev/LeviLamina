#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ColorExpr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnk1afdfe;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorExpr(ColorExpr const&);
    ColorExpr();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_80::ColorExpr& operator=(::SharedTypes::v1_20_80::ColorExpr const&);

    MCNAPI ~ColorExpr();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void fromExprArrayRGB(
        ::SharedTypes::v1_20_80::ColorExpr&                    instance,
        ::std::array<::SharedTypes::Legacy::ExpressionNode, 3> exprRGB
    );

    MCNAPI static void fromString(::SharedTypes::v1_20_80::ColorExpr& instance, ::std::string str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
