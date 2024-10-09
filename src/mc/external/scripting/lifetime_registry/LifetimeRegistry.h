#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistryReference; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ObjectHandle; }
namespace Scripting::internal { struct FetchAsAnyComponent; }
// clang-format on

namespace Scripting {

class LifetimeRegistry {
public:
    // prevent constructor by default
    LifetimeRegistry& operator=(LifetimeRegistry const&);
    LifetimeRegistry(LifetimeRegistry const&);
    LifetimeRegistry();

public:
    // NOLINTBEGIN
    MCAPI
    LifetimeRegistry(struct Scripting::ContextId contextId, class Scripting::LifetimeRegistryReference& registryRef);

    MCAPI void addReference(struct Scripting::ObjectHandle handle);

    MCAPI void destroyLifetimeScope(bool expectAllDead);

    MCAPI bool removeReference(struct Scripting::ObjectHandle handle);

    MCAPI entt::meta_any resolveAsAny(struct Scripting::ObjectHandle handle);

    MCAPI entt::meta_any resolveAsStrongTypedObjectHandle(struct Scripting::ObjectHandle handle);

    MCAPI entt::meta_any resolveAsTypedObjectHandle(struct Scripting::ObjectHandle handle);

    MCAPI entt::meta_any resolveAsWeakTypedObjectHandle(struct Scripting::ObjectHandle handle);

    MCAPI entt::meta_type resolvedType(struct Scripting::ObjectHandle handle);

    MCAPI bool valid(struct Scripting::ObjectHandle const& handle);

    MCAPI ~LifetimeRegistry();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct Scripting::ObjectHandle _createBaseObject(struct Scripting::internal::FetchAsAnyComponent&& fetchAny);

    MCAPI void _destroyObject(struct Scripting::ObjectHandle handle, entt::meta_type type, uint size, bool tracked);

    MCAPI bool _doTypesMatch(struct Scripting::ObjectHandle handle, entt::meta_type expectedType);

    // NOLINTEND
};

}; // namespace Scripting
