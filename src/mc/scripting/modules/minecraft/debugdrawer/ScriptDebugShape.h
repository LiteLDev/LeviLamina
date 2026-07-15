#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPrimitiveShape; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDebugShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPrimitiveShape>>
        mPrimitiveShape;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebugShape() = default;
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
