#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/editor/script/ScriptWidgetComponentRenderPrimTypeBase.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimType_AxialSphere
: public ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimTypeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnk46ccae;
    ::ll::UntypedStorage<4, 12> mUnk799ee6;
    ::ll::UntypedStorage<4, 4>  mUnk1d30da;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimType_AxialSphere(ScriptWidgetComponentRenderPrimType_AxialSphere const&);
    ScriptWidgetComponentRenderPrimType_AxialSphere();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptWidgetComponentRenderPrimType_AxialSphere() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere const&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<
        ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere>
    bindScript();
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
