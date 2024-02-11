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
    // symbol: ??0LifetimeRegistry@Scripting@@QEAA@UContextId@1@AEAVLifetimeRegistryReference@1@@Z
    MCAPI LifetimeRegistry(struct Scripting::ContextId, class Scripting::LifetimeRegistryReference&);

    // symbol: ?addReference@LifetimeRegistry@Scripting@@QEAAXUObjectHandle@2@@Z
    MCAPI void addReference(struct Scripting::ObjectHandle handle);

    // symbol: ?destroyLifetimeScope@LifetimeRegistry@Scripting@@QEAAX_N@Z
    MCAPI void destroyLifetimeScope(bool);

    // symbol: ?removeReference@LifetimeRegistry@Scripting@@QEAA_NUObjectHandle@2@@Z
    MCAPI bool removeReference(struct Scripting::ObjectHandle handle);

    // symbol: ?resolveAsAny@LifetimeRegistry@Scripting@@QEAA?AVmeta_any@entt@@UObjectHandle@2@@Z
    MCAPI entt::meta_any resolveAsAny(struct Scripting::ObjectHandle handle);

    // symbol: ?resolveAsStrongTypedObjectHandle@LifetimeRegistry@Scripting@@QEAA?AVmeta_any@entt@@UObjectHandle@2@@Z
    MCAPI entt::meta_any resolveAsStrongTypedObjectHandle(struct Scripting::ObjectHandle handle);

    // symbol: ?resolveAsTypedObjectHandle@LifetimeRegistry@Scripting@@QEAA?AVmeta_any@entt@@UObjectHandle@2@@Z
    MCAPI entt::meta_any resolveAsTypedObjectHandle(struct Scripting::ObjectHandle handle);

    // symbol: ?resolveAsWeakTypedObjectHandle@LifetimeRegistry@Scripting@@QEAA?AVmeta_any@entt@@UObjectHandle@2@@Z
    MCAPI entt::meta_any resolveAsWeakTypedObjectHandle(struct Scripting::ObjectHandle handle);

    // symbol: ?resolvedType@LifetimeRegistry@Scripting@@QEAA?AVmeta_type@entt@@UObjectHandle@2@@Z
    MCAPI entt::meta_type resolvedType(struct Scripting::ObjectHandle handle);

    // symbol: ?valid@LifetimeRegistry@Scripting@@QEAA_NAEBUObjectHandle@2@@Z
    MCAPI bool valid(struct Scripting::ObjectHandle const& handle);

    // symbol: ??1LifetimeRegistry@Scripting@@QEAA@XZ
    MCAPI ~LifetimeRegistry();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createBaseObject@LifetimeRegistry@Scripting@@AEAA?AUObjectHandle@2@$$QEAUFetchAsAnyComponent@internal@2@@Z
    MCAPI struct Scripting::ObjectHandle _createBaseObject(struct Scripting::internal::FetchAsAnyComponent&&);

    // symbol: ?_destroyObject@LifetimeRegistry@Scripting@@AEAAXUObjectHandle@2@Vmeta_type@entt@@I_N@Z
    MCAPI void _destroyObject(struct Scripting::ObjectHandle handle, entt::meta_type type, uint size, bool);

    // symbol: ?_doTypesMatch@LifetimeRegistry@Scripting@@AEAA_NUObjectHandle@2@Vmeta_type@entt@@@Z
    MCAPI bool _doTypesMatch(struct Scripting::ObjectHandle handle, entt::meta_type expectedType);

    // NOLINTEND
};

}; // namespace Scripting
