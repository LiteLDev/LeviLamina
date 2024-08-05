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
    MCAPI bool areBitsSet(::ExpressionOp, ::ExpressionOp, ::ExpressionOp) const;

    MCAPI bool areBitsSet(::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp) const;

    MCAPI bool areBitsSet(::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp) const;

    MCAPI bool
        areBitsSet(::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp, ::ExpressionOp)
            const;

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
