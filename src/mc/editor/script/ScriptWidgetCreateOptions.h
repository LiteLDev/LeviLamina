#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetCreateOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnk682969;
    ::ll::UntypedStorage<1, 2>   mUnk9c524c;
    ::ll::UntypedStorage<4, 8>   mUnk8984bf;
    ::ll::UntypedStorage<4, 16>  mUnke60091;
    ::ll::UntypedStorage<1, 2>   mUnk91901b;
    ::ll::UntypedStorage<1, 2>   mUnkebb8cf;
    ::ll::UntypedStorage<1, 2>   mUnkdf15ce;
    ::ll::UntypedStorage<8, 40>  mUnk45e023;
    ::ll::UntypedStorage<4, 16>  mUnk41ac7c;
    ::ll::UntypedStorage<4, 16>  mUnkfc3427;
    ::ll::UntypedStorage<8, 240> mUnkd41faf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetCreateOptions& operator=(ScriptWidgetCreateOptions const&);
    ScriptWidgetCreateOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetCreateOptions(::Editor::ScriptModule::ScriptWidgetCreateOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetCreateOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetCreateOptions&&);

    MCNAPI ~ScriptWidgetCreateOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetCreateOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
