/**
 * @file  MC/ExpressionOpBitField.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -200133790
     * @symbol ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@0000000@Z
     */
    MCAPI bool areBitsSet(enum ExpressionOp, enum ExpressionOp, enum ExpressionOp, enum ExpressionOp, enum ExpressionOp, enum ExpressionOp, enum ExpressionOp, enum ExpressionOp) const;
    /**
     * @hash   2053921666
     * @symbol ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@00000@Z
     */
    MCAPI bool areBitsSet(enum ExpressionOp, enum ExpressionOp, enum ExpressionOp, enum ExpressionOp, enum ExpressionOp, enum ExpressionOp) const;
    /**
     * @hash   1307418091
     * @symbol ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@0000@Z
     */
    MCAPI bool areBitsSet(enum ExpressionOp, enum ExpressionOp, enum ExpressionOp, enum ExpressionOp, enum ExpressionOp) const;
    /**
     * @hash   729339954
     * @symbol ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@000@Z
     */
    MCAPI bool areBitsSet(enum ExpressionOp, enum ExpressionOp, enum ExpressionOp, enum ExpressionOp) const;
    /**
     * @hash   -536071029
     * @symbol ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@00@Z
     */
    MCAPI bool areBitsSet(enum ExpressionOp, enum ExpressionOp, enum ExpressionOp) const;

};