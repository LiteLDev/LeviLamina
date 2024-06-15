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
    // symbol: ??0ExpressionNode@Legacy@Puv@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ExpressionNode(std::string, int);

    // symbol: ??1ExpressionNode@Legacy@Puv@@QEAA@XZ
    MCAPI ~ExpressionNode();

    // symbol: ?bindType@ExpressionNode@Legacy@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::Legacy
