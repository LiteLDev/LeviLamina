#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CrashDumpFormatEntryImpl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPFORMATENTRYIMPL
public:
    CrashDumpFormatEntryImpl& operator=(CrashDumpFormatEntryImpl const&) = delete;
    CrashDumpFormatEntryImpl(CrashDumpFormatEntryImpl const&)            = delete;
    CrashDumpFormatEntryImpl()                                           = delete;
#endif

public:
};
