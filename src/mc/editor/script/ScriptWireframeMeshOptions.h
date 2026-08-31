#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptWireframeMeshOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkb9f26d;
    ::ll::UntypedStorage<4, 16> mUnkebf534;
    ::ll::UntypedStorage<4, 8>  mUnkeda781;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWireframeMeshOptions& operator=(ScriptWireframeMeshOptions const&);
    ScriptWireframeMeshOptions(ScriptWireframeMeshOptions const&);
    ScriptWireframeMeshOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
