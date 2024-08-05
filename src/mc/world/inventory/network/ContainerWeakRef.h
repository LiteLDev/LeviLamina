#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/containers/ActorContainerType.h"

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
};
