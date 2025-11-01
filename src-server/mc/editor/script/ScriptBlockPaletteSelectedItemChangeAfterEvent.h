#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptIBlockPaletteItem; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptBlockPaletteSelectedItemChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3ddb33;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockPaletteSelectedItemChangeAfterEvent& operator=(ScriptBlockPaletteSelectedItemChangeAfterEvent const&);
    ScriptBlockPaletteSelectedItemChangeAfterEvent(ScriptBlockPaletteSelectedItemChangeAfterEvent const&);
    ScriptBlockPaletteSelectedItemChangeAfterEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
