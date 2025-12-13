#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"

class EntityRegistry : public ::EnableGetWeakRef<::EntityRegistry>,
                       public ::std::enable_shared_from_this<::EntityRegistry> {
public:
    // EntityRegistry inner types define
    using Base = ::entt::basic_registry<::EntityId>;

    using BaseShared = ::std::enable_shared_from_this<::EntityRegistry>;

    using BaseWeak = ::EnableGetWeakRef<::EntityRegistry>;

    using EntityInvokeCallbackFunc = ::std::function<void(::EntityId)>;

    using EntityInvokeCallbackPair = ::std::pair<::std::function<void(::EntityId)>, ::std::function<void(::EntityId)>>;

    using EntityInvokeCallbackSig = void(::EntityId);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                       mDebugName;
    ::ll::TypedStorage<8, 304, ::entt::basic_registry<::EntityId>> mRegistry;
    ::ll::TypedStorage<4, 4, uint>                                 mId;
    ::ll::TypedStorage<8, 64, ::std::function<void(::EntityId)>>   mPreEntityInvoke;
    ::ll::TypedStorage<8, 64, ::std::function<void(::EntityId)>>   mPostEntityInvoke;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EntityRegistry(::std::string identifier);

    MCNAPI void postViewEachCount(uint64 count);

    MCNAPI ~EntityRegistry();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::atomic<uint>& mRegistryCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string identifier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
