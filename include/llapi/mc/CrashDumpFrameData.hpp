/**
 * @file  CrashDumpFrameData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure CrashDumpFrameData.
 *
 */
struct CrashDumpFrameData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPFRAMEDATA
public:
    struct CrashDumpFrameData& operator=(struct CrashDumpFrameData const &) = delete;
    CrashDumpFrameData(struct CrashDumpFrameData const &) = delete;
    CrashDumpFrameData() = delete;
#endif

public:
    /**
     * @symbol  ??0CrashDumpFrameData\@\@QEAA\@HH_KMMMM\@Z
     */
    MCAPI CrashDumpFrameData(int, int, unsigned __int64, float, float, float, float);
    /**
     * @symbol  ?kFormat\@CrashDumpFrameData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

};