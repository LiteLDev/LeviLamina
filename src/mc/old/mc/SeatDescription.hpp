/**
 * @file  SeatDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SeatDescription.
 *
 */
struct SeatDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEATDESCRIPTION
public:
    SeatDescription() = delete;
#endif

public:
    /**
     * @symbol  ??0SeatDescription\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SeatDescription(struct SeatDescription const &);
    /**
     * @symbol  ?addRotationExpressionNode\@SeatDescription\@\@QEAAXAEBVExpressionNode\@\@\@Z
     */
    MCAPI void addRotationExpressionNode(class ExpressionNode const &);
    /**
     * @symbol  ??4SeatDescription\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct SeatDescription & operator=(struct SeatDescription const &);
    /**
     * @symbol  ??4SeatDescription\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SeatDescription & operator=(struct SeatDescription &&);
    /**
     * @symbol  ??8SeatDescription\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct SeatDescription const &) const;
    /**
     * @symbol  ??1SeatDescription\@\@QEAA\@XZ
     */
    MCAPI ~SeatDescription();
    /**
     * @symbol  ?EMPTY\@SeatDescription\@\@2U1\@B
     */
    MCAPI static struct SeatDescription const EMPTY;

};