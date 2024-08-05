#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::Legacy {

struct ExpressionNode {
public:
    // prevent constructor by default
    ExpressionNode& operator=(ExpressionNode const&);
    ExpressionNode(ExpressionNode const&);
    ExpressionNode();

public:
    // NOLINTBEGIN
    MCAPI ExpressionNode(std::string, int);

    MCAPI ~ExpressionNode();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::Legacy
