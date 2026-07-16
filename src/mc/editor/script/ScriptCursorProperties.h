#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptCursorProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk21a870;
    ::ll::UntypedStorage<8, 32> mUnka36c7d;
    ::ll::UntypedStorage<4, 8>  mUnk5cb736;
    ::ll::UntypedStorage<4, 8>  mUnk8b2361;
    ::ll::UntypedStorage<1, 2>  mUnka9244a;
    ::ll::UntypedStorage<4, 8>  mUnk85fa97;
    ::ll::UntypedStorage<1, 2>  mUnk7e4713;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCursorProperties& operator=(ScriptCursorProperties const&);
    ScriptCursorProperties(ScriptCursorProperties const&);
    ScriptCursorProperties();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptEnumsControlMode();

    MCNAPI static ::Scripting::EnumBinding bindScriptEnumsTargetMode();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
