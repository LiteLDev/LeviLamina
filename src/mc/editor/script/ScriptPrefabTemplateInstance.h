#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
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
};

} // namespace Editor::ScriptModule
