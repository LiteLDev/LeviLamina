#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
        // NOLINTEND

    public:
        // prevent constructor by default
        StatCollector& operator=(StatCollector const&);
        StatCollector(StatCollector const&);
        StatCollector();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~StatCollector();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfdf97e;
    ::ll::UntypedStorage<8, 24> mUnke91e55;
    ::ll::UntypedStorage<8, 8>  mUnk9d0ee2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnostics& operator=(ScriptDiagnostics const&);
    ScriptDiagnostics(ScriptDiagnostics const&);
    ScriptDiagnostics();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addStatCollector(
        uint64                                                                 collectionTickFrequency,
        ::std::function<::std::optional<::ScriptStat>(uint64, uint64, uint64)> collectorFn
    );

    MCAPI void collectStats(uint64 currentTick);
    // NOLINTEND
};
