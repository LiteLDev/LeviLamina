#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/TypedRuntimeId.h"
#include "mc/world/inventory/ActorContainerType.h"

class ContainerWeakRef {
public:
    // prevent constructor by default
    ContainerWeakRef& operator=(ContainerWeakRef const&);
    ContainerWeakRef(ContainerWeakRef const&);

public:
    // NOLINTBEGIN
    MCAPI ContainerWeakRef();

    MCAPI ContainerWeakRef(class BlockPos const& blockPos, ContainerRuntimeId const& containerRuntimeId);

    MCAPI ContainerWeakRef(
        struct ActorUniqueID const& actorId,
        ::ActorContainerType        containerType,
        ContainerRuntimeId const&   containerRuntimeId
    );

    MCAPI explicit operator bool() const;

    MCAPI ~ContainerWeakRef();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        struct ActorUniqueID const& actorId,
        ::ActorContainerType        containerType,
        ContainerRuntimeId const&   containerRuntimeId
    );

    MCAPI void* ctor$(class BlockPos const& blockPos, ContainerRuntimeId const& containerRuntimeId);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
