#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/inventory/ActorContainerType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Container;
struct ActorUniqueID;
struct ContainerRuntimeIdTag;
// clang-format on

class ContainerWeakRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkabc989;
    ::ll::UntypedStorage<4, 4>  mUnk8eeae7;
    ::ll::UntypedStorage<4, 12> mUnk89aa5f;
    ::ll::UntypedStorage<4, 4>  mUnk65441a;
    ::ll::UntypedStorage<8, 16> mUnkbf5130;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerWeakRef& operator=(ContainerWeakRef const&);
    ContainerWeakRef(ContainerWeakRef const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerWeakRef();

    MCAPI explicit ContainerWeakRef(::std::weak_ptr<::Container> ref);

    MCAPI ContainerWeakRef(::BlockPos const& blockPos, ::ContainerRuntimeId const& containerRuntimeId);

    MCAPI ContainerWeakRef(
        ::ActorUniqueID const&      actorId,
        ::ActorContainerType        containerType,
        ::ContainerRuntimeId const& containerRuntimeId
    );

    MCAPI explicit operator bool() const;

    MCAPI ~ContainerWeakRef();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::weak_ptr<::Container> ref);

    MCAPI void* $ctor(::BlockPos const& blockPos, ::ContainerRuntimeId const& containerRuntimeId);

    MCAPI void* $ctor(
        ::ActorUniqueID const&      actorId,
        ::ActorContainerType        containerType,
        ::ContainerRuntimeId const& containerRuntimeId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
