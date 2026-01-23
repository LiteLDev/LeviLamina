#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptSelectionManifestEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd3eafb;
    ::ll::UntypedStorage<8, 8>  mUnk4cab33;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionManifestEntry(ScriptSelectionManifestEntry const&);
    ScriptSelectionManifestEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptSelectionManifestEntry&
    operator=(::Editor::ScriptModule::ScriptSelectionManifestEntry&&);

    MCNAPI ::Editor::ScriptModule::ScriptSelectionManifestEntry&
    operator=(::Editor::ScriptModule::ScriptSelectionManifestEntry const&);

    MCNAPI ~ScriptSelectionManifestEntry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
