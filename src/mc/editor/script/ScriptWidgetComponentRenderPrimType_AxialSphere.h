#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentRenderPrimTypeBase.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimType_AxialSphere
: public ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimTypeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk46ccae;
    ::ll::UntypedStorage<4, 12> mUnk799ee6;
    ::ll::UntypedStorage<4, 4>  mUnk1d30da;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimType_AxialSphere& operator=(ScriptWidgetComponentRenderPrimType_AxialSphere const&);
    ScriptWidgetComponentRenderPrimType_AxialSphere(ScriptWidgetComponentRenderPrimType_AxialSphere const&);
    ScriptWidgetComponentRenderPrimType_AxialSphere();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
