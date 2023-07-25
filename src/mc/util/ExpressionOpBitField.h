#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExpressionOpBitField {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPRESSIONOPBITFIELD
public:
    ExpressionOpBitField& operator=(ExpressionOpBitField const&) = delete;
    ExpressionOpBitField(ExpressionOpBitField const&)            = delete;
    ExpressionOpBitField()                                       = delete;
#endif

public:
    /**
     * @symbol ?areBitsSet\@ExpressionOpBitField\@\@QEBA_NW4ExpressionOp\@\@0000\@Z
     */
    MCAPI bool areBitsSet(
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp
    ) const;
    /**
     * @symbol ?areBitsSet\@ExpressionOpBitField\@\@QEBA_NW4ExpressionOp\@\@000\@Z
     */
    MCAPI bool
        areBitsSet(enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp)
            const;
    /**
     * @symbol ?areBitsSet\@ExpressionOpBitField\@\@QEBA_NW4ExpressionOp\@\@00000\@Z
     */
    MCAPI bool areBitsSet(
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp
    ) const;
    /**
     * @symbol ?areBitsSet\@ExpressionOpBitField\@\@QEBA_NW4ExpressionOp\@\@0000000\@Z
     */
    MCAPI bool areBitsSet(
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp,
        enum class ExpressionOp
    ) const;
};
