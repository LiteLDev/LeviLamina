#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentRenderPrimTypeBase.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimType_WireframeMesh
: public ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimTypeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk962bfd;
    ::ll::UntypedStorage<8, 32> mUnk3850a2;
    ::ll::UntypedStorage<8, 24> mUnkf4057e;
    ::ll::UntypedStorage<4, 16> mUnk307730;
    ::ll::UntypedStorage<4, 16> mUnkf5b54e;
    ::ll::UntypedStorage<4, 8>  mUnkab9162;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimType_WireframeMesh&
    operator=(ScriptWidgetComponentRenderPrimType_WireframeMesh const&);
    ScriptWidgetComponentRenderPrimType_WireframeMesh(ScriptWidgetComponentRenderPrimType_WireframeMesh const&);
    ScriptWidgetComponentRenderPrimType_WireframeMesh();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
