#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/editor/script/ScriptWidgetComponent_WidgetInterface.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentBaseOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetComponentStateChangeEventParameters; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentBase
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptWidgetComponentBase>,
  public ::Editor::ScriptModule::ScriptWidgetComponent_WidgetInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk677b3a;
    ::ll::UntypedStorage<8, 8>  mUnk9aec33;
    ::ll::UntypedStorage<1, 1>  mUnk3edffa;
    ::ll::UntypedStorage<8, 32> mUnke816e4;
    ::ll::UntypedStorage<8, 16> mUnk25ae07;
    ::ll::UntypedStorage<8, 32> mUnk236c64;
    ::ll::UntypedStorage<4, 12> mUnk2bdc64;
    ::ll::UntypedStorage<1, 1>  mUnk4f80ca;
    ::ll::UntypedStorage<1, 1>  mUnke2205c;
    ::ll::UntypedStorage<8, 88> mUnk53f0de;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentBase& operator=(ScriptWidgetComponentBase const&);
    ScriptWidgetComponentBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ScriptWidgetComponentBase();

    // vIndex: 2
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const = 0;

    // vIndex: 0
    virtual void _handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const& payload
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetComponentBase(::Editor::ScriptModule::ScriptWidgetComponentBase const&);

    MCAPI ScriptWidgetComponentBase(
        ::Editor::ServiceProviderCollection&                                      serviceProviders,
        ::mce::UUID const&                                                        componentId,
        ::std::string const&                                                      componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>  owner,
        ::Editor::ScriptModule::ScriptWidgetService&                              parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentBaseOptions> options
    );

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _deleteComponent();

    MCAPI ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> _getWidget() const;

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setChangeEventClosure(
        ::std::optional<
            ::Scripting::Closure<void(::Scripting::StrongTypedObjectHandle<
                                      ::Editor::ScriptModule::ScriptWidgetComponentStateChangeEventParameters>)>> const&
            closure
    );

    MCAPI void _setLockToSurface(bool lockToSurface);

    MCAPI void _setVisible(bool visible);

    MCAPI ::Vec3 const getWorldPosition() const;

    MCAPI void setPositionOffset(::Vec3 const& offset);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentBase> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentBase const&);

    MCAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                      serviceProviders,
        ::mce::UUID const&                                                        componentId,
        ::std::string const&                                                      componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>  owner,
        ::Editor::ScriptModule::ScriptWidgetService&                              parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentBaseOptions> options
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const& payload);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
