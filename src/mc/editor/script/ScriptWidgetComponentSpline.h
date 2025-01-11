#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/editor/services/render_helper/SplineType.h"
#include "mc/editor/services/widgets/WidgetComponentType.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetComponentSplineOptions; }
namespace Editor::ScriptModule { class ScriptWidgetErrorInvalidObject; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace Scripting { struct Error; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentSpline : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb72cb3;
    ::ll::UntypedStorage<8, 24> mUnk4ae7ae;
    ::ll::UntypedStorage<8, 8>  mUnkf926f3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentSpline& operator=(ScriptWidgetComponentSpline const&);
    ScriptWidgetComponentSpline(ScriptWidgetComponentSpline const&);
    ScriptWidgetComponentSpline();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ScriptWidgetComponentSpline() /*override*/ = default;

    // vIndex: 2
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetComponentSpline(
        ::Editor::ServiceProviderCollection&                                        serviceProviders,
        ::mce::UUID const&                                                          componentId,
        ::std::string const&                                                        componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>    owner,
        ::Editor::ScriptModule::ScriptWidgetService&                                parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentSplineOptions> options
    );

    MCAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>>,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Scripting::Error>
    _getControlPoints() const;

    MCAPI ::Scripting::Result<
        ::std::vector<::Vec3>,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject,
        ::Scripting::Error>
    _getInterpolatedPoints(::std::optional<int> maxPointsPerControlSegment);

    MCAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _setControlPoints(
        ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>> const& points
    );

    MCAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _setSplineType(::Editor::RenderHelper::SplineType t);

    MCAPI void _setupSplineHelper();

    MCAPI ::Scripting::Result<
        ::Editor::RenderHelper::SplineType,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    getSplineType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentSpline> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                        serviceProviders,
        ::mce::UUID const&                                                          componentId,
        ::std::string const&                                                        componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>    owner,
        ::Editor::ScriptModule::ScriptWidgetService&                                parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentSplineOptions> options
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Editor::Widgets::WidgetComponentType const $getComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
