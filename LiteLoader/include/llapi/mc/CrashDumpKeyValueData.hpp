/**
 * @file  CrashDumpKeyValueData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure CrashDumpKeyValueData.
 *
 */
struct CrashDumpKeyValueData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPKEYVALUEDATA
public:
    struct CrashDumpKeyValueData& operator=(struct CrashDumpKeyValueData const &) = delete;
    CrashDumpKeyValueData(struct CrashDumpKeyValueData const &) = delete;
    CrashDumpKeyValueData() = delete;
#endif

public:
    /**
     * @symbol  ??0CrashDumpKeyValueData\@\@QEAA\@W4CrashDumpLogStringID\@\@0H_K\@Z
     */
    MCAPI CrashDumpKeyValueData(enum class CrashDumpLogStringID, enum class CrashDumpLogStringID, int, unsigned __int64);
    /**
     * @symbol  ?kFormat\@CrashDumpKeyValueData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

};