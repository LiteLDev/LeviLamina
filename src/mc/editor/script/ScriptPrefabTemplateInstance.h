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
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
namespace Editor::ScriptModule { class ScriptPrefabTemplate; }
namespace Editor::ScriptModule { class ScriptPrefabTemplateInstanceStructure; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidInstance; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidTemplate; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorServiceError; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorValueOutOfBounds; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabTemplateInstance
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPrefabTemplateInstance> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka010eb;
    ::ll::UntypedStorage<8, 8>  mUnk2592c4;
    ::ll::UntypedStorage<8, 16> mUnkb69079;
    ::ll::UntypedStorage<8, 16> mUnk8dcf92;
    ::ll::UntypedStorage<8, 16> mUnk5b8baa;
    ::ll::UntypedStorage<8, 16> mUnk4b94d0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateInstance& operator=(ScriptPrefabTemplateInstance const&);
    ScriptPrefabTemplateInstance(ScriptPrefabTemplateInstance const&);
    ScriptPrefabTemplateInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrefabTemplateInstance() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrefabTemplateInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef,
        ::Editor::ServiceProviderCollection&                 serviceProviders,
        ::Scripting::WeakLifetimeScope const&                scope
    );

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Scripting::Error>
    _bakeInstance();

    MCNAPI ::Scripting::Result<::Mirror, ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _getInstanceMirror() const;

    MCNAPI ::Scripting::Result<::Rotation, ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _getInstanceRotation() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance> _getPosition() const;

    MCNAPI ::Scripting::Result<
        ::std::vector<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplateInstanceStructure>>,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _getStructureRefs() const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabTemplate>,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getTemplate() const;

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _setInstanceMirror(::Mirror mirror);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance>
    _setInstanceRotation(::Rotation rotation);

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidInstance,
        ::Editor::ScriptModule::ScriptPrefabErrorValueOutOfBounds>
    _setPosition(::Vec3 const& position);
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
        ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> instanceRef,
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
