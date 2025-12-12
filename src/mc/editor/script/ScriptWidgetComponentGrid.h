#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/scripting/Plane.h"

// auto generated forward declare list
// clang-format off
class Vec2;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetComponentGridOptions; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentGrid : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk807d84;
    ::ll::UntypedStorage<4, 24> mUnk41e8fa;
    ::ll::UntypedStorage<4, 8>  mUnk3010d0;
    ::ll::UntypedStorage<4, 8>  mUnk93b547;
    ::ll::UntypedStorage<4, 8>  mUnkc7a48b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentGrid& operator=(ScriptWidgetComponentGrid const&);
    ScriptWidgetComponentGrid();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentGrid() /*override*/ = default;

    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentGrid(::Editor::ScriptModule::ScriptWidgetComponentGrid const&);

    MCNAPI ScriptWidgetComponentGrid(
        ::Editor::ServiceProviderCollection&                                      serviceProviders,
        ::mce::UUID const&                                                        componentId,
        ::std::string const&                                                      componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>  owner,
        ::Editor::ScriptModule::ScriptWidgetService&                              parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentGridOptions> options
    );

    MCNAPI ::Scripting::
        Result<::ScriptModuleMinecraft::ScriptRGBA, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
        _getGridColor() const;

    MCNAPI ::Scripting::Result<::Vec2, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getGridCount() const;

    MCNAPI ::Scripting::Result<::Vec2, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getGridSize() const;

    MCNAPI ::Scripting::Result<::Scripting::Plane, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getPlane() const;

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setGridColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setGridCount(::Vec2 const& gridCount);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setGridSize(::Vec2 const& gridSize);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setPlane(::Scripting::Plane plane);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentGrid const&);

    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                      serviceProviders,
        ::mce::UUID const&                                                        componentId,
        ::std::string const&                                                      componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>  owner,
        ::Editor::ScriptModule::ScriptWidgetService&                              parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentGridOptions> options
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
