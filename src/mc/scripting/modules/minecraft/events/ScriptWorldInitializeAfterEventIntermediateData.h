#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPropertyRegistry; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPropertyRegistry>>
        mRegistry;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
