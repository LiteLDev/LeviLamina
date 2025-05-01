#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IScriptGeneratorStats;
// clang-format on

class ScriptAsyncJobCoordinator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk47ca32;
    ::ll::UntypedStorage<8, 24> mUnkba1ec6;
    ::ll::UntypedStorage<8, 64> mUnk603ea7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncJobCoordinator(ScriptAsyncJobCoordinator const&);
    ScriptAsyncJobCoordinator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addPendingGenerators(::IScriptGeneratorStats* stats);

    MCNAPI void _removeExpiredGenerators(::IScriptGeneratorStats* stats);

    MCNAPI ::ScriptAsyncJobCoordinator& operator=(::ScriptAsyncJobCoordinator const&);

    MCNAPI void process(::std::chrono::microseconds timeSlice, ::IScriptGeneratorStats* stats);
    // NOLINTEND
};
