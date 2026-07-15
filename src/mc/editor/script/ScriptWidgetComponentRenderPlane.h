#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPlane : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk74e189;
    ::ll::UntypedStorage<8, 24> mUnk403d4e;
    ::ll::UntypedStorage<8, 24> mUnk6948e8;
    ::ll::UntypedStorage<4, 4>  mUnkbf2907;
    ::ll::UntypedStorage<4, 4>  mUnk92476b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPlane& operator=(ScriptWidgetComponentRenderPlane const&);
    ScriptWidgetComponentRenderPlane(ScriptWidgetComponentRenderPlane const&);
    ScriptWidgetComponentRenderPlane();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentRenderPlane() /*override*/ = default;

    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
