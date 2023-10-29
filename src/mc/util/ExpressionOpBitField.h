#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ExpressionOp.h"

struct ExpressionOpBitField {
public:
    // prevent constructor by default
    ExpressionOpBitField& operator=(ExpressionOpBitField const&);
    ExpressionOpBitField(ExpressionOpBitField const&);
    ExpressionOpBitField();

public:
    // NOLINTBEGIN
    // symbol: ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@00@Z
    MCAPI bool areBitsSet(::ExpressionOp, ::ExpressionOp, ::ExpressionOp) const;

    // symbol: ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@000@Z
    MCAPI bool areBitsSet(::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp) const;

    // symbol: ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@0000@Z
    MCAPI bool areBitsSet(::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp) const;

    // symbol: ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@00000@Z
    MCAPI bool
        areBitsSet(::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp)
            const;

    // symbol: ?areBitsSet@ExpressionOpBitField@@QEBA_NW4ExpressionOp@@0000000@Z
    MCAPI bool areBitsSet(
        ::ExpressionOp,
        ::ExpressionOp,
        ::ExpressionOp,
        ::ExpressionOp,
        ::ExpressionOp,
        ::ExpressionOp,
        ::ExpressionOp,
        ::ExpressionOp
    ) const;

    // NOLINTEND
};
