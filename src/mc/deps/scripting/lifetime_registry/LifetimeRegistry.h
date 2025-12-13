#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/ObjectHandleValue.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IScriptRef; }
namespace Scripting { class LifetimeRegistryReference; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ObjectHandle; }
namespace Scripting::internal { struct BaseScriptComponent; }
// clang-format on

namespace Scripting {

class LifetimeRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkcb6979;
    ::ll::UntypedStorage<8, 8>   mUnk217a0b;
    ::ll::UntypedStorage<8, 64>  mUnke1f331;
    ::ll::UntypedStorage<8, 304> mUnkdff59e;
    ::ll::UntypedStorage<8, 16>  mUnk8cf060;
    ::ll::UntypedStorage<8, 16>  mUnkc52c09;
    ::ll::UntypedStorage<8, 24>  mUnkff5fe4;
    ::ll::UntypedStorage<8, 128> mUnk60fe14;
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

    MCNAPI void destroyLifetimeScope(bool expectAllDead);

    MCNAPI bool removeReference(::Scripting::ObjectHandle handle);

    MCNAPI ::entt::meta_any resolveAsAny(::Scripting::ObjectHandle handle);

    MCNAPI ::entt::meta_any resolveAsStrongTypedObjectHandle(::Scripting::ObjectHandle handle);

    MCNAPI ::entt::meta_any resolveAsTypedObjectHandle(::Scripting::ObjectHandle handle);

    MCNAPI ::entt::meta_any resolveAsWeakTypedObjectHandle(::Scripting::ObjectHandle handle);

    MCNAPI void setScriptRef(::Scripting::ObjectHandle handle, ::std::unique_ptr<::Scripting::IScriptRef>&& scriptRef);

    MCNAPI bool valid(::Scripting::ObjectHandle const& handle);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ContextId contextId, ::Scripting::LifetimeRegistryReference& registryRef);
    // NOLINTEND
};

} // namespace Scripting
