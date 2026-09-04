#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentWriter; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponentRegistry
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptItemComponentRegistry> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::IScriptItemCustomComponentWriter&> mCustomComponentWriter;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemComponentRegistry& operator=(ScriptItemComponentRegistry const&);
    ScriptItemComponentRegistry(ScriptItemComponentRegistry const&);
    ScriptItemComponentRegistry();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
