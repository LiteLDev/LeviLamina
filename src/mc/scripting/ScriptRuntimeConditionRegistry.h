#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace Scripting { class RuntimeConditions; }
// clang-format on

class ScriptRuntimeConditionRegistry {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::RuntimeConditions getCurrentRuntimeConditions(::ServerLevel const& serverLevel);
    // NOLINTEND
};
