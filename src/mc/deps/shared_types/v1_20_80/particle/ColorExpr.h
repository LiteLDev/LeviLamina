#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ExpressionNode; }
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
    ColorExpr& operator=(ColorExpr const&);
    ColorExpr(ColorExpr const&);
    ColorExpr();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ColorExpr();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
