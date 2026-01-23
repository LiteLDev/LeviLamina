#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
namespace Editor::ScriptModule { class ScriptPrefabTemplateStructure; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidInstance; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidTemplate; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidTemplateStructure; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorServiceError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabTemplateInstanceStructure
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPrefabTemplateInstanceStructure> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdb779d;
    ::ll::UntypedStorage<8, 8>  mUnkd34a82;
    ::ll::UntypedStorage<8, 16> mUnk442333;
    ::ll::UntypedStorage<8, 16> mUnkae160a;
    ::ll::UntypedStorage<8, 16> mUnk95edfd;
    ::ll::UntypedStorage<8, 16> mUnk1fac14;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateInstanceStructure& operator=(ScriptPrefabTemplateInstanceStructure const&);
    ScriptPrefabTemplateInstanceStructure(ScriptPrefabTemplateInstanceStructure const&);
    ScriptPrefabTemplateInstanceStructure();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrefabTemplateInstanceStructure() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrefabTemplateInstanceStructure(
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> prefabInstanceRef,
        ::mce::UUID const&                                   prefabStructureId,
        ::Editor::ServiceProviderCollection&                 serviceProviders,
        ::Scripting::WeakLifetimeScope const&                scope
    );

    MCNAPI ::Scripting::Result<::Mirror, ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _getInstanceMirror() const;

    MCNAPI ::Scripting::Result<::Rotation, ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _getInstanceRotation() const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplateStructure>,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplateStructure,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _getTemplateStructure();

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _setInstanceMirror(::Mirror mirror);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _setInstanceRotation(::Rotation rotation);
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
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> prefabInstanceRef,
        ::mce::UUID const&                                   prefabStructureId,
        ::Editor::ServiceProviderCollection&                 serviceProviders,
        ::Scripting::WeakLifetimeScope const&                scope
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
