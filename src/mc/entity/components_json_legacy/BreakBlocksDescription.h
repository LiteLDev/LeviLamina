#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct BreakBlocksDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    BreakBlocksDescription& operator=(BreakBlocksDescription const&);
    BreakBlocksDescription(BreakBlocksDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~BreakBlocksDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    MCAPI BreakBlocksDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void deserializeData$(struct DeserializeDataParams deserializeDataParams);

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
