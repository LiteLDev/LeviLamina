#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityId;
// clang-format on

class EntityRegistry : public ::EnableGetWeakRef<::EntityRegistry>,
                       public ::std::enable_shared_from_this<::EntityRegistry> {
public:
    // EntityRegistry inner types define
    using Base = ::entt::basic_registry<::EntityId>;

    using BaseWeak = ::EnableGetWeakRef<::EntityRegistry>;

    using BaseShared = ::std::enable_shared_from_this<::EntityRegistry>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                       mDebugName;
    ::ll::TypedStorage<8, 304, ::entt::basic_registry<::EntityId>> mRegistry;
    ::ll::TypedStorage<4, 4, uint>                                 mId;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityRegistry& operator=(EntityRegistry const&);
    EntityRegistry(EntityRegistry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EntityRegistry();

    MCAPI explicit EntityRegistry(::std::string identifier);

    MCAPI ::EntityContext _createEntity();

    MCAPI void _destroyEntity(::EntityContext entity);

    MCAPI ::WeakRef<::EntityRegistry> getWeakRef();

    MCAPI ~EntityRegistry();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::atomic<uint>& mRegistryCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::string identifier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
