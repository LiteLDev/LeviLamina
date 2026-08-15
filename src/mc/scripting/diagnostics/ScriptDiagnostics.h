#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IScriptStatPublisher;
class ScriptStat;
// clang-format on

class ScriptDiagnostics {
public:
    // ScriptDiagnostics inner types declare
    // clang-format off
    struct StatCollector;
    // clang-format on

    // ScriptDiagnostics inner types define
    struct StatCollector {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk111635;
        ::ll::UntypedStorage<8, 8>  mUnk330bb2;
        ::ll::UntypedStorage<8, 8>  mUnk9833da;
        ::ll::UntypedStorage<8, 64> mUnkda8182;
        ::ll::UntypedStorage<8, 64> mUnk526e97;
        ::ll::UntypedStorage<8, 64> mUnk5a105d;
        ::ll::UntypedStorage<8, 64> mUnk71ca5e;
        // NOLINTEND

    public:
        // prevent constructor by default
        StatCollector& operator=(StatCollector const&);
        StatCollector(StatCollector const&);
        StatCollector();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd1118e;
    ::ll::UntypedStorage<8, 24> mUnkc36c26;
    ::ll::UntypedStorage<8, 24> mUnk5d35e1;
    ::ll::UntypedStorage<1, 1>  mUnk145097;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnostics& operator=(ScriptDiagnostics const&);
    ScriptDiagnostics(ScriptDiagnostics const&);
    ScriptDiagnostics();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void collectStats(uint64 currentTick);
    // NOLINTEND
};
