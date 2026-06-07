#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentTextOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk40e2a4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentTextOptions& operator=(ScriptWidgetComponentTextOptions const&);
    ScriptWidgetComponentTextOptions(ScriptWidgetComponentTextOptions const&);
    ScriptWidgetComponentTextOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_COLOR();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
