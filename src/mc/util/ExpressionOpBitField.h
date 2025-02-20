#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ExpressionOp.h"

struct ExpressionOpBitField {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7c05f4;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpressionOpBitField& operator=(ExpressionOpBitField const&);
    ExpressionOpBitField(ExpressionOpBitField const&);
    ExpressionOpBitField();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool
    areBitsSet(::ExpressionOp op0, ::ExpressionOp op1, ::ExpressionOp op2, ::ExpressionOp op3, ::ExpressionOp op4)
        const;

    MCAPI bool areBitsSet(
        ::ExpressionOp op0,
        ::ExpressionOp op1,
        ::ExpressionOp op2,
        ::ExpressionOp op3,
        ::ExpressionOp op4,
        ::ExpressionOp op5,
        ::ExpressionOp op6,
        ::ExpressionOp op7
    ) const;
    // NOLINTEND
};
