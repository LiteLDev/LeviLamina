#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptPluginResult;
struct PackIdVersion;
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

class ScriptPluginManagerResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3542f8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginManagerResult& operator=(ScriptPluginManagerResult const&);
    ScriptPluginManagerResult(ScriptPluginManagerResult const&);
    ScriptPluginManagerResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptPluginResult&
    getOrCreatePluginResults(::PackIdVersion packId, ::Scripting::ModuleDescriptor const& descriptor);

    MCAPI void logMessages() const;

    MCAPI ~ScriptPluginManagerResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
