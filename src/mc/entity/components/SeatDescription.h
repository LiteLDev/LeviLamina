#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SeatDescription {
public:
    // prevent constructor by default
    SeatDescription();

public:
    // NOLINTBEGIN
    // symbol: ??0SeatDescription@@QEAA@AEBU0@@Z
    MCAPI SeatDescription(struct SeatDescription const&);

    // symbol: ?addRotationExpressionNode@SeatDescription@@QEAAXAEBVExpressionNode@@@Z
    MCAPI void addRotationExpressionNode(class ExpressionNode const& node);

    // symbol: ??4SeatDescription@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct SeatDescription& operator=(struct SeatDescription&&);

    // symbol: ??4SeatDescription@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct SeatDescription& operator=(struct SeatDescription const&);

    // symbol: ??8SeatDescription@@QEBA_NAEBU0@@Z
    MCAPI bool operator==(struct SeatDescription const& seat) const;

    // symbol: ??1SeatDescription@@QEAA@XZ
    MCAPI ~SeatDescription();

    // symbol: ?EMPTY@SeatDescription@@2U1@B
    MCAPI static struct SeatDescription const EMPTY;

    // NOLINTEND
};
