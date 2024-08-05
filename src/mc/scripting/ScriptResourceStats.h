#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ScriptResourceStats {
public:
    // prevent constructor by default
    ScriptResourceStats& operator=(ScriptResourceStats const&);
    ScriptResourceStats(ScriptResourceStats const&);
    ScriptResourceStats();

public:
    // NOLINTBEGIN
    MCAPI std::string serialize(struct cereal::ReflectionCtx const&) const;

    MCAPI ~ScriptResourceStats();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
