#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
// clang-format on

struct DefaultPropertyValues {
public:
    // DefaultPropertyValues inner types define
    using IntOrMolang = ::std::variant<int, ::ExpressionNode>;

    using FloatOrMolang = ::std::variant<float, ::ExpressionNode>;

    using BoolOrMolang = ::std::variant<bool, ::ExpressionNode>;

    using SizeTOrMolang = ::std::variant<uint64, ::ExpressionNode>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<int, ::ExpressionNode>>>    mIntValueOrExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<float, ::ExpressionNode>>>  mFloatValueOrExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<bool, ::ExpressionNode>>>   mBoolValueOrExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<uint64, ::ExpressionNode>>> mEnumIndexValueOrExpressions;
    // NOLINTEND
};
