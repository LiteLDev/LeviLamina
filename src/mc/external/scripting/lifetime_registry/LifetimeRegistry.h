#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ObjectHandle; }
namespace Scripting::internal { struct FetchAsAnyComponent; }
// clang-format on

namespace Scripting {

class LifetimeRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkcb6979;
    ::ll::UntypedStorage<8, 8>   mUnk217a0b;
    ::ll::UntypedStorage<8, 304> mUnkdff59e;
    ::ll::UntypedStorage<8, 16>  mUnk8cf060;
    ::ll::UntypedStorage<8, 24>  mUnk88d612;
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
    MCAPI ::Scripting::ObjectHandle _createBaseObject(::Scripting::internal::FetchAsAnyComponent&& fetchAny);

    MCAPI void _destroyObject(::Scripting::ObjectHandle handle, ::entt::meta_type type, uint size, bool tracked);

    MCAPI bool _doTypesMatch(::Scripting::ObjectHandle handle, ::entt::meta_type expectedType);

    MCAPI void addReference(::Scripting::ObjectHandle handle);

    MCAPI void destroyLifetimeScope(bool expectAllDead);

    MCAPI bool removeReference(::Scripting::ObjectHandle handle);

    MCAPI ::entt::meta_any resolveAsAny(::Scripting::ObjectHandle handle);

    MCAPI ::entt::meta_any resolveAsStrongTypedObjectHandle(::Scripting::ObjectHandle handle);

    MCAPI ::entt::meta_any resolveAsTypedObjectHandle(::Scripting::ObjectHandle handle);

    MCAPI ::entt::meta_any resolveAsWeakTypedObjectHandle(::Scripting::ObjectHandle handle);

    MCAPI ::entt::meta_type resolvedType(::Scripting::ObjectHandle handle);

    MCAPI bool valid(::Scripting::ObjectHandle const& handle);

    MCAPI ~LifetimeRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
