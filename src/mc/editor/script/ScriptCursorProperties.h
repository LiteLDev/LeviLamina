#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/cursor/ControlMode.h"
#include "mc/editor/cursor/TargetMode.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Cursor { struct CursorState; }
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
    ScriptCursorProperties& operator=(ScriptCursorProperties const&);
    ScriptCursorProperties(ScriptCursorProperties const&);
    ScriptCursorProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptCursorProperties(::Editor::Cursor::CursorState const& stateToCopy);

    MCAPI ::Editor::ScriptModule::ScriptCursorProperties& operator=(::Editor::ScriptModule::ScriptCursorProperties&&);

    MCAPI ~ScriptCursorProperties();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptCursorProperties> bindScript();

    MCAPI static ::Scripting::EnumBindingBuilder<::Editor::Cursor::ControlMode, ::Editor::Cursor::ControlMode>
    bindScriptEnumsControlMode();

    MCAPI static ::Scripting::EnumBindingBuilder<::Editor::Cursor::TargetMode, ::Editor::Cursor::TargetMode>
    bindScriptEnumsTargetMode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::Cursor::CursorState const& stateToCopy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
