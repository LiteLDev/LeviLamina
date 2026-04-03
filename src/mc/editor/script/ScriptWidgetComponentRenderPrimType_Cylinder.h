#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentRenderPrimTypeBase.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimType_Cylinder
: public ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimTypeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk9db9fe;
    ::ll::UntypedStorage<4, 4>  mUnk51de22;
    ::ll::UntypedStorage<4, 4>  mUnk62b89d;
    ::ll::UntypedStorage<4, 4>  mUnk3a43b0;
    ::ll::UntypedStorage<8, 24> mUnk72e659;
    ::ll::UntypedStorage<4, 16> mUnkac0b82;
    ::ll::UntypedStorage<4, 8>  mUnkfe03d6;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimType_Cylinder& operator=(ScriptWidgetComponentRenderPrimType_Cylinder const&);
    ScriptWidgetComponentRenderPrimType_Cylinder(ScriptWidgetComponentRenderPrimType_Cylinder const&);
    ScriptWidgetComponentRenderPrimType_Cylinder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentRenderPrimType_Cylinder() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Cylinder const& other) const;
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
