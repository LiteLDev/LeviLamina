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
        ::ll::UntypedStorage<8, 8> mUnk111635;
        ::ll::UntypedStorage<8, 8> mUnk330bb2;
        ::ll::UntypedStorage<8, 8> mUnk9833da;
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
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI StatCollector(::ScriptDiagnostics::StatCollector&&);
    
        MCNAPI ~StatCollector();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ScriptDiagnostics::StatCollector&&);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfdf97e;
    ::ll::UntypedStorage<8, 24> mUnke91e55;
    ::ll::UntypedStorage<8, 24> mUnkac288c;
    ::ll::UntypedStorage<1, 1> mUnk145097;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnostics& operator=(ScriptDiagnostics const&);
    ScriptDiagnostics(ScriptDiagnostics const&);
    ScriptDiagnostics();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addStatCollector(uint64 collectionTickFrequency, ::std::function<::std::optional<::ScriptStat>(uint64, uint64, uint64)> collectorFn, ::std::function<void()> enableFn, ::std::function<void()> disableFn, ::std::function<void(bool)> reloadFn);

    MCNAPI void collectStats(uint64 currentTick);

    MCNAPI ~ScriptDiagnostics();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
