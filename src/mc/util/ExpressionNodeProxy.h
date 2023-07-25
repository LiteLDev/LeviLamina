#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExpressionNodeSerializer {

struct ExpressionNodeProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPRESSIONNODESERIALIZER_EXPRESSIONNODEPROXY
public:
    ExpressionNodeProxy& operator=(ExpressionNodeProxy const&) = delete;
    ExpressionNodeProxy(ExpressionNodeProxy const&)            = delete;
    ExpressionNodeProxy()                                      = delete;
#endif

public:
    /**
     * @symbol ??1ExpressionNodeProxy\@ExpressionNodeSerializer\@\@QEAA\@XZ
     */
    MCAPI ~ExpressionNodeProxy();
    /**
     * @symbol ?bindType\@ExpressionNodeProxy\@ExpressionNodeSerializer\@\@SAXXZ
     */
    MCAPI static void bindType();
};

}; // namespace ExpressionNodeSerializer
