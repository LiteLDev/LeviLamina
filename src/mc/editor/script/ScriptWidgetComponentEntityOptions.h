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
    ::ll::UntypedStorage<8, 40> mUnk29bece;
    ::ll::UntypedStorage<8, 40> mUnk3df1ca;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentEntityOptions& operator=(ScriptWidgetComponentEntityOptions const&);
    ScriptWidgetComponentEntityOptions(ScriptWidgetComponentEntityOptions const&);
    ScriptWidgetComponentEntityOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
