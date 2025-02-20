#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/editor/script/ScriptWidgetComponentRenderPrimTypeBase.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimType_Box : public ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimTypeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk5221be;
    ::ll::UntypedStorage<4, 16> mUnk3d8d45;
    ::ll::UntypedStorage<4, 24> mUnk6f250e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimType_Box& operator=(ScriptWidgetComponentRenderPrimType_Box const&);
    ScriptWidgetComponentRenderPrimType_Box(ScriptWidgetComponentRenderPrimType_Box const&);
    ScriptWidgetComponentRenderPrimType_Box();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptWidgetComponentRenderPrimType_Box() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Box>
    bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
