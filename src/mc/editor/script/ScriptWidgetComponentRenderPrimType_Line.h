#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentRenderPrimTypeBase.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimType_Line
: public ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimTypeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkee4fc3;
    ::ll::UntypedStorage<4, 12> mUnkbee1a6;
    ::ll::UntypedStorage<4, 24> mUnk9b94ae;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimType_Line& operator=(ScriptWidgetComponentRenderPrimType_Line const&);
    ScriptWidgetComponentRenderPrimType_Line(ScriptWidgetComponentRenderPrimType_Line const&);
    ScriptWidgetComponentRenderPrimType_Line();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentRenderPrimType_Line() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
