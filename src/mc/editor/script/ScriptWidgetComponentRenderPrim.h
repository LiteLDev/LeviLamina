#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/scripting/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_AxialSphere; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Box; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Disc; }
namespace Editor::ScriptModule { class ScriptWidgetComponentRenderPrimType_Line; }
namespace Editor::ScriptModule { class ScriptWidgetErrorInvalidObject; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrim : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 80> mUnkf7b516;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrim& operator=(ScriptWidgetComponentRenderPrim const&);
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
    MCNAPI ScriptWidgetComponentRenderPrim(::Editor::ScriptModule::ScriptWidgetComponentRenderPrim const&);

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
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere>    primitiveType,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentRenderPrimOptions> options
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::RenderHelper::PrimitiveType,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _getPrimitiveType() const;

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _setPrimitive(
        ::std::variant<
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Box,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Line,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Disc,
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere> const& primitive
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
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentRenderPrim const&);

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
            ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere>    primitiveType,
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
