#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SeatDescription {
public:
    // prevent constructor by default
    SeatDescription();

public:
    // NOLINTBEGIN
    MCAPI SeatDescription(struct SeatDescription const&);

    MCAPI void addRotationExpressionNode(class ExpressionNode const& node);

    MCAPI struct SeatDescription& operator=(struct SeatDescription&&);

    MCAPI struct SeatDescription& operator=(struct SeatDescription const&);

    MCAPI bool operator==(struct SeatDescription const& seat) const;

    MCAPI ~SeatDescription();

    MCAPI static struct SeatDescription const EMPTY;

    // NOLINTEND
};
