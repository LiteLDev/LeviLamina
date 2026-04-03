#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentRenderPrimTypeBase.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimType_Ellipsoid
: public ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimTypeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkaa784c;
    ::ll::UntypedStorage<4, 12> mUnk71129f;
    ::ll::UntypedStorage<8, 24> mUnkb9be6f;
    ::ll::UntypedStorage<4, 16> mUnk43dd8e;
    ::ll::UntypedStorage<4, 8>  mUnk8bdca9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimType_Ellipsoid& operator=(ScriptWidgetComponentRenderPrimType_Ellipsoid const&);
    ScriptWidgetComponentRenderPrimType_Ellipsoid(ScriptWidgetComponentRenderPrimType_Ellipsoid const&);
    ScriptWidgetComponentRenderPrimType_Ellipsoid();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentRenderPrimType_Ellipsoid() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Ellipsoid const& other) const;
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
