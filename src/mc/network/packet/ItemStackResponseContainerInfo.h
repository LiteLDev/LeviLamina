#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

struct ItemStackResponseContainerInfo {
public:
    // prevent constructor by default
    ItemStackResponseContainerInfo& operator=(ItemStackResponseContainerInfo const&);
    ItemStackResponseContainerInfo(ItemStackResponseContainerInfo const&);
    ItemStackResponseContainerInfo();

public:
    // NOLINTBEGIN
    MCAPI explicit ItemStackResponseContainerInfo(::ContainerEnumName openContainerNetId);

    MCAPI ~ItemStackResponseContainerInfo();

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
