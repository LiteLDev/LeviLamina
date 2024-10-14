#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/JumpControlDescription.h"

class DynamicJumpControlDescription : public ::JumpControlDescription {
public:
    // prevent constructor by default
    DynamicJumpControlDescription& operator=(DynamicJumpControlDescription const&);
    DynamicJumpControlDescription(DynamicJumpControlDescription const&);
    DynamicJumpControlDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~DynamicJumpControlDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void deserializeData$(struct DeserializeDataParams deserializeDataParams);

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
