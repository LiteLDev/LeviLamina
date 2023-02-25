/**
 * @file  CrashDumpRenderData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CrashDumpRenderData.
 *
 */
class CrashDumpRenderData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPRENDERDATA
public:
    class CrashDumpRenderData& operator=(class CrashDumpRenderData const &) = delete;
    CrashDumpRenderData(class CrashDumpRenderData const &) = delete;
    CrashDumpRenderData() = delete;
#endif

public:
    /**
     * @symbol  ?kFormat\@CrashDumpRenderData\@\@2QBUCrashDumpFormatEntryImpl\@\@B
     */
    MCAPI static struct CrashDumpFormatEntryImpl const kFormat[];

};