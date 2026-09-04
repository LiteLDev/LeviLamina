#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptMeshLoadOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk303f14;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMeshLoadOptions& operator=(ScriptMeshLoadOptions const&);
    ScriptMeshLoadOptions(ScriptMeshLoadOptions const&);
    ScriptMeshLoadOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
