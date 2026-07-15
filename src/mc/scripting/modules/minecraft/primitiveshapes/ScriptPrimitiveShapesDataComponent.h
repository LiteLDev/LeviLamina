#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ILevel;
namespace ScriptModuleMinecraft { class ScriptPrimitiveShape; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPrimitiveShapesDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPrimitiveShape>>>
                                                                      mShapes;
    ::ll::TypedStorage<8, 8, ::ILevel*>                               mLevel;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastUpdate;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
