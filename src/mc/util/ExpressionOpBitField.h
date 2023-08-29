#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ExpressionOp.h"

struct ExpressionOpBitField {

public:
    // prevent constructor by default
    ExpressionOpBitField& operator=(ExpressionOpBitField const&) = delete;
    ExpressionOpBitField(ExpressionOpBitField const&)            = delete;
    ExpressionOpBitField()                                       = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
