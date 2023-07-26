/**
 * @file  CrashDumpEventData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0CrashDumpEventData\@\@QEAA\@W4CrashDumpLogStringID\@\@0\@Z
     */
    MCAPI CrashDumpEventData(enum class CrashDumpLogStringID, enum class CrashDumpLogStringID);
    /**
     * @symbol  ?kFormat\@CrashDumpEventData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

};