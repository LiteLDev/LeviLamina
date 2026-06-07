#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptCurrentThemeColorChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk11968c;
    ::ll::UntypedStorage<8, 24> mUnkf7d0e7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCurrentThemeColorChangeAfterEvent& operator=(ScriptCurrentThemeColorChangeAfterEvent const&);
    ScriptCurrentThemeColorChangeAfterEvent(ScriptCurrentThemeColorChangeAfterEvent const&);
    ScriptCurrentThemeColorChangeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptCurrentThemeColorChangeAfterEvent(::std::string colorKey, ::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ~ScriptCurrentThemeColorChangeAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string colorKey, ::ScriptModuleMinecraft::ScriptRGBA const& color);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
