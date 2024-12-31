#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/editor/services/render_helper/PrimitiveType.h"
#include "mc/editor/services/widgets/WidgetComponentType.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

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
    ScriptWidgetComponentRenderPrim(ScriptWidgetComponentRenderPrim const&);
    ScriptWidgetComponentRenderPrim();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ScriptWidgetComponentRenderPrim() /*override*/ = default;

    // vIndex: 2
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetComponentRenderPrim(
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

    MCAPI ::Scripting::Result<
        ::Editor::RenderHelper::PrimitiveType,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _getPrimitiveType() const;

    MCAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent,
        ::Editor::ScriptModule::ScriptWidgetErrorInvalidObject>
    _setPrimitive(::std::variant<
                  ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Box,
                  ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Line,
                  ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Disc,
                  ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_AxialSphere> const& primitive);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentRenderPrim> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Editor::Widgets::WidgetComponentType const $getComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
