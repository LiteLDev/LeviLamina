#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ExprTokenType.h"
#include "mc/client/gui/LiteralType.h"
#include "mc/client/gui/OperatorType.h"
#include "mc/client/gui/UiExpression.h"
#include "mc/deps/json/Value.h"

class ExprToken {
public:
    // ExprToken inner types define
    enum class StringOption : int {
        EvaluateAsExpression = 0,
        KeepAsString         = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::OperatorType>                                 mOperatorType;
    ::ll::TypedStorage<1, 1, ::LiteralType>                                  mLiteralType;
    ::ll::TypedStorage<1, 1, ::ExprTokenType>                                mTokenType;
    ::ll::TypedStorage<8, 40, ::std::variant<::Json::Value, ::UiExpression>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ExprToken(ExprToken const&);
    ExprToken();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _parseToken(::std::string_view str);

    MCAPI bool asBool() const;

    MCAPI float asFloat() const;

    MCAPI int asInt() const;

    MCAPI ::std::string_view asString() const;

    MCAPI ::ExprToken& operator=(::ExprToken const&);

    MCAPI ::ExprToken& operator=(::ExprToken&&);

    MCAPI ~ExprToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ExprToken createBoolToken(bool fromBool);

    MCAPI static ::ExprToken createFloatToken(float fromFloat);

    MCAPI static ::ExprToken createIntToken(int fromInt);

    MCAPI static ::ExprToken createStringToken(::std::string_view fromStr, ::ExprToken::StringOption evalString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
