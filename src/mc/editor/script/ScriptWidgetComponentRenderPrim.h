#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_AxialSphere; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Box; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Cone; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Cuboid; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Cylinder; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Disc; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Ellipsoid; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Line; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Pyramid; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_WireframeMesh; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrim : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 136> mUnk1f803b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrim& operator=(ScriptWidgetComponentRenderPrim const&);
    ScriptWidgetComponentRenderPrim(ScriptWidgetComponentRenderPrim const&);
    ScriptWidgetComponentRenderPrim();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentRenderPrim() /*override*/ = default;

    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentRenderPrim(
        ::Editor::ServiceProviderCollection&                                     serviceProviders,
        ::mce::UUID const&                                                       componentId,
        ::std::string const&                                                     componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner,
        ::Editor::ScriptModule::ScriptWidgetService&                             parentService,
        ::std::variant<
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Box,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Line,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Disc,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Cylinder,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Pyramid,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Ellipsoid,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Cuboid,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Cone,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_WireframeMesh>  primitiveType,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentRenderPrimOptions> options
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
    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                     serviceProviders,
        ::mce::UUID const&                                                       componentId,
        ::std::string const&                                                     componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner,
        ::Editor::ScriptModule::ScriptWidgetService&                             parentService,
        ::std::variant<
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Box,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Line,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Disc,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Cylinder,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Pyramid,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Ellipsoid,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Cuboid,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Cone,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_WireframeMesh>  primitiveType,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentRenderPrimOptions> options
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
