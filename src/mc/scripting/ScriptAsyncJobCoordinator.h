#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/script_engine/Generator.h"

// auto generated forward declare list
// clang-format off
class IScriptGeneratorStats;
struct ServerScriptManagerEvents;
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptAsyncJobCoordinator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk47ca32;
    ::ll::UntypedStorage<8, 24> mUnk18eeba;
    ::ll::UntypedStorage<8, 64> mUnk1652bf;
    ::ll::UntypedStorage<8, 16> mUnkee32eb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncJobCoordinator& operator=(ScriptAsyncJobCoordinator const&);
    ScriptAsyncJobCoordinator(ScriptAsyncJobCoordinator const&);
    ScriptAsyncJobCoordinator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptAsyncJobCoordinator(::ServerScriptManagerEvents& events);

    MCNAPI void _addPendingGenerators(::IScriptGeneratorStats* stats);

    MCNAPI void _removeExpiredGenerators(::IScriptGeneratorStats* stats);

    MCNAPI uint addGenerator(::Scripting::Generator<void, void, void>&& generator);

    MCNAPI void clear();

    MCNAPI void process(::std::chrono::microseconds timeSlice, ::IScriptGeneratorStats* stats);

    MCNAPI void removeGenerator(::Scripting::ContextId originatingContextId, uint generatorId);

    MCNAPI ~ScriptAsyncJobCoordinator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerScriptManagerEvents& events);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
