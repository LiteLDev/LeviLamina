#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct NavigationDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    NavigationDescription& operator=(NavigationDescription const&);
    NavigationDescription(NavigationDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~NavigationDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    MCAPI NavigationDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void deserializeData$(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
