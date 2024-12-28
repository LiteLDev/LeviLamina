#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentRenderPrimTypeBase.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

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
    // vIndex: 0
    virtual ~ScriptWidgetComponentRenderPrimType_Line() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Line const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Line>
    bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
