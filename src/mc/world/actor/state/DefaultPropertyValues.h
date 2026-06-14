#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

struct DefaultPropertyValues {
public:
    // DefaultPropertyValues inner types define
    using BoolOrMolang = ::std::variant<bool, ::ExpressionNode>;

    using FloatOrMolang = ::std::variant<float, ::ExpressionNode>;

    using IntOrMolang = ::std::variant<int, ::ExpressionNode>;

    using SizeTOrMolang = ::std::variant<uint64, ::ExpressionNode>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<int, ::ExpressionNode>>>    mIntValueOrExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<float, ::ExpressionNode>>>  mFloatValueOrExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<bool, ::ExpressionNode>>>   mBoolValueOrExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<uint64, ::ExpressionNode>>> mEnumIndexValueOrExpressions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void reserve(uint64 intCapacity, uint64 floatCapacity, uint64 boolCapacity, uint64 enumIndexCapacity);

    MCAPI ~DefaultPropertyValues();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
