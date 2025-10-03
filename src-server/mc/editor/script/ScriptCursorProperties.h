#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Cursor { struct CursorState; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptCursorProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnk21a870;
    ::ll::UntypedStorage<4, 32> mUnka36c7d;
    ::ll::UntypedStorage<4, 8>  mUnk5cb736;
    ::ll::UntypedStorage<4, 8>  mUnk8b2361;
    ::ll::UntypedStorage<1, 2>  mUnka9244a;
    ::ll::UntypedStorage<4, 8>  mUnk85fa97;
    ::ll::UntypedStorage<1, 2>  mUnk7e4713;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCursorProperties(ScriptCursorProperties const&);
    ScriptCursorProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptCursorProperties(::Editor::Cursor::CursorState const& stateToCopy);

    MCNAPI ::Editor::ScriptModule::ScriptCursorProperties& operator=(::Editor::ScriptModule::ScriptCursorProperties&&);

    MCNAPI ::Editor::ScriptModule::ScriptCursorProperties&
    operator=(::Editor::ScriptModule::ScriptCursorProperties const&);

    MCNAPI ~ScriptCursorProperties();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindScriptEnumsControlMode();

    MCNAPI static ::Scripting::EnumBinding bindScriptEnumsTargetMode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Cursor::CursorState const& stateToCopy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
