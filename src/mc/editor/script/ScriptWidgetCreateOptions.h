#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptWidgetCreateOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk682969;
    ::ll::UntypedStorage<1, 2>  mUnk9c524c;
    ::ll::UntypedStorage<4, 8>  mUnk8984bf;
    ::ll::UntypedStorage<4, 16> mUnke60091;
    ::ll::UntypedStorage<1, 2>  mUnk91901b;
    ::ll::UntypedStorage<1, 2>  mUnkebb8cf;
    ::ll::UntypedStorage<1, 2>  mUnkdf15ce;
    ::ll::UntypedStorage<8, 96> mUnkd41faf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetCreateOptions(ScriptWidgetCreateOptions const&);
    ScriptWidgetCreateOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetCreateOptions(::Editor::ScriptModule::ScriptWidgetCreateOptions&&);

    MCAPI ::Editor::ScriptModule::ScriptWidgetCreateOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetCreateOptions const&);

    MCAPI ~ScriptWidgetCreateOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetCreateOptions> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetCreateOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
