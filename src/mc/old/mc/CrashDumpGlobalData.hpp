/**
 * @file  CrashDumpGlobalData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CrashDumpGlobalData.
 *
 */
class CrashDumpGlobalData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPGLOBALDATA
public:
    class CrashDumpGlobalData& operator=(class CrashDumpGlobalData const &) = delete;
    CrashDumpGlobalData(class CrashDumpGlobalData const &) = delete;
    CrashDumpGlobalData() = delete;
#endif

public:
    /**
     * @symbol  ?kFormat\@CrashDumpGlobalData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

};