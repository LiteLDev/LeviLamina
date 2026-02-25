#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class UiExpression;
namespace Json { class Value; }
// clang-format on

class UIEval {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::UiExpression const evalExpression(
        ::std::string const&                 expressionString,
        ::std::vector<::Json::Value*> const& variablesStack,
        ::Json::Value const&                 localStack
    );

    MCAPI static ::Json::Value const& evalVariable(
        ::std::string const&                 valueStr,
        ::std::vector<::Json::Value*> const& variablesStack,
        ::Json::Value const&                 localStack
    );
    // NOLINTEND
};
