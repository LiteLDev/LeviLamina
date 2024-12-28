#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/script_engine/Generator.h"

// auto generated forward declare list
// clang-format off
class IScriptGeneratorStats;
namespace Scripting { struct ContextId; }
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptAsyncJobCoordinator();

    MCAPI void _addPendingGenerators(::IScriptGeneratorStats* stats);

    MCAPI void _removeExpiredGenerators(::IScriptGeneratorStats* stats);

    MCAPI uint addGenerator(::Scripting::Generator<void, void, void>&& generator);

    MCAPI void clear();

    MCAPI ::ScriptAsyncJobCoordinator& operator=(::ScriptAsyncJobCoordinator const&);

    MCAPI void process(::std::chrono::microseconds timeSlice, ::IScriptGeneratorStats* stats);

    MCAPI void removeGenerator(::Scripting::ContextId originatingContextId, uint generatorId);

    MCAPI ~ScriptAsyncJobCoordinator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
