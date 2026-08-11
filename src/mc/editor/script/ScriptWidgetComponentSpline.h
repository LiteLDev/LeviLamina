#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/scripting/SplineType.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetErrorInvalidObject; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentSpline : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkbf7162;
    ::ll::UntypedStorage<8, 24> mUnkeedcc3;
    ::ll::UntypedStorage<8, 8>  mUnk45e317;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentSpline& operator=(ScriptWidgetComponentSpline const&);
    ScriptWidgetComponentSpline(ScriptWidgetComponentSpline const&);
    ScriptWidgetComponentSpline();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentSpline() /*override*/ = default;

    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        ::Scripting::RenderHelper::SplineType,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    getSplineType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Editor::Widgets::WidgetComponentType const $getComponentType() const;


    // NOLINTEND
};

} // namespace Editor::ScriptModule
