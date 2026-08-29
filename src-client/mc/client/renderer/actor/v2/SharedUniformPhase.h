#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
// clang-format on

struct SharedUniformPhase {
public:
    // SharedUniformPhase inner types declare
    // clang-format off
    struct ConstantUpdate;
    struct ExpressionUpdate;
    // clang-format on

    // SharedUniformPhase inner types define
    struct ConstantUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, float const*> mConstant;
        ::ll::TypedStorage<8, 8, float*>       mDestination;
        // NOLINTEND
    };

    struct ExpressionUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ExpressionNode const*> mExpression;
        ::ll::TypedStorage<8, 8, ::RenderParams*>         mParams;
        ::ll::TypedStorage<8, 8, float*>                  mDestination;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedUniformPhase::ConstantUpdate>>   mConstantsToUniforms;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedUniformPhase::ExpressionUpdate>> mExpressionsToUniforms;
    // NOLINTEND
};
