/**
 * @file  MC/CrashDumpEventData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure CrashDumpEventData.
 *
 */
struct CrashDumpEventData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPEVENTDATA
public:
    struct CrashDumpEventData& operator=(struct CrashDumpEventData const &) = delete;
    CrashDumpEventData(struct CrashDumpEventData const &) = delete;
    CrashDumpEventData() = delete;
#endif

public:
    /**
     * @hash   -2048239243
     * @symbol ??0CrashDumpEventData@@QEAA@W4CrashDumpLogStringID@@0@Z
     */
    MCAPI CrashDumpEventData(enum CrashDumpLogStringID, enum CrashDumpLogStringID);
    /**
     * @hash   -2143349235
     * @symbol ?kFormat@CrashDumpEventData@@2QBUCrashDumpFormatEntryImpl@@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

};