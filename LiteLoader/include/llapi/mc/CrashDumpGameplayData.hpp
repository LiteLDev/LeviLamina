/**
 * @file  CrashDumpGameplayData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CrashDumpGameplayData.
 *
 */
class CrashDumpGameplayData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPGAMEPLAYDATA
public:
    class CrashDumpGameplayData& operator=(class CrashDumpGameplayData const &) = delete;
    CrashDumpGameplayData(class CrashDumpGameplayData const &) = delete;
    CrashDumpGameplayData() = delete;
#endif

public:
    /**
     * @symbol  ?kFormat\@CrashDumpGameplayData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

};