#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/editor/services/widgets/WidgetComponentType.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/WeakTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentTextOptions; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentText : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfe95d9;
    ::ll::UntypedStorage<4, 24> mUnk7e685f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentText& operator=(ScriptWidgetComponentText const&);
    ScriptWidgetComponentText(ScriptWidgetComponentText const&);
    ScriptWidgetComponentText();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ScriptWidgetComponentText() /*override*/ = default;

    // vIndex: 2
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetComponentText(
        ::Editor::ServiceProviderCollection&                                      serviceProviders,
        ::mce::UUID const&                                                        componentId,
        ::std::string const&                                                      componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>  owner,
        ::Editor::ScriptModule::ScriptWidgetService&                              parentService,
        ::std::string const&                                                      textString,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentTextOptions> options
    );

    MCAPI void _setColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCAPI void _setTextString(::std::string const& textString);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentText> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                      serviceProviders,
        ::mce::UUID const&                                                        componentId,
        ::std::string const&                                                      componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>  owner,
        ::Editor::ScriptModule::ScriptWidgetService&                              parentService,
        ::std::string const&                                                      textString,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentTextOptions> options
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
