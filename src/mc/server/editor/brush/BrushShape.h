#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptUIElement; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
// clang-format on

namespace Editor::Brush {

class BrushShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkffa57b;
    ::ll::UntypedStorage<8, 32> mUnk3f00b9;
    ::ll::UntypedStorage<8, 88> mUnkb62577;
    ::ll::UntypedStorage<8, 88> mUnk31c598;
    // NOLINTEND

public:
    // prevent constructor by default
    BrushShape& operator=(BrushShape const&);
    BrushShape(BrushShape const&);
    BrushShape();
};

} // namespace Editor::Brush
