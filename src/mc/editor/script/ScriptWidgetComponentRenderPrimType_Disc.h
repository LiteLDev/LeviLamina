#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/editor/script/ScriptWidgetComponentRenderPrimTypeBase.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimType_Disc
: public ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimTypeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk7d8c77;
    ::ll::UntypedStorage<4, 4>  mUnk158816;
    ::ll::UntypedStorage<4, 24> mUnkfaf47b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimType_Disc& operator=(ScriptWidgetComponentRenderPrimType_Disc const&);
    ScriptWidgetComponentRenderPrimType_Disc(ScriptWidgetComponentRenderPrimType_Disc const&);
    ScriptWidgetComponentRenderPrimType_Disc();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptWidgetComponentRenderPrimType_Disc() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Disc>
    bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
