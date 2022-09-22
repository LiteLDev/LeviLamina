/**
 * @file  SeatDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   314768357
     * @symbol ??0SeatDescription@@QEAA@AEBU0@@Z
     */
    MCAPI SeatDescription(struct SeatDescription const &);
    /**
     * @hash   -1940700140
     * @symbol ?addRotationExpressionNode@SeatDescription@@QEAAXAEBVExpressionNode@@@Z
     */
    MCAPI void addRotationExpressionNode(class ExpressionNode const &);
    /**
     * @hash   -923918210
     * @symbol ??4SeatDescription@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct SeatDescription & operator=(struct SeatDescription const &);
    /**
     * @hash   -519813714
     * @symbol ??4SeatDescription@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct SeatDescription & operator=(struct SeatDescription &&);
    /**
     * @hash   -1348903772
     * @symbol ??8SeatDescription@@QEBA_NAEBU0@@Z
     */
    MCAPI bool operator==(struct SeatDescription const &) const;
    /**
     * @hash   2075380675
     * @symbol ??1SeatDescription@@QEAA@XZ
     */
    MCAPI ~SeatDescription();
    /**
     * @hash   -2080577241
     * @symbol ?EMPTY@SeatDescription@@2U1@B
     */
    MCAPI static struct SeatDescription const EMPTY;

};