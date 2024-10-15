#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TrailDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TrailDescription& operator=(TrailDescription const&);
    TrailDescription(TrailDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~TrailDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    MCAPI TrailDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void deserializeData$(struct DeserializeDataParams deserializeDataParams);

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
