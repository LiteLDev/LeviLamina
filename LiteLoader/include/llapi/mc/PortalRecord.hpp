/**
 * @file  MC/PortalRecord.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   811236083
     * @symbol ??0PortalRecord@@QEAA@AEBVBlockPos@@HHH@Z
     */
    MCAPI PortalRecord(class BlockPos const &, int, int, int);
    /**
     * @hash   -2054504992
     * @symbol ??0PortalRecord@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI PortalRecord(class BlockPos const &);
    /**
     * @hash   778966505
     * @symbol ?closestBlockPosTo@PortalRecord@@QEBA?AVBlockPos@@AEBVActor@@@Z
     */
    MCAPI class BlockPos closestBlockPosTo(class Actor const &) const;
    /**
     * @hash   1696097749
     * @symbol ?hashCode@PortalRecord@@QEBA_KXZ
     */
    MCAPI unsigned __int64 hashCode() const;
    /**
     * @hash   -1525123030
     * @symbol ??8PortalRecord@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class PortalRecord const &) const;

};