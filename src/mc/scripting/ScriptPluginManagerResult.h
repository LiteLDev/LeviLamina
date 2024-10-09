#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ScriptPluginManagerResult {
public:
    // prevent constructor by default
    ScriptPluginManagerResult& operator=(ScriptPluginManagerResult const&);
    ScriptPluginManagerResult(ScriptPluginManagerResult const&);
    ScriptPluginManagerResult();

public:
    // NOLINTBEGIN
    MCAPI class ScriptPluginResult&
    getOrCreatePluginResults(struct PackIdVersion packId, struct Scripting::ModuleDescriptor const& descriptor);

    MCAPI void logMessages() const;

    MCAPI void logPlugins() const;

    MCAPI ~ScriptPluginManagerResult();

    // NOLINTEND
};
