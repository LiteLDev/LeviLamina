#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SeatDescription {

public:
    // prevent constructor by default
    SeatDescription() = delete;

public:
    /**
     * @symbol ??0SeatDescription\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SeatDescription(struct SeatDescription const&); // NOLINT
    /**
     * @symbol ?addRotationExpressionNode\@SeatDescription\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void addRotationExpressionNode(class ExpressionNode const&); // NOLINT
    /**
     * @symbol ??4SeatDescription\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct SeatDescription& operator=(struct SeatDescription const&); // NOLINT
    /**
     * @symbol ??4SeatDescription\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SeatDescription& operator=(struct SeatDescription&&); // NOLINT
    /**
     * @symbol ??8SeatDescription\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct SeatDescription const&) const; // NOLINT
    /**
     * @symbol ??1SeatDescription\@\@QEAA\@XZ
     */
    MCAPI ~SeatDescription(); // NOLINT
    /**
     * @symbol ?EMPTY\@SeatDescription\@\@2U1\@B
     */
    MCAPI static struct SeatDescription const EMPTY; // NOLINT
};
