#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetService_GroupInterface.h"
#include "mc/editor/script/ScriptWidgetService_WidgetInterface.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class AABB;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetGroup; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetService : public ::Editor::ScriptModule::ScriptWidgetService_GroupInterface,
                            public ::Editor::ScriptModule::ScriptWidgetService_WidgetInterface,
                            public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptWidgetService>,
                            public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkce6b5a;
    ::ll::UntypedStorage<8, 8>  mUnk982857;
    ::ll::UntypedStorage<8, 16> mUnkeac1e7;
    ::ll::UntypedStorage<8, 8>  mUnk64880d;
    ::ll::UntypedStorage<4, 24> mUnke6f179;
    ::ll::UntypedStorage<8, 16> mUnk166fd8;
    ::ll::UntypedStorage<8, 64> mUnk174897;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetService& operator=(ScriptWidgetService const&);
    ScriptWidgetService(ScriptWidgetService const&);
    ScriptWidgetService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetService() = default;

    virtual ::Scripting::Result_deprecated<void>
        _groupDeleteGroup(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup>) /*override*/;

    virtual ::AABB const& _getDimensionBounds() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetService(
        ::Editor::ServiceProviderCollection&  serviceProviderCollection,
        ::Scripting::WeakLifetimeScope const& scope
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
    MCNAPI void*
    $ctor(::Editor::ServiceProviderCollection& serviceProviderCollection, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
