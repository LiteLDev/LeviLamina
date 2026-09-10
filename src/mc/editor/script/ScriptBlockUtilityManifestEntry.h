#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptBlockUtilityManifestEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5b7283;
    ::ll::UntypedStorage<4, 4>  mUnkfa5e3f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockUtilityManifestEntry& operator=(ScriptBlockUtilityManifestEntry const&);
    ScriptBlockUtilityManifestEntry(ScriptBlockUtilityManifestEntry const&);
    ScriptBlockUtilityManifestEntry();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
