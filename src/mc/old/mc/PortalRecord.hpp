/**
 * @file  PortalRecord.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PortalRecord.
 *
 */
class PortalRecord {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PORTALRECORD
public:
    class PortalRecord& operator=(class PortalRecord const &) = delete;
    PortalRecord(class PortalRecord const &) = delete;
    PortalRecord() = delete;
#endif

public:
    /**
     * @symbol  ??0PortalRecord\@\@QEAA\@AEBVBlockPos\@\@HHH\@Z
     */
    MCAPI PortalRecord(class BlockPos const &, int, int, int);
    /**
     * @symbol  ??0PortalRecord\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI PortalRecord(class BlockPos const &);
    /**
     * @symbol  ?closestBlockPosTo\@PortalRecord\@\@QEBA?AVBlockPos\@\@AEBVActor\@\@\@Z
     */
    MCAPI class BlockPos closestBlockPosTo(class Actor const &) const;
    /**
     * @symbol  ?hashCode\@PortalRecord\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 hashCode() const;
    /**
     * @symbol  ??8PortalRecord\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class PortalRecord const &) const;

};