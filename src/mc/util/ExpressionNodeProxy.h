#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ExpressionNodeSerializer {

struct ExpressionNodeProxy {
public:
    // prevent constructor by default
    ExpressionNodeProxy& operator=(ExpressionNodeProxy const&);
    ExpressionNodeProxy(ExpressionNodeProxy const&);
    ExpressionNodeProxy();

public:
    // NOLINTBEGIN
    // symbol: ??1ExpressionNodeProxy@ExpressionNodeSerializer@@QEAA@XZ
    MCAPI ~ExpressionNodeProxy();

    // symbol: ?bindType@ExpressionNodeProxy@ExpressionNodeSerializer@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace ExpressionNodeSerializer
