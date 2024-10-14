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
    MCAPI ExpressionNode(std::string string, int molangVersion);

    MCAPI ~ExpressionNode();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv::Legacy
