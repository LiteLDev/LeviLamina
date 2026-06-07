#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExprToken;
class UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class UiExpression {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ExprToken>> mTokens;
    ::ll::TypedStorage<1, 1, bool>                        mIsStatic;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool empty() const;

    MCAPI ::Json::Value evaluate(::UIPropertyBag* bag) const;

    MCAPI uint64 forEachPropertyName(::std::function<void(::std::string const&)> callback) const;

    MCAPI uint64 forEachPropertyToken(::std::function<void(::ExprToken&)> callback);

    MCFOLD bool isStatic() const;

    MCAPI ~UiExpression();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
