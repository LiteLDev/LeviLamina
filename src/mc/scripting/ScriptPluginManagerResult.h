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
    ::ll::UntypedStorage<8, 24> mUnk2bc955;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPluginManagerResult& operator=(ScriptPluginManagerResult const&);
    ScriptPluginManagerResult(ScriptPluginManagerResult const&);
    ScriptPluginManagerResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptPluginResult&
    getOrCreatePluginResults(::PackIdVersion packId, ::Scripting::ModuleDescriptor const& descriptor);

    MCNAPI void logMessages() const;

#ifdef LL_PLAT_C
    MCNAPI ~ScriptPluginManagerResult();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
