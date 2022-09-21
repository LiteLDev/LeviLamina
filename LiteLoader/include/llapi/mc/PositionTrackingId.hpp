/**
 * @file  MC/PositionTrackingId.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PositionTrackingId.
 *
 */
class PositionTrackingId {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSITIONTRACKINGID
public:
    PositionTrackingId() = delete;
#endif

public:
    /**
     * @hash   1324119882
     * @symbol ??0PositionTrackingId@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI PositionTrackingId(std::string const &);
    /**
     * @hash   1871673711
     * @symbol ??0PositionTrackingId@@QEAA@$$QEAV0@@Z
     */
    MCAPI PositionTrackingId(class PositionTrackingId &&);
    /**
     * @hash   -532946767
     * @symbol ??0PositionTrackingId@@QEAA@AEBV0@@Z
     */
    MCAPI PositionTrackingId(class PositionTrackingId const &);
    /**
     * @hash   1085180603
     * @symbol ?fromTag@PositionTrackingId@@QEAAXPEBVTag@@@Z
     */
    MCAPI void fromTag(class Tag const *);
    /**
     * @hash   757240360
     * @symbol ?getTag@PositionTrackingId@@QEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class Tag> getTag() const;
    /**
     * @hash   -241372427
     * @symbol ?init@PositionTrackingId@@QEAAXXZ
     */
    MCAPI void init();
    /**
     * @hash   1412762354
     * @symbol ??4PositionTrackingId@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class PositionTrackingId & operator=(class PositionTrackingId &&);
    /**
     * @hash   -351456396
     * @symbol ??4PositionTrackingId@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class PositionTrackingId & operator=(class PositionTrackingId const &);
    /**
     * @hash   -1146798918
     * @symbol ?toString@PositionTrackingId@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const toString() const;
    /**
     * @hash   -320491813
     * @symbol ?INVALID_ID@PositionTrackingId@@2V1@B
     */
    MCAPI static class PositionTrackingId const INVALID_ID;

//protected:

protected:
    /**
     * @hash   -1705354654
     * @symbol ?sNextId@PositionTrackingId@@1IA
     */
    MCAPI static unsigned int sNextId;

};