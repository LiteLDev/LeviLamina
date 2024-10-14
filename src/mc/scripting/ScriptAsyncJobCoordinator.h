#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/script_engine/Generator.h"

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

    MCAPI uint addGenerator(class Scripting::Generator<void, void, void>&& generator);

    MCAPI void clear();

    MCAPI class ScriptAsyncJobCoordinator& operator=(class ScriptAsyncJobCoordinator const&);

    MCAPI void process(std::chrono::microseconds timeSlice, class IScriptGeneratorStats* stats);

    MCAPI void removeGenerator(struct Scripting::ContextId originatingContextId, uint generatorId);

    MCAPI ~ScriptAsyncJobCoordinator();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addPendingGenerators(class IScriptGeneratorStats* stats);

    MCAPI void _removeExpiredGenerators(class IScriptGeneratorStats* stats);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
