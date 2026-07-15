#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/editor/script/ScriptWidget_ComponentInterface.h"
#include "mc/editor/script/ScriptWidget_GroupInterface.h"
#include "mc/editor/script/ScriptWidget_ServiceInterface.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::Network { class WidgetStateChangePayload; }
namespace Editor::ScriptModule { class ScriptWidgetComponentBase; }
namespace Editor::ScriptModule { class ScriptWidgetCreateOptions; }
namespace Editor::ScriptModule { class ScriptWidgetGroup; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidget : public ::Editor::ScriptModule::ScriptWidget_GroupInterface,
                     public ::Editor::ScriptModule::ScriptWidget_ServiceInterface,
                     public ::Editor::ScriptModule::ScriptWidget_ComponentInterface,
                     public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptWidget> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk3fd115;
    ::ll::UntypedStorage<8, 8>   mUnkc2fe43;
    ::ll::UntypedStorage<8, 8>   mUnke49379;
    ::ll::UntypedStorage<1, 1>   mUnk46d2f6;
    ::ll::UntypedStorage<8, 16>  mUnk20db35;
    ::ll::UntypedStorage<8, 32>  mUnkded1eb;
    ::ll::UntypedStorage<4, 12>  mUnka64629;
    ::ll::UntypedStorage<1, 1>   mUnk281f36;
    ::ll::UntypedStorage<1, 1>   mUnkca16b6;
    ::ll::UntypedStorage<1, 1>   mUnk495ae4;
    ::ll::UntypedStorage<1, 1>   mUnk50a450;
    ::ll::UntypedStorage<4, 4>   mUnk256c17;
    ::ll::UntypedStorage<4, 12>  mUnkb83306;
    ::ll::UntypedStorage<1, 1>   mUnkd3135e;
    ::ll::UntypedStorage<1, 1>   mUnk3faea0;
    ::ll::UntypedStorage<1, 1>   mUnk1d10b8;
    ::ll::UntypedStorage<1, 1>   mUnkcc57da;
    ::ll::UntypedStorage<8, 32>  mUnkd72480;
    ::ll::UntypedStorage<4, 24>  mUnk8b3e64;
    ::ll::UntypedStorage<4, 4>   mUnkd94f43;
    ::ll::UntypedStorage<1, 1>   mUnk3f5c44;
    ::ll::UntypedStorage<4, 8>   mUnkbeb243;
    ::ll::UntypedStorage<8, 112> mUnk30dd27;
    ::ll::UntypedStorage<8, 64>  mUnk50bcf6;
    ::ll::UntypedStorage<8, 24>  mUnka95670;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidget& operator=(ScriptWidget const&);
    ScriptWidget(ScriptWidget const&);
    ScriptWidget();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidget() = default;

    virtual ::AABB const& _getWorldBounds() const /*override*/;

    virtual void _performDeleteWidget(bool) /*override*/;

    virtual void _setValid(bool) /*override*/;

    virtual void _handleWidgetStateChangePayload(::Editor::Network::WidgetStateChangePayload const&) /*override*/;

    virtual void
    _handleWidgetComponentStateChangePayload(::Editor::Network::WidgetComponentStateChangePayload const&) /*override*/;

    virtual void _servicePendingStateChanges() /*override*/;

    virtual void _setSelectedNoBroadcast(bool) /*override*/;

    virtual ::Scripting::WeakLifetimeScope& _getScope() /*override*/;

    virtual void _deleteComponent(::mce::UUID const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ScriptWidget(
        ::Editor::ServiceProviderCollection&                                          serviceProviders,
        ::Editor::ScriptModule::ScriptWidgetService&                                  parentService,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup> group,
        ::Vec3 const&                                                                 position,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetCreateOptions> const&     options,
        ::Scripting::WeakLifetimeScope const&                                         scope
    );
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                          serviceProviders,
        ::Editor::ScriptModule::ScriptWidgetService&                                  parentService,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup> group,
        ::Vec3 const&                                                                 position,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetCreateOptions> const&     options,
        ::Scripting::WeakLifetimeScope const&                                         scope
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
