#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace Scripting { class RuntimeConditions; }
// clang-format on

class ScriptRuntimeConditionRegistry {
public:
    // prevent constructor by default
    ScriptRuntimeConditionRegistry& operator=(ScriptRuntimeConditionRegistry const&);
    ScriptRuntimeConditionRegistry(ScriptRuntimeConditionRegistry const&);
    ScriptRuntimeConditionRegistry();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::RuntimeConditions getCurrentRuntimeConditions(::ServerLevel const& serverLevel);
    // NOLINTEND
};
