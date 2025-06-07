#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentEntityOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk5d2487;
    ::ll::UntypedStorage<8, 40> mUnk681d5f;
    ::ll::UntypedStorage<8, 40> mUnk7e3143;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentEntityOptions& operator=(ScriptWidgetComponentEntityOptions const&);
    ScriptWidgetComponentEntityOptions(ScriptWidgetComponentEntityOptions const&);
    ScriptWidgetComponentEntityOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptWidgetComponentEntityOptions() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentEntityOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentEntityOptions&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
