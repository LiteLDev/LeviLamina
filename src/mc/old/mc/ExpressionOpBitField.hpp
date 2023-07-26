/**
 * @file  ExpressionOpBitField.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ExpressionOpBitField.
 *
 */
struct ExpressionOpBitField {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPRESSIONOPBITFIELD
public:
    struct ExpressionOpBitField& operator=(struct ExpressionOpBitField const &) = delete;
    ExpressionOpBitField(struct ExpressionOpBitField const &) = delete;
    ExpressionOpBitField() = delete;
#endif

public:
    /**
     * @symbol  ?areBitsSet\@ExpressionOpBitField\@\@QEBA_NW4ExpressionOp\@\@0000000\@Z
     */
    MCAPI bool areBitsSet(enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp) const;
    /**
     * @symbol  ?areBitsSet\@ExpressionOpBitField\@\@QEBA_NW4ExpressionOp\@\@00000\@Z
     */
    MCAPI bool areBitsSet(enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp) const;
    /**
     * @symbol  ?areBitsSet\@ExpressionOpBitField\@\@QEBA_NW4ExpressionOp\@\@0000\@Z
     */
    MCAPI bool areBitsSet(enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp) const;
    /**
     * @symbol  ?areBitsSet\@ExpressionOpBitField\@\@QEBA_NW4ExpressionOp\@\@000\@Z
     */
    MCAPI bool areBitsSet(enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp) const;
    /**
     * @symbol  ?areBitsSet\@ExpressionOpBitField\@\@QEBA_NW4ExpressionOp\@\@00\@Z
     */
    MCAPI bool areBitsSet(enum class ExpressionOp, enum class ExpressionOp, enum class ExpressionOp) const;

};