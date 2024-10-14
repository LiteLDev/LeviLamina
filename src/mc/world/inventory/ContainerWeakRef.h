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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
