#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Generator.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
// clang-format on

class ScriptAsyncJobCoordinator {
public:
    // prevent constructor by default
    ScriptAsyncJobCoordinator(ScriptAsyncJobCoordinator const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptAsyncJobCoordinator();

    MCAPI uint addGenerator(class Scripting::Generator<void, void, void>&&);

    MCAPI void clear();

    MCAPI class ScriptAsyncJobCoordinator& operator=(class ScriptAsyncJobCoordinator const&);

    MCAPI void process(std::chrono::microseconds, class IScriptGeneratorStats*);

    MCAPI void removeGenerator(struct Scripting::ContextId, uint);

    MCAPI ~ScriptAsyncJobCoordinator();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addPendingGenerators(class IScriptGeneratorStats*);

    MCAPI void _removeExpiredGenerators(class IScriptGeneratorStats*);

    // NOLINTEND
};
