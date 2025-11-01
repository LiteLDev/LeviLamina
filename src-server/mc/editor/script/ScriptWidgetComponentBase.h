#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/script/ScriptWidgetComponent_WidgetInterface.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentBaseOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentBase : public ::Editor::ScriptModule::ScriptWidgetComponent_WidgetInterface, public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptWidgetComponentBase> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk677b3a;
    ::ll::UntypedStorage<8, 8> mUnk9aec33;
    ::ll::UntypedStorage<1, 1> mUnk3edffa;
    ::ll::UntypedStorage<8, 32> mUnke816e4;
    ::ll::UntypedStorage<8, 16> mUnk25ae07;
    ::ll::UntypedStorage<8, 32> mUnk236c64;
    ::ll::UntypedStorage<4, 12> mUnk2bdc64;
    ::ll::UntypedStorage<1, 1> mUnk4f80ca;
    ::ll::UntypedStorage<1, 1> mUnke2205c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentBase& operator=(ScriptWidgetComponentBase const&);
    ScriptWidgetComponentBase(ScriptWidgetComponentBase const&);
    ScriptWidgetComponentBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~ScriptWidgetComponentBase();

    // vIndex: 3
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const = 0;

    // vIndex: 0
    virtual void _handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const&) /*override*/;

    // vIndex: 1
    virtual void _onOwnerPositionUpdate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentBase(::Editor::ServiceProviderCollection& serviceProviders, ::mce::UUID const& componentId, ::std::string const& componentName, ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner, ::Editor::ScriptModule::ScriptWidgetService& parentService, ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentBaseOptions> options);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _deleteComponent();

    MCNAPI ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> _getWidget() const;

    MCNAPI void _setLockToSurface(bool lockToSurface);

    MCNAPI void _setVisible(bool visible);

    MCNAPI ::Vec3 const getWorldPosition() const;

    MCNAPI void setPositionOffset(::Vec3 const& offset);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& serviceProviders, ::mce::UUID const& componentId, ::std::string const& componentName, ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner, ::Editor::ScriptModule::ScriptWidgetService& parentService, ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentBaseOptions> options);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const&);

    MCNAPI void $_onOwnerPositionUpdate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
