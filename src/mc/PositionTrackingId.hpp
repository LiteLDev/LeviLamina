/**
 * @file  PositionTrackingId.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0PositionTrackingId\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI PositionTrackingId(std::string const &);
    /**
     * @symbol  ??0PositionTrackingId\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI PositionTrackingId(class PositionTrackingId &&);
    /**
     * @symbol  ??0PositionTrackingId\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PositionTrackingId(class PositionTrackingId const &);
    /**
     * @symbol  ?fromTag\@PositionTrackingId\@\@QEAAXPEBVTag\@\@\@Z
     */
    MCAPI void fromTag(class Tag const *);
    /**
     * @symbol  ?getTag\@PositionTrackingId\@\@QEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class Tag> getTag() const;
    /**
     * @symbol  ?init\@PositionTrackingId\@\@QEAAXXZ
     */
    MCAPI void init();
    /**
     * @symbol  ??4PositionTrackingId\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class PositionTrackingId & operator=(class PositionTrackingId &&);
    /**
     * @symbol  ??4PositionTrackingId\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class PositionTrackingId & operator=(class PositionTrackingId const &);
    /**
     * @symbol  ?toString\@PositionTrackingId\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const toString() const;
    /**
     * @symbol  ?INVALID_ID\@PositionTrackingId\@\@2V1\@B
     */
    MCAPI static class PositionTrackingId const INVALID_ID;

//protected:

protected:
    /**
     * @symbol  ?sNextId\@PositionTrackingId\@\@1IA
     */
    MCAPI static unsigned int sNextId;

};