#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExpressionNodeSerializer {

struct ExpressionNodeProxy {

public:
    // prevent constructor by default
    ExpressionNodeProxy& operator=(ExpressionNodeProxy const&) = delete;
    ExpressionNodeProxy(ExpressionNodeProxy const&)            = delete;
    ExpressionNodeProxy()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ExpressionNodeProxy\@ExpressionNodeSerializer\@\@QEAA\@XZ
     */
    MCAPI ~ExpressionNodeProxy();
    /**
     * @symbol ?bindType\@ExpressionNodeProxy\@ExpressionNodeSerializer\@\@SAXXZ
     */
    MCAPI static void bindType();
    // NOLINTEND
};

}; // namespace ExpressionNodeSerializer
