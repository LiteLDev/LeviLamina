#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimTypeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk441514;
    ::ll::UntypedStorage<4, 4> mUnk57358b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimTypeBase& operator=(ScriptWidgetComponentRenderPrimTypeBase const&);
    ScriptWidgetComponentRenderPrimTypeBase(ScriptWidgetComponentRenderPrimTypeBase const&);
    ScriptWidgetComponentRenderPrimTypeBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptWidgetComponentRenderPrimTypeBase() = default;
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

}
