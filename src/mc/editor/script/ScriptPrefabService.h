#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Prefabs { struct PrefabDBInstanceInteractionEvent; }
namespace Editor::ScriptModule { class ScriptPrefabTemplateInstance; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidInstance; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorServiceError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPrefabService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1f4e57;
    ::ll::UntypedStorage<8, 8>  mUnk695a90;
    ::ll::UntypedStorage<8, 16> mUnkd311b8;
    ::ll::UntypedStorage<8, 16> mUnk89c3d7;
    ::ll::UntypedStorage<8, 16> mUnk14906d;
    ::ll::UntypedStorage<8, 16> mUnkcce71c;
    ::ll::UntypedStorage<8, 32> mUnkef299b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabService& operator=(ScriptPrefabService const&);
    ScriptPrefabService(ScriptPrefabService const&);
    ScriptPrefabService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrefabService();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrefabService(
        ::Editor::ServiceProviderCollection&  serviceProviders,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorServiceError> _beginCaptureMouseClicks();

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorServiceError>
    _clearSelectedPrefabInstances();

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _deletePrefabInstance(
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplateInstance> instance
    );

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _deselectPrefabInstance(
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplateInstance> instance
    );

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorServiceError> _endCaptureMouseClicks();

    MCNAPI void _handlePrefabInstanceInteractionEvent(::Editor::Prefabs::PrefabDBInstanceInteractionEvent const& event);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorServiceError>
    _shouldCaptureMouseClicks(bool active);
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
    $ctor(::Editor::ServiceProviderCollection& serviceProviders, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
