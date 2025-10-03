#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/editor/WidgetComponentType.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentGuideSensorOptions; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentGuideSensor : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // prevent constructor by default
    ScriptWidgetComponentGuideSensor& operator=(ScriptWidgetComponentGuideSensor const&);
    ScriptWidgetComponentGuideSensor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~ScriptWidgetComponentGuideSensor() /*override*/ = default;

    // vIndex: 3
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentGuideSensor(::Editor::ScriptModule::ScriptWidgetComponentGuideSensor const&);

    MCNAPI ScriptWidgetComponentGuideSensor(
        ::Editor::ServiceProviderCollection&                                             serviceProviders,
        ::mce::UUID const&                                                               componentId,
        ::std::string const&                                                             componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>         owner,
        ::Editor::ScriptModule::ScriptWidgetService&                                     parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentGuideSensorOptions> options
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentGuideSensor const&);

    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                             serviceProviders,
        ::mce::UUID const&                                                               componentId,
        ::std::string const&                                                             componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>         owner,
        ::Editor::ScriptModule::ScriptWidgetService&                                     parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentGuideSensorOptions> options
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Editor::Widgets::WidgetComponentType const $getComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
