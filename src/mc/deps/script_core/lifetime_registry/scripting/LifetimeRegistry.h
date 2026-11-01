#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/HandleCache.h"
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandleValue.h"
#include "mc/deps/script_core/lifetime_registry/scripting/internal/TypeCache.h"
#include "mc/deps/script_core/runtime/scripting/ContextId.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ILifetimeObjectListener; }
namespace Scripting { class ILifetimeScopeListener; }
namespace Scripting { class IScriptRef; }
namespace Scripting { class LifetimeRegistryReference; }
namespace Scripting::internal { struct BaseScriptComponent; }
// clang-format on

namespace Scripting {

class LifetimeRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId>                                                mContextId;
    ::ll::TypedStorage<8, 8, ::Scripting::LifetimeRegistryReference&>                               mRegistryReference;
    ::ll::TypedStorage<8, 64, ::Scripting::internal::TypeCache>                                     mTypeCache;
    ::ll::TypedStorage<8, 304, ::entt::basic_registry<::Scripting::ObjectHandleValue>>              registry;
    ::ll::TypedStorage<8, 16, ::Scripting::ObjectHandle>                                            removingEntity;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Scripting::ILifetimeScopeListener>>                 mScopeListener;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::Scripting::ILifetimeObjectListener>>> mObjectListeners;
    ::ll::TypedStorage<8, 128, ::Scripting::HandleCache>                                            handleCache;
    // NOLINTEND

public:
    // prevent constructor by default
    LifetimeRegistry& operator=(LifetimeRegistry const&);
    LifetimeRegistry(LifetimeRegistry const&);
    LifetimeRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LifetimeRegistry(::Scripting::ContextId contextId, ::Scripting::LifetimeRegistryReference& registryRef);

    MCNAPI ::Scripting::ObjectHandle _createBaseObject(::Scripting::internal::BaseScriptComponent&& baseScriptComp);

    MCNAPI void
    _destroyObject(::Scripting::ObjectHandle handle, ::Scripting::internal::BaseScriptComponent& baseScriptComp);

    MCNAPI bool _doTypesMatch(::Scripting::ObjectHandle handle, ::entt::meta_type const& expectedType);

    MCNAPI void addReference(::Scripting::ObjectHandle handle);

    MCNAPI void destroyLifetimeScope(bool expectAllDead);

    MCNAPI ::Scripting::IScriptRef* getScriptRef(::Scripting::ObjectHandle handle);

    MCNAPI void removeObjectListener(::std::shared_ptr<::Scripting::ILifetimeObjectListener> strongListener);

    MCNAPI bool removeReference(::Scripting::ObjectHandle handle);

    MCNAPI ::entt::meta_any resolveAsAny(::Scripting::ObjectHandle handle);

    MCNAPI ::entt::meta_any resolveAsStrongTypedObjectHandle(::Scripting::ObjectHandle handle);

    MCNAPI ::entt::meta_any resolveAsTypedObjectHandle(::Scripting::ObjectHandle handle);

    MCNAPI ::entt::meta_any resolveAsWeakTypedObjectHandle(::Scripting::ObjectHandle handle);

    MCNAPI ::entt::meta_type const& resolvedType(::Scripting::ObjectHandle handle);

    MCNAPI void setScriptRef(::Scripting::ObjectHandle handle, ::std::unique_ptr<::Scripting::IScriptRef>&& scriptRef);

    MCNAPI bool valid(::Scripting::ObjectHandle const& handle);

    MCNAPI ~LifetimeRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ContextId contextId, ::Scripting::LifetimeRegistryReference& registryRef);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
