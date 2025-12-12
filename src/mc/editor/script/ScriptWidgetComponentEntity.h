#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentEntityOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentEntity : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkf99162;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentEntity& operator=(ScriptWidgetComponentEntity const&);
    ScriptWidgetComponentEntity();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentEntity() /*override*/ = default;

    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentEntity(::Editor::ScriptModule::ScriptWidgetComponentEntity const&);

    MCNAPI ScriptWidgetComponentEntity(
        ::Editor::ServiceProviderCollection&                                        serviceProviders,
        ::mce::UUID const&                                                          componentId,
        ::std::string const&                                                        componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>    owner,
        ::Editor::ScriptModule::ScriptWidgetService&                                parentService,
        ::std::string const&                                                        actorNameId,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentEntityOptions> options
    );

    MCNAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getClickable() const;

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _playAnimation(::std::string const& animationName);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setClickable(bool clickable);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentEntity const&);

    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                        serviceProviders,
        ::mce::UUID const&                                                          componentId,
        ::std::string const&                                                        componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>    owner,
        ::Editor::ScriptModule::ScriptWidgetService&                                parentService,
        ::std::string const&                                                        actorNameId,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentEntityOptions> options
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
